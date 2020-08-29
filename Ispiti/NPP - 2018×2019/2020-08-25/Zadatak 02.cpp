#include <iostream>
 
using namespace std;
 
long unsigned obrni(long unsigned broj)
{
    long unsigned noviBroj = 0;
    while(broj)
    {
        int temp = broj % 10;
        if(temp % 2 != 0) noviBroj = 10 * noviBroj + temp;
    
        broj /= 10;
    }
    
    return noviBroj;
}
 
int main()
{
    long unsigned int A = 0;
    while(A < 100000)
    {
        cout << "Unesite broj: ";
        cin >> A;
    }
    
    long unsigned B = obrni(A);
    cout << A - B << endl;
    
    system("pause>0");
    return 0;
}