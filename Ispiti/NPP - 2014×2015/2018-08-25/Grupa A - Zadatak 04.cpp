#include <iostream>
#include <iomanip>

using namespace std;

const int d = 8;

void unos(int niz[][d]);
void ispis(int niz[][d]);
bool isUnos(int broj);
int duzina(int broj);
bool isCrno(int i, int j);
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
    int brojac = 0;
    bool flag = true;

    if(niz[0][1] != niz[1][0] || niz[d - 1][d - 2] != niz[d - 2][d - 1]) flag = false;

    for (int i = 0, j = 2; i < d - 2 || j < d; i++, j++)
        if (niz[i][j] == niz[j][i])
          brojac += 2;
        else
          flag = false;
            

    if (!flag) cout << "Matrica ima " << brojac << " simetricnih elemenata" << endl;

    return flag;
}

bool isCrno(int i, int j)
{
    return ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0));
    //alternativno: return (i + j) % 2 == 0;
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

bool isUnos(int niz[][d], int i, int j)
{
    return (niz[i][j] % 2 == 0 && duzina(niz[i][j]) % 2 != 0 && isCrno(i, j)) ||
           (niz[i][j] % 2 != 0 && duzina(niz[i][j]) % 2 == 0 && !isCrno(i, j));
    
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
            do
            {
              cout << "niz[" << i << "][" << j << "] = " << endl;
              cin >> niz[i][j];

            }while(!isUnos(niz, i, j));
        }
    }
}
