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