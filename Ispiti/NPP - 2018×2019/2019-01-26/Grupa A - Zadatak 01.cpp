#include <iostream>
 
using namespace std;
 
bool isProst(int broj)
{
    for(int i = 2; i <= broj / 2; i++)
        if(broj % i == 0)
            return false;
    return true;
}
 
int main()
{
    int broj = 0, cifra;
    
    while(1)
    {
        int temp;
        cout << "Upisi znamenku: ";
        cin >> temp;
    
        if(temp < 0 || temp > 9) break;
    
        broj = 10 * broj + temp;
    }
    
    cout << "Broj sastavljen od zadanih cifri je " << broj << endl;
    
    if(isProst(broj)) cout << "Broj je prost!" << endl;
    
    
    system("pause>0");
    return 0;
}