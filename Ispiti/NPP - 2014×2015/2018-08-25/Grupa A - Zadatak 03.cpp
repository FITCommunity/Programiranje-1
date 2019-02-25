#include <iostream>
#include <cmath>

using namespace std;

int brCifri(int broj)
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
        do
        {
            cout << "Unesite broj: ";
            cin >> niz[i];

            int duzina = brCifri(niz[i]);

        } while (duzina % 2 == 0 && duzina > 2);
}

int getSrednjuCifru(int broj)
{
    int duzina = brCifri(broj) / 2;
    broj /= pow(10, duzina);
    return broj % 10;
}

void Zamjeni(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void Sortiraj(int niz[], int duzina, char nacin)
{
    for (int i = 0; i < duzina; i++)
    {
        bool zamjena = false;
        for (int j = 0; j < duzina; j++)
        {
            if (nacin == 'U')
            {
                if (getSrednjuCifru(niz[i]) < getSrednjuCifru(niz[j]))
                {
                    Zamjeni(niz[i], niz[j]);
                    zamjena = true;
                }
            }
            else if (nacin == 'S')
            {
                if (getSrednjuCifru(niz[i]) > getSrednjuCifru(niz[j]))
                {
                    Zamjeni(niz[i], niz[j]);
                    zamjena = true;
                }
            }
        }

        if (!zamjena) break;
    }
}

void Ispis(int niz[], int duzina)
{
    for (int i = 0; i < duzina; i++) cout << niz[i] << " ";
    cout << endl;
}

int main()
{
    int niz[20];
    char znak;

    Unos(niz, 20);

    cout << "Unesite nacin sortiranja " << endl << "U - Uzlazno" << endl << "S - Silazni" << endl;
    cin >> znak;

    if (znak == 'U' || znak == 'S')
    {
        Ispis(niz, 20);
        Sortiraj(niz, 10, znak);
        Ispis(niz, 20);

    }
    else cout << "Sortiranje nedefinisano" << endl;


    system("pause>0");
    return 0;
}