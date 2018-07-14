#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int broj = 0;
    
    while(broj <= 0)
    {
        cout << "Unesite pozitivan broj: ";
        cin >> broj;
    }
    
    int temp = broj;
    int noviBroj = 0;
    int brojac = 0;
    while(broj)
    {
        int cifra = broj % 10;
        
        if(cifra % 2 == 0)
            cifra = 5;
            
        noviBroj = cifra * pow(10, brojac++) + noviBroj;
        
        broj /= 10;
    }
    
    cout << "Razlika: " << temp - noviBroj << endl;
    
    return 0;
}