#include <iostream>

using namespace std;

int srednjaCifra(int broj)
{
    //svi brojevi ce biti trocifreni
    broj /= 10;
    return broj % 10;
}

double aritmeticka(int m, int n)
{
    int brojac = 0,
        suma = 0,
        max;
        
    for(int i = m; i < n; i++)
    {
        suma = suma + srednjaCifra(i);
        brojac++;
    }
    
    max = srednjaCifra(m);
    for(int i = m + 1; i < n; i++)
    {
        if(max < srednjaCifra(i))
            max = srednjaCifra(i);
    }
    
    cout << "Najveca sredja cifra je: " << max << endl;
    
    return double(suma)/brojac;
}

int main()
{
    int m, n;
    
    do
    {
        cout << "Unesite broj m i n, tako da je " << endl
             << "n > m" << endl
             << "m > 100" << endl
             << "n < 500" << endl;
        cin >> m >> n;
        
    }while(n < m || m < 100 || n > 500 || n < 100);
    
    cout << "Aritmeticka sredina srednjih cifara: " << aritmeticka(m, n) << endl;
    
    system("pause>0");
    return 0;
    
}