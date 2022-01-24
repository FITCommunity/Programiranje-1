#include <iostream>
#include <cmath>

using namespace std;

int obrni(int broj)
{
    int noviBroj = 0;
    while (broj)
    {
        noviBroj = noviBroj * 10 + broj % 10;
        broj /= 10;
    }

    return noviBroj;
}

bool isPalindrom(int broj)
{
    return broj == obrni(broj);
}

bool isProst(int broj)
{
    for (int i = 2; i * i <= broj; i++)
        if (broj % i == 0)
            return false;
    return true;
}

bool isProstPalindrom(int broj)
{
    return isProst(broj) && isPalindrom(broj);
}

int main()
{

    int broj;
    do {
        cout << "Unesite broj: ";
        cin >> broj;
    } while (broj < 100);

    cout << "Broj " << broj << (isProstPalindrom(broj) ? " je prost i palindrom." : " nije prost i palindrom.") << endl;

    system("pause>0");
    return 0;
}