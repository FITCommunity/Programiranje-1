/*
  Neka je dat 2D niz tipa int dimenzija 5x5. Kreirati, a potom u glavnom programu testirati, sljedeæe funkcije:
a)	Funkciju koja vrši generisanje Fibonaccijevih brojeva u 2D nizu dok se niz ne popuni
b)	Funkcija koja ispisuje najveæe zajednièke djelitelje brojeva na suprotnim indeksima matrice koristeæi Euklidov algoritam, kad se indeksi izjednaèe petlja se treba prekinuti:
Euklidov algoritam(a,b):
Dok(b>0)
	p=a;
	a=b;
	b = p mod b;
NZD=a;
Gdje je 'p' pomoæna varijabla. Suprotni indeksi matrice su matrica[0,0] i matrica[5,5], zatim matrica[0,1] i matrica [5,4] itd .
Primjer:
Najveæi zajednièki djelitelj za brojeve 610 i 34 je 2. Najveæi zajednièki djelitelj za brojeve 8 i 2584 je 8 itd. 

*/

#include <iostream>
#include <iomanip>

using namespace std;

const int dimenzija = 5;

void populacija(int niz[][dimenzija])
{
    int broj1 = 0, broj2 = 1;
    
    for(int i = 0; i < dimenzija; i++)
    {
        for(int j = 0; j < dimenzija; j++)
        {
            if(i == 0 && j == 0)
            {
                niz[0][0] = broj1;
                niz[1][0] = broj2;
                j++;
            }
            else
            {
                niz[j][i] = broj1 + broj2;
                broj1 = broj2;
                broj2 = niz[j][i];
            }
        }
    }
}

void ispis(int niz[][dimenzija])
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << setw(7) << niz[i][j];
        }
        cout << endl;
    }
}

int euklidov_algoritam(int a, int b)
{
    
    int temp;
    int nzd;
    while(b > 0)
    {
        temp = a;
        a = b;
        b = temp % b;
        nzd = a;
    }
    
    return nzd;
    
    // Bez euklidovog algoritma
    /*
    int min;
    
    if(a < b)
        min = a;
    else
        min = b;
    
    for(int i = min; i > 1; i--)
    {
        if(a % i == 0 && b % i == 0)
            return i;
    }
    
    return 1;
    */
    
}

int main()
{
    int matrica[dimenzija][dimenzija] = {};
    
    populacija(matrica);
    ispis(matrica);
    
    for(int i = 0; i < (dimenzija+1) / 2; i++)
    {
        for(int j = 0; j < dimenzija; j++)
        {
            cout << "Najmanji zajednicki djeljitelj za brojeve " << matrica[i][j] << " i " << matrica[dimenzija-1-i][dimenzija-1-j] << " je " 
                 << euklidov_algoritam(matrica[i][j], matrica[dimenzija-1-i][dimenzija-1-j]) << endl;
        }
     }
}