#include <iostream>

using namespace std;

const int d = 8;

void unos(int niz[][d]);
void ispis(int niz[][d]);
int provjeraUnosa(int broj);
int duzina(int broj);
bool isCrniBijeli(int i, int j);
bool isSimetricna(int niz[][d]);
void transponuj(int niz[][d]);

int main()
{
    int niz[d][d];

    unos(niz);

    if (isSimetricna(niz))
    {
        ispis(niz);
        transponuj(niz);
        ispis(niz);
    }


    system("pause>0");
    return 0;
}

void transponuj(int niz[][d])
{
    int noviNiz[d][d];
    for (int i = 0; i < d; i++)
        for (int j = 0; j < d; j++)
            noviNiz[j][i] = niz[i][j];

    for (int i = 0; i < d; i++)
        for (int j = 0; j < d; j++)
            niz[i][j] = noviNiz[i][j];
}

bool isSimetricna(int niz[][d])
{
    int brojac = 0;
    bool flag = true;
    for (int i = 0; i < d; i++)
        for (int j = i + 1; j < d; j++)
            if (niz[i][j] == niz[j][i])
                brojac += 2;
            else
                flag = false;

    if (!flag) cout << "Matrica ima " << brojac << " simetricnih elemenata" << endl;

    return flag;
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
    while(broj)
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