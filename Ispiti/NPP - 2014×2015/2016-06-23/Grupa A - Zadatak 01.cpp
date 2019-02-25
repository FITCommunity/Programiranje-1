#include <iostream>
#include <cmath>

using namespace std;

double sabirak(int broj)
{
    double x = 2;
    double suma = 0;
    for (int i = 0; i < broj; i++)
    {
        suma += x;
        x = sqrt(suma);
    }
    return sqrt(suma);
}

double umnozak(int broj)
{
    double proizvod = 1;
    for (int i = 1; i <= broj; i++)
        proizvod *= 1 / sabirak(i);
    return proizvod;
}

int main()
{
    int broj;
    while (cout << "Unesite prirodan broj ", cin >> broj, broj < 1);

    cout << umnozak(broj) << endl;

    system("pause>0");
    return 0;
}