/*
    Napisati program koji æe uzastopno uèitatvati cijele brojeve m i n (1 <= m <= 50, 1 <= n <= 500) i 
    pronalaziti srednju cifru njihovog proizvoda/umnoška (srednju cifru ako proizvod/umnožak ima neparan
    broj cifara, odnosno aritmeticku sredinu (tip float) dvije srednje cifre ako proizvod/umnožak ima 
    parni broj cifara). Program treba ispisivati srednju cifru samo ako je veæa od prethodno izraèunate
    srednje cifre. Prva pronaðena srednja cifra se svakako ispisuje. Program se forsirano prekida ako
    korisnik unese n = 0. Program se prirodno završava ako je pronaðena srednja cifra 9.
    
    Primjer izvršenja:
    unesi m i n: 10, 15
    srednja cifra/sredina proizvoda brojeva 10 i 15 (10*15=150) je: 5
    unesi m i n: 10, 42
    srednja cifra/sredina proizvoda brojeva 10 i 42 (10*42=420) je: ne ispisuje se
    unesi m i n: 12, 31
    srednja cifra/sredina proizvoda brojeva 12 i 31 (12*31=372) je: 7
    unesi m i n: 149, 20
    srednja cifra/sredina proizvoda brojeva 149 i 20 (149 *20=2980) je: 8.5
    unesi m i n: 150, 0
    forsirani prekid...
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


int main()
{
    int m, n;
    float temp = 0;
    do
    {
        
        do
        {
            cout << "Unesi m i n: ";
            cin >> m >> n;
        }while((m < 0 || m > 50 || n < 0 || n > 500) && ( m != 0 || n != 0));
        
        if(m == 0 || n == 0)
        {
            cout << "Forsiran prekid..." << endl;
            break;
        }
        
        int proizvod = m * n;
        int duzina = duzinaBroja(proizvod);
        
        float srednja;
        if(duzina % 2 == 0)
        {
            for(int i = 0; i < (duzina - 1) / 2; i++)
                proizvod /= 10;
            
            srednja = ((proizvod % 10) + (proizvod / 10) % 10) / 2.0;
        }
        else
        {
            for(int i = 0; i < duzina / 2; i++)
                proizvod /= 10;
                
            srednja = proizvod % 10;
            srednja = int(srednja);
            
        }
        
        if(temp < srednja)
            cout << "Srednja cifra/sredina proizvoda brojeva " 
            << m << " i " << n << "(" << m << "*" << n << "=" << m * n << ") je: " << srednja << endl;
        else
            cout << "Srednja cifra/sredina proizvoda brojeva " 
            << m << " i " << n << "(" << m << "*" << n << "=" << m * n << ") je: ne ispisuje se" << endl;
            
        temp = srednja;
            
    }while(temp - 9 < 0);
    
    return 0;
}