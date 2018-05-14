/*
  Napisati program koji æe uèitati cijeli broj n (1?n?10), (ukoliko unesena vrijednost nije unutar intervala, uèitavanje treba ponavljati sve dok se ne unese ispravna vrijednost) i elemente matrice dimenzija n x n te ispisati je li matrica centralno simetrièna s obzirom na središnji element. Ako jest, program treba ispisati 1, ako nije, ispisati 0, a ako je broj redaka paran broj  (pa nema središnjeg elementa), ispisati -1. Koristiti zasebne funkcije za unos elemenata i provjeru simetriènosti.

Primjeri centralno-simetriènih matrica:

*/

#include <iostream>
#include <iomanip>

using namespace std;

void upis(int niz[][10], int dimenzija)
{
    for(int i = 0; i < dimenzija; i++)
    {
        for(int j = 0; j < dimenzija; j++)
        {
            cout << "Unesite ["<< i << "][" << j << "] element: ";
            cin >> niz[i][j];
        }
    }
}

void ispis(int niz[][10], int dimenzija)
{
    cout << "Unijeli ste sljedecu matricu: " << endl;
    for(int i = 0; i < dimenzija; i++)
    {
        for(int j = 0; j < dimenzija; j++)
        {
            cout << setw(4) << niz[i][j];
        }
        cout << "\n";
    }
}

int provjera(int niz[][10], int dimenzija)
{
    
    if(dimenzija % 2 == 0)
        return -1;
    else
    {
        for(int i = 0; i < dimenzija; i++)
        {
            for(int j = 0; j < dimenzija; j++)
            {
                if(niz[i][i] != niz[dimenzija-1-i][dimenzija-1-i]) 
                    return 0;
                if(i+j == dimenzija - 1 && niz[i][j] != niz[j][i]) 
                    return 0;
                if(niz[i][dimenzija/2] != niz[dimenzija-1-i][dimenzija/2]) 
                    return 0;
                if(niz[dimenzija/2][j] != niz[dimenzija/2][dimenzija-1-j]) 
                    return 0;
            }
        }
        
        return 1;
    }
}

int main()
{
    int niz[10][10];
    int dimenzija;
    
    do
    {
        cout << "Unesite broj elemenata: ";
        cin >> dimenzija;
        
    }while(dimenzija < 1 || dimenzija > 10);
    
    upis(niz, dimenzija);
    cout << endl;
    ispis(niz, dimenzija);
    
    cout << provjera(niz, dimenzija) << endl;
    
    return 0;
}