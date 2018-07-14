#include <iostream>

using namespace std;

void unos(int matrica[][4])
{
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 4; j++)
            while (cout << "Unesite prolaznu ocjenu (6 - 10):\n", cin >> matrica[i][j], matrica[i][j] < 6 || matrica[i][j] > 10);
}

float prosjek(int niz[])
{
    int suma = 0;
    for (int i = 0; i < 4; i++)
        suma += niz[i];

    return suma / 1.F / 4;
}

int prebroji(int matrica[][4], int predmet)
{
    int brojac = 0;
    for (int i = 0; i < 5; i++)
        if (matrica[i][predmet] > 7)
            brojac++;
            
    return brojac;
}

int main()
{
    int matrica[5][4];

    unos(matrica);

    int izbor = 0;

    while (cout << "Izaberite studenta:\n", cin >> izbor, izbor < 1 || izbor > 5);
    cout << "Prosjek odabranog studenta je: " << prosjek(matrica[izbor - 1]) << endl;

    while (cout << "Izaberite predmet:\n", cin >> izbor, izbor < 1 || izbor > 4);
    cout << "Broj studenata na odabranom predmetu sa ocjenom 8 ili vise je " << prebroji(matrica, izbor - 1) << endl;

    system("pause>0");
    return 0;
}