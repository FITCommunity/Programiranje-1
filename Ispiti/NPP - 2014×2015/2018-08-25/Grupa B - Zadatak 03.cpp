#include <iostream>
#include <cmath>

using namespace std;

void fibonacci(int niz[], int duzina)
{
    niz[0] = 0;
    niz[1] = 1;

    for (int i = 2; i < duzina; i++)
        niz[i] = niz[i - 1] + niz[i - 2];
}

void ispis(int niz[], int duzina)
{
    for (int i = 0; i < duzina; i++)
        cout << niz[i] << " ";
    cout << endl;
}

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

int getSrednju(int broj)
{
    int duzina = brojCifri(broj);
    
    if (duzina % 2 == 0)
    {
        duzina = duzina / 2 - 1;
        broj /= pow(10, duzina);

        int srednja = 0;
        srednja += broj % 10;
        broj /= 10;
        srednja += broj % 10;
        srednja /= 2;

        return srednja;
    }
    else
    {
        duzina /= 2;
        broj /= pow(10, duzina);
        return broj % 10;
    }
}

void sortiraj(int niz[], int duzina)
{
    for (int i = 0; i < duzina; i++)
    {
        for (int j = 0; j < duzina; j++)
            if (getSrednju(niz[i]) < getSrednju(niz[j]))
            {
                int temp = niz[i];
                niz[i] = niz[j];
                niz[j] = temp;
            }
    }
}

int main()
{
    const int d = 20;
    int niz[20];

    fibonacci(niz, d);
    ispis(niz, d);
    sortiraj(niz, d);
    ispis(niz, d);

    system("pause>0");
    return 0;
}