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