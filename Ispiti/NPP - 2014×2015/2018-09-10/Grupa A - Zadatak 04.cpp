#include <iostream>

using namespace std;

const int d = 8;

void unos(int niz[][d]);
void ispis(int niz[][d]);
int provjeraUnosa(int broj);
int duzina(int broj);
bool isCrniBijeli(int i, int j);
bool isSimetricna(int niz[][d]);
int pronadiRed(int niz[][d]);
int pronadiKolonu(int niz[][d]);

int main()
{
    int niz[d][d];

    unos(niz);
    ispis(niz);

    isSimetricna(niz) ? cout << "Indeks reda sa najvecim prosjekom je: " << pronadiRed(niz)
                      : cout << "Indeks reda sa najvecim prosjekom je: " << pronadiKolonu(niz);

    system("pause>0");
    return 0;
}

int pronadiRed(int niz[][d])
{
    float prosjeci[d] = { 0 };
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
            prosjeci[i] += niz[i][j];

        prosjeci[i] /= d;
    }

    int indeks = 0;
    for (int i = 1; i < d; i++)
        if (prosjeci[i] > prosjeci[indeks])
            indeks = i;

    return indeks;
}

int pronadiKolonu(int niz[][d])
{
    float prosjeci[d] = { 0 };
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
            prosjeci[i] = niz[j][i];

        prosjeci[i] /= d;
    }

    int indeks = 0;
    for (int i = 1; i < d; i++)
        if (prosjeci[i] < prosjeci[indeks])
            indeks = i;

    return indeks;
}

bool isSimetricna(int niz[][d])
{
    /*
    +-----+-----+-----+-----+-----+-----+-----+-----+
    |  X  |  A  |  B  |     |     |     |     |     |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    |  A  |  X  |     |  C  |     |     |     |     |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    |  B  |     |  X  |     |  D  |     |     |     |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    |     |  C  |     |  X  |     |  E  |     |     |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    |     |     |  D  |     |  X  |     |  F  |     |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    |     |     |     |  E  |     |  X  |     |  G  |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    |     |     |     |     |  F  |     |  X  |  H  |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    |     |     |     |     |     |  G  |  H  |  X  |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    
    */
    
     if(niz[0][1] != niz[1][0] || niz[d - 1][d - 2] != niz[d - 2][d - 1]) return false;
    
     for (int i = 0, j = 2; i < d - 2 || j < d; i++, j++)
        if (niz[i][j] != niz[j][i])
            return false;

    return true;
}

bool isCrniBijeli(int i, int j)
{
    // true - crna
    // false - bijela
    return ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0));
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

int provjeraUnosa(int broj)
{
    if (broj % 2 == 0 && duzina(broj) % 2 != 0)
        return 1;
    else if (broj % 2 != 0 && duzina(broj) % 2 == 0)
        return 0;
    else
        return -1;
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

void unos(int niz[][d])
{
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if (isCrniBijeli(i, j))
            {
                do
                {
                    cout << "Niz[" << i << "][" << j << "]: ";
                    cin >> niz[i][j];

                } while (provjeraUnosa(niz[i][j]) != 1);
            }
            else
            {
                do
                {
                    cout << "Niz[" << i << "][" << j << "]: ";
                    cin >> niz[i][j];

                } while (provjeraUnosa(niz[i][j]) != 0);
            }
        }
    }
}
