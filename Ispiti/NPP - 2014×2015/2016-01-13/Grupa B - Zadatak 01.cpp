#include <iostream>

using namespace std;

void unos(int niz[], int duzina)
{
    for (int i = 0; i < duzina; i++)
        cin >> niz[i];
}

float prosjecna(int niz[], int duzina)
{
    float suma = 0;
    for (int i = 0; i < duzina; i++)
        suma += niz[i];

    return suma / duzina;
}

bool opadajuci(int niz[], int duzina)
{
    for (int i = 0; i < duzina - 1; i++)
        if (niz[i] < niz[i + 1])
            return false;
    return true;
}

int main()
{
    int niz[7];

    cout << "Unesite elemente u niz: " << endl;
    unos(niz, 7);

    cout << "Prosjecna vrijednost niza je: " << prosjecna(niz, 7) << endl;

    if (opadajuci(niz, 7))
        cout << "Niz ima opadajuci poredak" << endl;
    else
        cout << "Niz nema opadajuci poredak" << endl;

    system("pause>0");
    return 0;
}