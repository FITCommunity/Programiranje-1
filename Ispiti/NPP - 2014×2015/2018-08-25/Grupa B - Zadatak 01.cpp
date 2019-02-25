#include <iostream>
#include <cmath>

using namespace std;

int faktorijel(int broj)
{
    int proizvod = 1;
    for (int i = 2; i <= broj; i++) proizvod *= i;
    return proizvod;
}

int main()
{
    int n;
    cout << "Unesite prirodan broj n: ";
    cin >> n;

    float rjesenje = 0;
    for (int i = 1; i <= n; i++)
        rjesenje += pow(-1, i - 1) * i / ((n - i + 1) + faktorijel(i));

    cout << rjesenje << endl;

    system("pause>0");
    return 0;
}