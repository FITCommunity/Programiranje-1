/*
  Poštujući sve faze procesa programiranje, napisati program će odrediti i ispisati 
  zadnje tri cifre broja x^n. Unos brojeva x i n vršiti u glavnoj funkciji uz uslov 
  10 < x < 100 i 2 < n < 10, a funkciju za određivanje zadnje tri cifre napraviti zasebno.
  
  Primjer izlaza:
  Unesite brojeve x i n: 64 i 5
  Zadnje tri cifre broja su: 824
*/

#include <iostream>
#include <cmath>
 
using namespace std;
 
int zadnje3cifre(int x, int n)
{
    int broj = pow(x, n);
   
    return broj % 1000;
}
 
int main()
{
    int x, n;
   
    do
    {
        cout << "Unesite x: " << endl;
        cin >> x;
       
    }while(x < 10 || x > 100);
   
    do
    {
        cout << "Unesite n: " << endl;
        cin >> n;
       
    }while(n < 2 || n > 10);
   
    cout << zadnje3cifre(x, n) << endl;
}
