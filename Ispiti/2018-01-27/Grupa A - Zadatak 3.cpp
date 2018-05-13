/*
  Napisati program koji će učitati niz od 50 integer vrijednosti. Napisati funkciju koja će
  provjeriti da li se u nizu nalazi sekvenca od minimalno 4 uzastopna broja. Funkcija treba
  da provjeri i prebroji koliko takvih sekvenci postoji u nizu i da ispise broj takvih sekvenci.
  
  Npr. 100, 322, 453, 454, 455, 456, 355, 235, 235, 236, 237, 238, 239, 111
  453, 454, 455, 456 - 1 Sekvenca
  235, 236, 237, 238, 239 - 2 Sekvenca
*/

#include <iostream>
 
using namespace std;
 
const int n = 50;
 
int sekvencija(int niz[]);
 
int main()
{
    int niz[n];
   
    for(int i = 0; i < n; i++)
        cin >> niz[i];
       
    cout << sekvencija(niz) << endl;
 
    system("pause>0");
    return 0;
}
 
int sekvencija(int niz[])
{
    int brojac = 1, brojac_sek = 0;
    bool sekvenca = false;
    for(int i = 0; i <= n - 1; i++)
    {
        if(!sekvenca)
            brojac = 1;
           
        if(niz[i] == niz[i+1] - 1)
        {
            brojac++;
            sekvenca = true;
        }
        else
        {
            sekvenca = false;
        }
       
        if(!sekvenca && brojac >= 4)
            brojac_sek++;
    }
   
    return brojac_sek;
 
}
