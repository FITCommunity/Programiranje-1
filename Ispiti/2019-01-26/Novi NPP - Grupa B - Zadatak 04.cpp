#include <iostream>

using namespace std;

struct figura
{
	int ID;
	char *nazivFigure;
	float *visinaFigure;
};

void Unos(figura &f)
{
	cout << "Unesite ID: ";
	cin >> f.ID;

	cout << "Unesite naziv figure: ";
	cin.ignore();
	char nazivFigure[32];
	cin.getline(nazivFigure, sizeof nazivFigure);
	int velicina = sizeof nazivFigure + 1;
	f.nazivFigure = new char[velicina];
	strcpy_s(f.nazivFigure, velicina, nazivFigure);

	cout << "Unesite visinu figure: ";
	f.visinaFigure = new float;
	cin >> *f.visinaFigure;

}

void Ispis(const figura &f)
{
	cout << f.ID << " " << f.nazivFigure << " " << *f.visinaFigure << endl;
}

void Dealociraj(figura &f)
{
	delete[] f.nazivFigure; f.nazivFigure = nullptr;
	delete f.visinaFigure; f.visinaFigure = nullptr;
}

float *prosjecnaVisina(figura **matrica, int n)
{
	float *prosjek = new float(0);
	int brojac = 0;

	for (int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(i + j >= n && (i + j) % 2 == 0)
			{
				*prosjek += *matrica[i][j].visinaFigure;
				brojac++;
			}
				
	*prosjek /= brojac;
	return prosjek;
}


int main()
{
	int n;

	while (cout << "Unesite dimenzije: ", cin >> n, n <= 0);

	figura **matrica = new figura*[n];
	for (int i = 0; i < n; i++)
		matrica[i] = new figura[n];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			Unos(matrica[i][j]);

	/*for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			Ispis(matrica[i][j]);
	*/

	float *prosjek = prosjecnaVisina(matrica, n);
	cout << "Prosjecna visina: " << *prosjek << endl;
	delete prosjek;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			Dealociraj(matrica[i][j]);
		delete[] matrica[i];
	}
	delete[] matrica;

	system("pause>0");
	return 0;
}