#include <iostream>
#include <ctime>

using namespace std;

const int d = 8;

void unos(int niz[][d]);
void ispis(int niz[][d]);
int isIsoravanUnos(int broj, int i, int j);
int duzina(int broj);
bool isCrno(int i, int j);
double prosjek(int niz[][d]);


int main()
{
    int niz[d][d];

	srand(time(0));
    unos(niz);
    ispis(niz);

	cout << "Prosjek: " << prosjek(niz);
    system("pause>0");
    return 0;
}

double prosjek(int niz[][d])
{
	double suma = 0;
	int brojac = 0;
	for(int i = 0; i < d; i++)
		for(int j = 0; j < d; j++)
			if(j > i && isCrno(i, j))
			{
				suma += niz[i][j];
				brojac++;
			}

	return suma / brojac;
}


bool isCrno(int i, int j)
{
    // true - crna
    // false - bijela
    return (i + j) % 2 == 0;
}

int duzina(int broj)
{
    int brojac = 0;
    while (broj)
    {
        broj /= 10;
        brojac++;
    }

    return brojac;
}

void ispis(int niz[][d])
{
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
            cout << niz[i][j] << " ";
        cout << endl;
    }
}

bool ispravanUnos(int broj, int i, int j)
{
	return (isCrno(i, j) && duzina(broj) % 2 != 0 && broj % 2 == 0) ||
	 	   (!isCrno(i, j) && duzina(broj) % 2 == 0 && broj % 2 != 0);
}

void unos(int niz[][d])
{
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
			while
			(
				cout << "Niz[" << i << "][" << j << "]: ",
                //cin >> niz[i][j],
				niz[i][j] = rand() % 1000,
				!ispravanUnos(niz[i][j], i, j)
			);
        }
    }
}