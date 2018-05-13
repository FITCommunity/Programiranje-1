/*
  Napisati program koji će učitati prirodni broj n ≤ 10, a zatim n prirodnih trocifrenih 
  brojeva koje treba pospremiti u odgovarajući niz.Taj niz brojeva treba sortirati uzlazno 
  po srednjoj cifri. Nakon sortiranja treba ispisati dobiveni niz. Za sortiranje koristiti 
  zasebnu funkciju kojoj se proslijeđuje nesortiran niz.
*/

#include <iostream>
#include <cmath>
 
using namespace std;
 
int srednja_cifra(int broj)
{
    broj /=  10;
    return broj % 10;
}
 
void sortiraj(int niz[], int duzina)
{
    int temp;
    for(int i = 0; i < duzina; i++)
    {
        for(int j = i + 1; j < duzina; j++)
        {
            if(srednja_cifra(niz[i]) > srednja_cifra(niz[j]))
            {
                temp = niz[j];
                niz[j] = niz[i];
                niz[i] = temp;
            }
        }
    }
}
  
int main()
{
    int niz[10], duzina;
   
    do
    {
        cout << "Unesite duzinu: " << endl;
        cin >> duzina;
       
    }while(duzina <= 0 || duzina > 10);
   
    for(int i = 0; i < duzina; i++)
    {
        do
        {
            cout << "Unesite " << i+1 << " broj: " << endl;
            cin >> niz[i];
           
        }while(niz[i] < 100 || niz[i] > 1000);
    }
   
    sortiraj(niz, duzina);
   
    for(int i = 0; i < duzina; i++)
        cout << niz[i] << " " << endl;
        
    system("pause>0");
    return 0;
}
