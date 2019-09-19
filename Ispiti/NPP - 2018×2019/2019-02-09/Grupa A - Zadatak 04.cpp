#include <iostream>
#include <climits>

using namespace std;

struct kosarkas
{
	char *ID;
	char *imePrezime;
	int *postignutiKosevi;
};

void Unos(kosarkas &k)
{

	cin.ignore();
	cout << "Unesite ID: ";
	char tempID[7];
	cin.getline(tempID, sizeof tempID);
	int velicina = strlen(tempID) + 1;
	k.ID = new char[velicina];
	strcpy_s(k.ID, velicina, tempID);

	cout << "Unesite ime i prezime: ";
	char tempIme[32];
	cin.getline(tempIme, sizeof tempIme);
	velicina = strlen(tempIme) + 1;
	k.imePrezime = new char[velicina];
	strcpy_s(k.imePrezime, velicina, tempIme);

	cout << "Unesite broj postignutih koseva: ";
	k.postignutiKosevi = new int;
	cin >> *k.postignutiKosevi;
}

void Dealociraj(kosarkas &k)
{
	delete[] k.ID; k.ID = nullptr;
	delete[] k.imePrezime; k.imePrezime = nullptr;
	delete k.postignutiKosevi; k.postignutiKosevi = nullptr;
}

int najuspjesnijiKlub(kosarkas **m, int r, int k)
{
	int maxI = 0;
	int max = 0;

	for (int i = 0; i < k; i++)
	{
		int brojac = 0;
		for (int j = 0; j < r; j++)
			brojac += *m[j][i].postignutiKosevi;

		if (brojac > max)
		{
			maxI = i;
			max = brojac;
		}
	}

	return maxI;
}

void Ispis(const kosarkas &k)
{
	cout << "ID: " << k.ID << endl
		<< "Ime i prezime: " << k.imePrezime << endl
		<< "Postignuti kosevi: " << *k.postignutiKosevi << endl;
}

kosarkas *najuspjesnijiIgrac(kosarkas **m, int k, int klub)
{
	int maxI = 0;
	for (int i = 1; i < k; i++)
		if (*m[maxI][klub].postignutiKosevi < *m[i][klub].postignutiKosevi)
			maxI = i;
	return &m[maxI][klub];
}

kosarkas *najgoriKosarkas(kosarkas **m, int r, int k)
{
	int min = INT_MAX;
	kosarkas *najgori = nullptr;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < k; j++)
			if (min > *m[i][j].postignutiKosevi)
			{
				min = *m[i][j].postignutiKosevi;
				najgori = &m[i][j];
			}
	return najgori;
}

int *Razlika(kosarkas **m, int r, int k)
{
	int klub = najuspjesnijiKlub(m, r, k);
	kosarkas *najuspjesniji = najuspjesnijiIgrac(m, k, klub);
	cout << "Najuspjesnihi klub: " << klub << ", a najuspjeniji igrac u tom klubu: " << endl;
	Ispis(*najuspjesniji);
	cout << endl;

	kosarkas *najgori = najgoriKosarkas(m, r, k);
	cout << "Najgori igrac: " << endl;
	Ispis(*najgori);

	return new int(*najuspjesniji->postignutiKosevi - *najgori->postignutiKosevi);
}

int main()
{
	int n, m;
	while (cout << "Unesite broj timova: ", cin >> m, m <= 0);
	while (cout << "Unesite broj igraca: ", cin >> n, n <= 0);

	kosarkas **matrica = new kosarkas*[n];
	for (int i = 0; i < n; i++)
		matrica[i] = new kosarkas[m];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			Unos(matrica[i][j]);

	int *razlika = Razlika(matrica, n, m);
	cout << endl << "Razlika koseva izmedu najboljeg igraca najboljeg tima i najgoreg igraca lige: " << *razlika;
	delete razlika;

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
