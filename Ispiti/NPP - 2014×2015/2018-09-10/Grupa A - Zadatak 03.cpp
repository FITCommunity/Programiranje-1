#include <iostream>

using namespace std;

void Unos(char niz[], int duzina)
{
    for (int i = 0; i < duzina; i++)
        while 
        (
            cout << "Unesite slovo: ", 
            cin >> niz[i], 
            niz[i] < 'A' || (niz[i] > 'Z' && niz[i] < 'a') || niz[i] < 'z'
        );
}

void Ispis(char niz[], int duzina)
{
    for (int i = 0; i < duzina; i++)
        cout << niz[i] << " ";
    cout << endl;
}

void Ukloni(char niz[], int duzina)
{
    for (int i = 0; i < duzina; i++)
    {
        if (niz[i] >= 'A' && niz[i] <= 'Z')
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
    char niz[duzina];

    Unos(niz, duzina);
    Ispis(niz, duzina);
    Ukloni(niz, duzina);
    system("pause>0");
    return 0;
}