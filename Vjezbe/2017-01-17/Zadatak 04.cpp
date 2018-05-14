/*
  Napisati program koji od korisnika zahtijeva unos niza od najviše 20 realnih brojeva 
  u rasponu od -100 do 100. U slučaju da korisnik unese bilo koji broj izvan datog 
  raspona korisnik ponavlja unos tog elementa niza. Također, unos je moguće prekinuti 
  prije nego što se dostigne kapacitet niza unosom broja 0 koji ne treba da bude element 
  niza i služi samo za prekid. Nakon toga, program računa aritmetičku sredinu unesenih brojeva, 
  te iz niza izbacuje sve one elemente čija je udaljenost od aritmetičke sredine veća od 10, 
  na način da se sačuva redoslijed dodavanja elemenata. Implementaciju uraditi upotrebom sljedećih funkcija:
  •void unos (double[], int, int&); gdje je treći parametar stvarna veličina niza nakon unosa;
  •double aritmeticka_sredina(double[], int);
  •void ukloni(double[], int, double, int&); gdje je drugi parametar aritmetička sredina, 
  a posljednji veličina niza nakon uklanjanja elemenata.
  
  U glavnom programu testirati dostupne funkcije, te obaviti ispis elemenata niza nakon uklanjanja 
  vodeći se datim primjerom izlaza.
  
  Unesite elemente niza: 2.5 -8.9 15.89 16.78 34 25 11 0
  Aritmeticka sredina elemenata niza iznosi: 13.75
  Sadrzaj niza nakon uklanjanja: 15.89 16.78 11.00
*/

#include <iostream>
#include <cmath>
 
using namespace std;
 
void unos(double niz[], int n, int &duzina);
double aritmeticka_sredina(double niz[], int duzina);
void ukloni(double niz[], int n, double avg, int &duzina);
 
int main()
{
    double niz[20];
    int duzina = 0;
    double avg;
   
    unos(niz, 20, duzina);
   
    cout << endl;
    avg = aritmeticka_sredina(niz, duzina);
    cout << "Aritmeticka sredina elemenata niza je: " << avg << endl;
   
    ukloni(niz, 20, avg, duzina);
    cout << endl;
   
    cout << "Sadrzaj niza nakon uklanjanja: ";
    for(int i = 0; i < duzina; i++)
        cout << niz[i] << " ";
}
 
void ukloni(double niz[], int n, double avg, int &duzina)
{
    for(int i = 0; i < duzina; i++)
    {
       
        if(abs(avg - niz[i]) > 10)
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
 
void unos(double niz[], int n, int &duzina)
{
   
    for(duzina = 0; duzina < n; duzina++)
    {
        do
        {
            cout << "Unesite " << duzina + 1 << ". clan niza: " << endl;
            cin >> niz[duzina];
           
        }while(niz[duzina] < -100 || niz[duzina] > 100);
       
        if(niz[duzina] <= 0 && niz[duzina] >= 0)
            break;
    }
   
}
 
double aritmeticka_sredina(double niz[], int duzina)
{
    double suma = 0;
   
   
    for(int i = 0; i < duzina; i++)
        suma += niz[i];
     
    suma = suma / duzina;
    suma = round(suma * 100.0) / 100.0;
    return suma;  
}
