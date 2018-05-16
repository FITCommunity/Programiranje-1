/*
    Napisati program koji na osnovu unesenog cijelog broja N pronalazi i ispisuje srednju 
    cifru ako broj N ima neparan broj cifara, odnosno aritmeticku sredinu (tip float) 
    srednje dvije cifre ako broj N ima parni broj cifara, a zatim pronaci najmanji broj tipa 
    int sa kojim se srednja cifra ili aritmeticka sredina srednjih cifri treba pomnoziti da bi 
    se dobio broj koji je veci od inicijalnog zadanog broja.
    
    Npr. za broj 75631 srednja cifra je 6, najmanja integer vrijednost sa kojom treba pomnoziti 
    broj 6 da bi se dobio broj veci od 75631 je 12606 jer je 12606 * 6 = 75636, 75636 > 75631
    ili za broj 984354 aritmeticka sredina srednje dvije cifre je 3.5, najmanja integer vrijednost 
    sa kojom treba pomnoziti broj 3.5 da bi se dobio broj veci od 984354 je 281245 jer je 
    281245 * 3.5 = 984357.5, 984357.5 > 984354
    
    (Napomena: Potrebno je voditi racuna o tipovima podataka.)
*/

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