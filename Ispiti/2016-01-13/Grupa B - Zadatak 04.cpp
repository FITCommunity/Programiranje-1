#include <iostream>

using namespace std;

int faktorijel(int broj)
{
    int proizvod = 1;
    for (int i = 2; i <= broj; i++)
        proizvod *= i;

    return proizvod;
}

bool provjera(int broj)
{
    int a, b, c;
    c = broj % 10;
    b = (broj / 10) % 10;
    a = (broj / 100) % 10;

    return broj == faktorijel(a + b) + faktorijel(c);
}

int main()
{
    for (int i = 100; i < 1000; i++)
        if (provjera(i))
            cout << i << endl;

    system("pause>0");
    return 0;
}