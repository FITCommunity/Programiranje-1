#include <iostream>

using namespace std;

struct uposlenik
{
	char *ID;
	char *imePrezime;
	float *plata;
};

void Unos(uposlenik &u)
{
	int velicina;
	cin.ignore();

	cout << "Unesite ID: ";
	char ID[6];
	cin.getline(ID, sizeof ID);
	velicina = sizeof ID + 1;
	u.ID = new char[velicina];
	strcpy_s(u.ID, velicina, ID);

	cout << "Unesite ime i prezime: ";
	char imePrezime[32];
	cin.getline(imePrezime, sizeof imePrezime);
	velicina = sizeof imePrezime + 1;
	u.imePrezime = new char[velicina];
	strcpy_s(u.imePrezime, velicina, imePrezime);

	cout << "Unesite platu: ";
	u.plata = new float;
	cin >> *u.plata;

}

void Ispis(const uposlenik &u)
{
	cout << u.ID << " " << u.imePrezime << " " << *u.plata << endl;
}

void Dealociraj(uposlenik &u)
{
	delete[] u.ID; u.ID = nullptr;
	delete[] u.imePrezime; u.imePrezime = nullptr;
	delete u.plata; u.plata = nullptr;
}

void MaxProsjekPlata(uposlenik **matrica, int n, int m)
{
	float *prosjek = new float[n] {0};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			prosjek[i] += *matrica[i][j].plata;
		prosjek[i] /= m;
	}

	int maxIndeks = 0;
	for (int i = 1; i < n; i++)
		if (prosjek[i] > prosjek[maxIndeks])
			maxIndeks = i;

	cout << "Odjel " << maxIndeks << " ima najvecu prosjecnu platu: " << prosjek[maxIndeks];	
	delete[] prosjek;
}


int main()
{
	int n, m;
	
	while (cout << "Unesite dimenzije: ", cin >> n >> m, n <= 0 || m <= 0);

	uposlenik **matrica = new uposlenik*[n];
	for (int i = 0; i < n; i++)
		matrica[i] = new uposlenik[m];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			Unos(matrica[i][j]);

	/*for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			Ispis(matrica[i][j]);*/
	
	MaxProsjekPlata(matrica, n, m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			Dealociraj(matrica[i][j]);
		delete[] matrica[i];
	}
	delete[] matrica;

	system("pause>0");
	return 0;
}