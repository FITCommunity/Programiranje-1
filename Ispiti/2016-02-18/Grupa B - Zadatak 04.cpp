#include <iostream>

using namespace std;

void unos(float niz[], int duzina)
{
    for (int i = 0; i < duzina; i++)
        while (cin >> niz[i], niz[i] < -7.0 || niz[i] > 7.0);
}

bool provjera(float niz[], int duzina)
{
    for (int i = 0; i < duzina; i++)
        if (niz[i] < 0)
            return true;
    return false;
}

int najvecineg(float niz[], int duzina)
{
    int min = 0;
    for (int i = 1; i < duzina; i++)
        if (niz[i] < niz[min])
            min = i;

    return min;
}

float sumaneg(float niz[], int duzina)
{
    float suma = 0;
    for (int i = 0; i < duzina; i++)
        if (niz[i] < 0)
            suma += niz[i];
    return suma;
}

int main()
{
    float niz[6];
    unos(niz, 6);

    if (provjera(niz, 6))
    {
        cout << "Najveci negativni broj u nizu se nalazi na poziciji " << najvecineg(niz, 6) << endl;
        cout << "Suma negativnih brojeva: " << sumaneg(niz, 6) << endl;
    }
    else
        cout << "U nizu nema negativnih brojeva" << endl;

    system("pause>0");
    return 0;
}