#include <iostream>
 
using namespace std;
 
void obrni(int &broj)
{
    int noviBroj = 0;
    while(broj)
    {
        int temp = broj % 10;
        if(temp % 2 == 0) noviBroj = 10 * noviBroj + temp;
    
        broj /= 10;
    }
    
    broj = noviBroj;
}
 
int main()
{
    int broj = 0;
    while(broj < 50 || broj > 5000000)
    {
        cout << "Unesite broj: ";
        cin >> broj;
    }
    
    obrni(broj);
    cout << broj << endl;
    
    system("pause>0");
    return 0;
}