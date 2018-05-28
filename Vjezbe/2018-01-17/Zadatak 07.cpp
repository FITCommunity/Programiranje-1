/*
  Deklarisati kvadratnu matricu cijelih brojeva proizvoljnih dimenzija, te 
  implementirati sljedeæe funkcije:
  •Funkciju za unos i formiranje elemenata matrice prema sljedeæem obrascu: 
  elemente neparnih redova matrice (1., 3., 5. itd.) èine minimalno trocifreni 
  brojevi koje unosi korisnik programa (u sluèaju unosa bilo kojeg broja koji 
  ne zadovoljava postavljeni uslov, ponoviti unos); elementi parnih redova matrice 
  se formiraju na osnovu elemenata iz prethodnog reda u istoj koloni matrice i to 
  na naèin da je svaki novokreirani element matrice zapravo element s obrnutim 
  redoslijedom cifri elementa iznad njega. 
  •Za odreðivanje broja s obrnutim redoslijedom cifri kreirati zasebnu funkciju 
  obratno, te je pozvati u funkciji unos. 
  •Takvu matricu proslijediti zasebnoj funkciji max koja æe formirati novi 
  jednodimenzionalni niz èije èlanove èine najveæi èlanovi matrice po redovima 
  te ispisati ove èlanove.
  •Formirati posebnu funkciju iznad_dijagonala koja æe ispisati broj elemenata matrice 
  koji se nalaze iznad glavne i sporedne dijagonale. Ove elemente unutar funkcije spremati 
  u niz èija velièina zavisi od dimenzije matrice. Velièina niza treba biti fiksna i mora 
  odgovarati toènom broju elemenata. 
  
  Kreirati kratki testni program koji demonstrira funcionalnost kreiranih funkcija.
  Primjer matrice dimenzija 4x4 i oèekivanih rezultata:
  
  +--------+--------+--------+--------+
  |  2163  |  123   |  30425 |   671  |  
  +--------+--------+--------+--------+
  |  3612  |  321   |  52403 |   176  |  
  +--------+--------+--------+--------+
  |  7331  |  6113  | 741232 |   798  |  
  +--------+--------+--------+--------+
  |  1337  |  3116  | 232147 |   897  |  
  +--------+--------+--------+--------+
  
  Elementi iznad obje dijagonale su: 123, 30452.
  Funkcija max æe ispisati sljedeæe brojeve: 
  30452, 25403, 741232, 232147 jer su to najveæi brojevi po redovima. 
*/

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
    
    system("pause>0");
    return 0;
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