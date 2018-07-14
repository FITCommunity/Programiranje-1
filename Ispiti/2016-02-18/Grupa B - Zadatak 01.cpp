#include <iostream>
#include <cmath>

using namespace std;

int faktorijel(int broj)
{
    int proizvod = 1;
    for (int i = 2; i <= broj; i++)
        proizvod *= i;
    return proizvod;
}

float suma(int broj)
{
    float suma = 0;
    for (int i = 1; i <= broj; i++)
        suma += pow(-1, i - 1) * faktorijel(3 * i);
    return suma;
}

int main()
{
    int broj;

    while (cout << "Unesite prirodan broj: ", cin >> broj, broj < 1);
    cout << suma(broj) << endl;

    system("pause>0");
    return 0;
}