/*
  Napisati program koji će za uneseni prirodni broj n računati:
  
  S = [1/(n+1)] - [1/(n+2!)] + [1/(n+3!)] - [1/(n+4!)] + ... + (-1)^(n-1) * [1/(n+n!)]
  10 < n <= 100
  
  Obavezno koristiti i ispravne tipove podataka i optimizirati kod.
*/

#include <iostream>
#include <cmath>

using namespace std;

int faktorijal(int broj)
{
    int fakt = 1;
    
    for(int i = 1; i <= broj; i++)
        fakt *= i;
        
    return fakt;
}

int main()
{
    double suma = 0;
    int n;
    
    do
    {
        cout << "Unesite prirodan broj: " << endl;
        cin >> n;
        
    }while(n <= 10 || n > 100);
    
    for(int i = 1; i <= n; i++)
        suma = suma + pow(-1, i - 1) * i / (n + faktorijal(i));
        
    cout << suma << endl;
    
    
    system("pause>0");
    return 0;
}
