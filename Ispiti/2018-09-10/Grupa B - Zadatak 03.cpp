#include <iostream>

using namespace std;

int brojCifri(int broj)
{
    int brojac = 0;
    while (broj)
    {
        brojac++;
        broj /= 10;
    }
    return brojac;
}

void Unos(int niz[], int duzina)
{
    for (int i = 0; i < duzina; i++)
        while 
        (
            cout << "Unesite broj: ", 
            cin >> niz[i], 
            niz[i] % 2 != 0 || brojCifri(niz[i]) % 2 == 0
        );
}

void Ispis(int niz[], int duzina)
{
    for (int i = 0; i < duzina; i++)
        cout << niz[i] << " ";
    cout << endl;
}

void Ukloni(int niz[], int duzina)
{
    for (int i = 0; i < duzina; i++)
    {
        if (niz[i] % 6 == 0)
        {
            for (int j = i + 1; j < duzina; j++)
                niz[j - 1] = niz[j];
            i--;
            duzina--;
        }
    }

    Ispis(niz, duzina);
}

int main()
{
    const int duzina = 20;
    int niz[duzina];

    Unos(niz, duzina);
    Ispis(niz, duzina);
    Ukloni(niz, duzina);
    system("pause>0");
    return 0;
}