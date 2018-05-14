// https://goo.gl/DZtfsE
// Zadatak 7

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void unos(int niz[][100], int dimenzija);
void ispis(int niz[][100], int dimenzija);
int obratno(int broj);
void max(int niz[][100], int dimenzija);
void iznadDijagonala(int niz[][100], int dimenzija);

int main()
{
    int niz[100][100];
    int dimenzija;
    
    do
    {
        cout << "Unesite dimenziju matrice: " << endl;
        cin >> dimenzija;
        
    }while(dimenzija <= 0 || dimenzija > 100 || dimenzija % 2 != 0);
    
    unos(niz, dimenzija);
    ispis(niz, dimenzija);
    cout << endl;
    max(niz, dimenzija);
    cout << endl;
    iznadDijagonala(niz, dimenzija);
}

void iznadDijagonala(int niz[][100], int d)
{
    // 00 01 02 03 04
    // 10 11 12 13 14
    // 20 21 22 23 24
    // 30 31 32 33 34
    // 40 41 42 43 44
    // Iznad dijagonala: 01 i 02 i 03 i 12
    // ( n x n - n - (n - 1) ) / 4
    // ( 4 * 4 - 4 - 4 + 1 ) / 4 = 2
    // ( 3 * 3 - 3 - 3 + 1 ) / 4 = 1
    int dimenzija = (d * d - d - (d - 1)) / 4;
    int iznad[4900];
    int k = 0;
    for(int i = 0; i < d / 2; i++)
    {
        for(int j = 0; j < d; j++)
        {
            if(j > i && j + i < d - 1)
            {
                iznad[k] = niz[i][j];
                k++;
            }
        }
    }
    
    for(int i = 0; i < dimenzija; i++)
        cout << iznad[i] << " ";
    
    
}

void max(int niz[][100], int dimenzija)
{
    int max_niz[100];
    int max;
    
    for(int i = 0; i < dimenzija; i++)
    {
        max = niz[i][0];
        for(int j = 1; j < dimenzija; j++)
        {
            if(max < niz[i][j])
                max = niz[i][j];
        }
        
        max_niz[i] = max;
    }
    
    for(int i = 0; i < dimenzija; i++)
        cout << max_niz[i] << " ";
    
}

int obratno(int broj)
{
    int suma = 0;
    int temp;
    do
    {
      
        temp = broj % 10;
        suma = suma * 10 + temp;
        broj /= 10;
        
    }while(broj > 0);
    
    return suma;
}

void unos(int niz[][100], int dimenzija)
{
    cout << "Unesite elemente matrice: " << endl;
    for(int i = 0; i < dimenzija; i = i + 2)
    {
        for(int j = 0; j < dimenzija; j++)
        {
            cin >> niz[i][j];
            niz[i+1][j] = obratno(niz[i][j]);
        }
    }
}

void ispis(int niz[][100], int dimenzija)
{
    for(int i = 0; i < dimenzija; i++)
    {
        for(int j = 0; j < dimenzija; j++)
        {
            cout << setw(6) << niz[i][j];
        }
        cout << endl;
    }
}