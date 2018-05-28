/*
    Napisati program koji æe omoguæiti unos minimalno trocifrenih cijelih brojeva u     jednodimenzionalni niz od 20 elemenata. Zatim napraviti funkciju koja æe u nizu pronaæi sve     brojeve kojima je prva cifra (poèetna cifra sa lijeve strane) parna i ukloniti ih iz niza.     Uklanjanje elemenata niza obavezno uraditi tako da ne ostaju prazni elementi veæ da se ostatak     niza pomjeri kako ne bi bilo prazni.Pomjeranje ostatka niza niza obavezno raditi prilikom     uklanjanja elemenata a ne sortiranjem poslije uklanjanja
*/

#include <iostream>
 
using namespace std;
 
void unos(int niz[], int duzina);
void izbacivanje(int niz[], int &duzina);
bool parnaCifra(int broj);
void ispis(int niz[], int duzina);
 
int main()
{
    int niz[20], duzina = 20;
   
    unos(niz, duzina);
    ispis(niz, duzina);
    izbacivanje(niz, duzina);
    cout << endl;
    ispis(niz, duzina);
   
    system("pause>0");
    return 0;
}
 
void izbacivanje(int niz[], int &duzina)
{
    for(int i = 0; i < duzina; i++)
    {
        if(parnaCifra(niz[i]))
        {
            for(int j = i; j < duzina; j++)
            {
                niz[j] = niz[j+1];
            }
           
            i--;
            duzina--;
        }
    }
}
 
bool parnaCifra(int broj)
{
    do
    {
        broj /= 10;
       
    }while(broj > 9);
   
    if(broj % 2 == 0)
        return true;
    else
        return false;
}
 
void unos(int niz[], int duzina)
{
    for(int i = 0; i < duzina; i++)
    {
        do
        {
            cout << "niz[" << i << "]: " << endl;
            cin >> niz[i];
           
        }while(niz[i] < 100);
    }
}
 
void ispis(int niz[], int duzina)
{
    for(int i = 0; i < duzina; i++)
        cout << niz[i] << " ";
}