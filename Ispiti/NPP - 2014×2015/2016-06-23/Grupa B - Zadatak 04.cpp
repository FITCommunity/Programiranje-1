#include <iostream>

using namespace std;

void unos(int niz[], int duzina)
{
    for (int i = 0; i < duzina; i++)
        cin >> niz[i];
}

void pronaci(int niz[], int duzina)
{
    int min1 = 0, min2 = 1;
    if (niz[min1] > niz[min2])
    {
        int temp = min1;
        min1 = min2;
        min2 = temp;
    }

    for (int i = 2; i < duzina; i++)
    {
        if (niz[i] < niz[min1])
            min1 = i;
        if (niz[i] < niz[min2] && i != min1)
            min2 = i;
    }

    cout << "Dva najmanja broja su " << niz[min1] << " i " << niz[min2] << endl;
}

float suma(int niz[], int duzina)
{
    float suma = 0;
    for (int i = 0; i < duzina; i++)
        suma += 1.F / niz[i];
    return suma;
}

int prebrojati(int niz[], int duzina)
{
    int brojac = 0;
    for (int i = 0; i < duzina; i++)
    {
        if (niz[i] < 0)
        {
            cout << i << " " << niz[i] << endl;
            brojac++;
        }
    }
    return brojac;
}

int main()
{
    int niz[6];
    unos(niz, 6);

    pronaci(niz, 6);

    cout << "Suma reciprocnih vrijednosti: " << suma(niz, 6) << endl;
    cout << "Broj negativnih brojeva: " << prebrojati(niz, 6) << endl;

    system("pause>0");
    return 0;
}