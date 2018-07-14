#include <iostream>

using namespace std;

void upis(int niz[][3])
{
    cout << "Unesite matricu: " << endl;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            cin >> niz[i][j];
}

void kopiraj(int niz1[][3], int niz2[][3])
{
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            niz2[i][j] = niz2[i + 2][j] = niz1[i][j];
}

void zamjeni(int niz[][3], int r1, int r2)
{
    for (int i = 0; i < 3; i++)
    {
        int temp = niz[r1][i];
        niz[r1][i] = niz[r2][i];
        niz[r2][i] = temp;
    }
}

int main()
{
    int niz1[2][3];
    int niz2[4][3];
    int matrica, red;
    int s;

    upis(niz1);
    kopiraj(niz1, niz2);
    

    int red1, red2;
    while (cout << "Izaberite redove: ", cin >> red1 >> red2, red1 < 1 || red2 < 1 || red1 > 4 || red2 > 4);

    zamjeni(niz2, red1 - 1, red2 - 1);

    return 0;
    system("pause>0");
}