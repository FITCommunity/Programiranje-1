#include <iostream>

using namespace std;

bool slozen(int broj)
{
    for(int i = 2; i < broj; i++)
        if(broj % i == 0)
            return true;
    return false;
}

double ispis(int m, int n)
{
    int brojac = 0;
    int suma = 0;
    for(int i = m; i <= n; i++)
    {
        if(slozen(i))
        {
            cout << i << endl;
            suma += i;
            brojac++;
        }
    }
    
    return double(suma) / brojac;
}

int main()
{
    int m, n;
    do
    {
        cout << "Unesite m i n: ";
        cin >> m >> n;
    }while(m < 10 || m > 100 || n < 500 || n > 2000);
    
    cout << "Aritmeticka sredina prostih brojeva od " << m << " do " << n
        << " je " << ispis(m, n) << endl;
        
    return 0;
}
