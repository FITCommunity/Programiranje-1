#include <iostream>

using namespace std;

void unos(int matrica[][5])
{
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            while (cin >> matrica[i][j], matrica[i][j] < 1);
}

bool pozicija(int matrica[][5], int &indeks)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrica[i][j] == 5)
            {
                indeks = i;
                return true;
            }
        }
    }

    return false;
}

float prosjecna(int matrica[][5], int indeks)
{
    float suma = 0;
    for (int j = 0; j < 5; j++)
        suma += matrica[indeks][j];
    return suma / 5;
}

int main()
{
    int matrica[5][5];
    int indeks;

    unos(matrica);

    if (pozicija(matrica, indeks))
    {
        for (int i = 0; i < 5; i++)
            cout << matrica[indeks][i] << " ";
        cout << endl << "Prosjek: " << prosjecna(matrica, indeks) << endl;
    }

    system("pause>0");
    return 0;
}