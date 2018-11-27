#include <iostream>
#include <cmath>
 
using namespace std;

int getNajmanjuCifru(int broj)
{
    int min = 9;
    while(broj)
    {
        int temp = broj % 10;
        if(temp < min) min = temp;
        broj /= 10;
    }
    
    return min;
}
int zamijeniNajmanjuCifru(int broj)
{
    int min = getNajmanjuCifru(broj);
    int noviBroj = 0;
    int brojac = 0;
    while(broj)
    {
        int temp = broj % 10;
        if(temp == min) temp = 3;
        noviBroj = noviBroj + temp * pow(10, brojac);
        brojac++;
        broj /= 10;
    }
    
    return noviBroj;
}
 
int main()
{
    int broj = 0;
    while(broj <= 0)
    {
        cout << "Unesite pozitivan broj: ";
        cin >> broj;
    }
    
    int noviBroj = zamijeniNajmanjuCifru(broj);
    cout << "Broj nakon promjene najmanje cifre: " << noviBroj << endl;
    cout << "Razlika brojeva iznosi: " << broj - noviBroj << endl;
    
    
    system("pause>0");
    return 0;
}