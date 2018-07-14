#include <iostream>

using namespace std;

bool trivijalan(int broj)
{
    for (int i = 2; i <= broj / 2; i++)
        if (broj % i == 0)
            return false;

    return true;
}

int djeljitelji(int broj)
{
    int brojac = 1;
    for (int i = 1; i <= broj / 2; i++)
        if (broj % i == 0)
            brojac++;
    return brojac;
}

int main()
{
    int broj = 0;

    while (cout << "Unesite prirodan broj:\n", cin >> broj, broj < 1);

    if (trivijalan(broj))
        cout << "Broj " << broj << " je trivijalan i njegovi djeljitelji su 1 i " << broj << endl;
    else
        cout << "Broj " << broj << " ima " << djeljitelji(broj) << " djeljitelja" << endl;

    system("pause>0");
    return 0;
}