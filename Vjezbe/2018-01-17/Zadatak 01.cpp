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