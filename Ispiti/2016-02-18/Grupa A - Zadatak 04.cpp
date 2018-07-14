#include <iostream>

using namespace std;

void unos(char niz[], int duzina)
{
    for (int i = 0; i < duzina; i++)
        while (cin >> niz[i], niz[i] < 'a' || niz[i] > 'z');
}

void promijeni(char charNiz[], int intNiz[], int duzina)
{
    for (int i = 0; i < duzina; i++)
        intNiz[i] = charNiz[i];
}

int bin(int broj)
{
    int binarni = 0, ostatak, brojac = 0;
    while (broj > 0)
    {
        ostatak = broj % 2;
        binarni = binarni + ostatak*pow(10.0, brojac);
        brojac++;
        broj /= 2;
    }
    return binarni;
}

void binarni(int niz[], int duzina)
{
    for (int i = 0; i < duzina; i++)
        niz[i] = bin(niz[i]);
}

int main()
{
    char charNiz[5];
    unos(charNiz, 5);

    int intNiz[5];
    promijeni(charNiz, intNiz, 5);

    binarni(intNiz, 5);

    system("pause>0");
    return 0;
}