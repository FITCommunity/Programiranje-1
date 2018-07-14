#include <iostream>

using namespace std;

int suma_pravih_djeljitelja(int broj)
{
    int suma = 0;
    for (int i = 1; i <= broj / 2; i++)
        if (broj % i == 0)
            suma += i;
    return suma;
}

bool provjera(int a, int b)
{
    return a == suma_pravih_djeljitelja(b) && b == suma_pravih_djeljitelja(a);
}

int main()
{
    int a, b;

    while (cout << "Unesite 2 prirodna broja: ", cin >> a >> b, a < 1 || b < 1);

    if (provjera(a, b))
        cout << "Brojevi " << a << " i " << b << " su prijateljski par." << endl;
    else
        cout << "Brojevi " << a << " i " << b << " nisu prijateljski par." << endl;

    system("pause>0");
    return 0;
}