#include <iostream>

using namespace std;

bool isSavrsen(int broj)
{
    int suma = 0;
    for(int i = 1; i < broj; i++)
        if(broj % i == 0)
            suma += i;
            
    return suma == broj;
}

double aritmetickaSredina(int m, int n)
{
    int brojac = 0;
    int suma = 0;
    for(int i = m; i <= n; i++)
    {
        if(isSavrsen(i))
        {
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
    }while(m <= 0 || n <= 0);
    
    if(m > n)
    {
        int temp = n;
        n = m;
        m = temp;
    }
    
    cout << "Aritmeticka sredina savrsenih brojeva od " << m << " do " << n
        << " je " << aritmetickaSredina(m, n) << endl;
        
    return 0;
}