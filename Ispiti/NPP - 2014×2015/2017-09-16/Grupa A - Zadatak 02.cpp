#include <iostream>

using namespace std;

int duzinaBroja(int broj)
{
    int brojac = 0;
    while(broj)
    {
        broj /= 10;
        brojac++;
    }
    
    return brojac;
}

int najmanjiBroj(int broj)
{
    int duzina = duzinaBroja(broj);
    int temp = broj;
    float cifra;
    int najmanji;
    
    if(duzina % 2 == 0)
    {
        for(int i = 0; i < (duzina - 1) / 2; i++)
            temp /= 10;
        
        cifra = ((temp % 10) + (temp / 10) % 10) / 2.0;
    }
    else
    {
        for(int i = 0; i < duzina / 2; i++)
            temp /= 10;
            
        cifra = temp % 10;
        
    }
    
    najmanji = int(broj / cifra);
    if(najmanji * cifra < broj)
        return najmanji + 1;
    else
        return najmanji;
    
}


int main()
{
    int broj;
    do
    {
        cout << "Unesite broj: ";
        cin >> broj;
    }while(broj <= 0);
    
    cout << "Najmanji broj je " << najmanjiBroj(broj) << endl;
    
    
    
    
    return 0;
}