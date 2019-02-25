#include <iostream>
#include <ctime>

using namespace std;

bool isProst(int broj)
{
    for (int i = 2; i < broj; i++)
        if (broj % i == 0)
            return false;
    return true;
}

void generisi(int niz[], int n)
{
    for (int i = 0; i < n; i++) niz[i] = rand() % 1000 + 1;
}

int procenatProstihBrojeva(int niz[], int n)
{
    int brojac = 0;
    for (int i = 0; i < n; i++)
        if (isProst(niz[i]))
            brojac++;

    return 100 * brojac / n;
}

int main()
{
    int niz[1000];
    int n = 0;

    while (n < 10 || n > 1000)
    {
        cout << "Unesite prirodan broj: ";
        cin >> n;
    }

    srand(time(0));
    generisi(niz, n);

    cout << "Procenat prostih brojeva je " << procenatProstihBrojeva(niz, n) << "%" << endl;

    system("pause>0");
    return 0;
}