#include <iostream>

using namespace std;

void unos(int niz[], int duzina)
{
    for (int i = 0; i < duzina; i++)
        cin >> niz[i];
}

void inicijalizacija(int niz1[], int niz2[], int niz3[])
{
    for (int i = 0; i < 7; i++)
    {
        if (i < 3)
            niz3[i] = niz1[i];
        else
            niz3[i] = niz2[i - 3];
    }
}

int sumiraj(int niz[], int izbor)
{
    int pocetak, kraj;
    if (izbor == 1)
    {
        pocetak = 0;
        kraj = 3;
    }
    else if (izbor == 2)
    {
        pocetak = 3;
        kraj = 7;
    }
    else
    {
        pocetak = 0;
        kraj = 7;
    }

    int suma = 0;
    for (int i = pocetak; i < kraj; i++)
        suma += niz[i];

    return suma;
}
int main()
{
    int niz1[3], niz2[4], niz3[7];

    cout << "Unesite elemente u prvi niz: " << endl;
    unos(niz1, 3);

    cout << "Unesite elemente u drugi niz: " << endl;
    unos(niz2, 4);

    inicijalizacija(niz1, niz2, niz3);

    int izbor;
    while (cout << "Izaberite niz:\n", cin >> izbor, izbor < 1 || izbor > 3);
    cout << "Suma niza " << izbor << " je " << sumiraj(niz3, izbor) << endl;

    system("pause>0");
    return 0;
}