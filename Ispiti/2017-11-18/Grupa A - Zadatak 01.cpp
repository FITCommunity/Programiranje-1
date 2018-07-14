#include <iostream>

using namespace std;

bool prost(int broj)
{
    for(int i = 2; i < broj; i++)
        if(broj % i == 0)
            return false;
            
    return true;
}

int main()
{
    int a, b;
        
    do
    {
        cout << "Unesite dva prirodna broja: ";
        cin >> a >> b;
        
    }while(a <= 0 || b <= 0 || a > 500 || b > 500);
    
    
    if(a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    
    long int proizvod = 1;
    for(int i = a; i <= b; i++)
        if(prost(i))
            proizvod *= i;
            
    cout << "Proizvod prostih brojeva od " << a << " do " << b 
         << " zavrsava sa cifrom " << proizvod % 10 << endl;
    
    return 0;
}