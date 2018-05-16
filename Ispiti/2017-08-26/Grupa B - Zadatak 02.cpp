/*
  Napisati program koji na osnovu unesenog cijelog broja N formira i ispisuje 
  broj sastavljen od istih cifara u opadajuæem poretku uzimajuæi samo parne cifre.
  Za sortiranje cifara koristiti pomoæni niz od najviše 10 elemenata.
  
  Unesite cijeli broj N: 4513982
  Broj sa sortiranim ciframa: 842

  Unesite cijeli broj N: 689225
  Broj sa sortiranim ciframa: 8622
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

void sortiraj(int niz[], int duzina)
{
    for(int i = 0; i < duzina; i++)
    {
        for(int j = i + 1; j < duzina; j++)
        {
            if(niz[i] < niz[j])
            {
                int temp = niz[i];
                niz[i] = niz[j];
                niz[j] = temp;
            }
        }
    }
}

int noviBroj(int niz[], int duzina)
{
    int suma = 0;
    for(int i = 0; i < duzina; i++)
        if(niz[i] % 2 == 0)
            suma = niz[i] + 10 * suma;
            
    return suma;
}

int main()
{
    int broj;
    do
    {
        cout << "Unesite broj: ";
        cin >> broj;
    }while(broj <= 0);
    
    int niz[10];
    int duzina = duzinaBroja(broj);
    for(int i = 0; i < duzina; i++)
    {
        niz[i] = broj % 10;
        broj /= 10;
    }
    
    
    sortiraj(niz, duzina);
    cout << "Broj sa sortiranim ciframa: " << noviBroj(niz, duzina);
    
    
    return 0;
}