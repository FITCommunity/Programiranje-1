#include <iostream>
#include <cmath>

using namespace std;

int brCifri(int broj)
{
    int duzina = 0;
    while (broj)
    {
        broj /= 10;
        duzina++;
    }

    return duzina;
}

bool provjera(int broj)
{
    int duzina = brCifri(broj);
    int kvadrat = broj * broj;
    int stepen = pow(10, duzina);
    int ostatak = kvadrat % stepen;

    return broj == ostatak;
}

int main()
{
    for (int i = 1; i < 150; i++)
        if (provjera(i))
            cout << i << endl;

    system("pause>0");
    return 0;
}