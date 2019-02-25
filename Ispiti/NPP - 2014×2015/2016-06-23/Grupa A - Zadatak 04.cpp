#include <iostream>

using namespace std;

void unos(int niz[], int duzina)
{
    for (int i = 0; i < duzina; i++)
        cin >> niz[i];
}

void pronaci(int niz[], int duzina)
{
    int max1 = 0, max2 = 1;
    if (niz[max1] > niz[max2])
    {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }

    for (int i = 2; i < duzina; i++)
    {
        if (niz[i] > niz[max1])
            max1 = i;
        if (niz[i] > niz[max2] && i != max1)
            max2 = i;
    }

    cout << "Dva najveca broja su " << niz[max1] << " i " << niz[max2] << endl;
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
        if (niz[i] > 0)
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
    cout << "Broj pozitivnih brojeva: " << prebrojati(niz, 6) << endl;

    system("pause>0");
    return 0;
}