/*
  Napisati funkciju koja niz od 10 cijelih brojeva sortira u opadajuæem 
  ili rastuæem poretku. Unos elemenata niza se obavlja u glavnom programu, kao i odabir opcije koja odreðuje da li rezultirajuæi niz treba biti opadajuæi ili rastuæi. Obavezno testirati implementiranu funkciju vodeæi se datim primjerom ispisa. (Pojasnjenje: Nema posebnog pojasnjenja jer se radi o najjednostavijem sortiranju uzlazno ili silazno u odnosu na korisnicki izbor.)

Unesite elemente niza: 12 2 3 0 45 6 98 -9 3 -10
Kako zelite sortirati niz (unesite 1 ili 2): 
1.	U opadajucem poretku
2.	U rastucem poretku
1
Rezultirajuci niz: 98 45 12 6 3 3 2 0 -9 -10

*/

#include <iostream>

using namespace std;

const int duzina = 10;

void unos(int niz[])
{
    cout << "Unesite niz: " << endl;
    for(int i = 0; i < duzina; i++)
    	cin >> niz[i];
}

void ispis(int niz[])
{
    cout << endl;
    for(int i = 0; i < duzina; i++)
    	cout << niz[i] << " ";
}

void sortiraj(int niz[], int izbor)
{
    int temp;
    for(int i = 0; i < duzina; i++)
    {
	for(int j = i + 1; j < duzina; j++)
        {
            if(izbor == 1 ? niz[i] < niz[j] : niz[i] > niz[j])
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
    int niz[duzina], izbor;
    
    unos(niz);
    cout << endl;
    ispis(niz);
    
    do
    {
        cout << "Unesite nacin sortiranja" << endl 
             << "1 - za opadajuci poredak" << endl
             << "2 - za rastuci poredak" << endl;
        cin >> izbor;
    }while(izbor != 1 && izbor != 2);
    
    sortiraj(niz, izbor);
    ispis(niz);
    
    return 0;
}