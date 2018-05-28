/*
  Napišite program u kojem æete kreirati matricu 5x5, te napišite i pozovite sljedeæe funkcije:
  o funkciju koja æe inicijalizirati matricu da izgleda ovako:
    0  1  1  1  1
    1  0  1  1  1
    1  1  0  1  1
    1  1  1  0  1
    1  1  1  1  0
  o funkciju koja æe izraèunati sumu elemenata na sporednoj dijagonali;
  o funkciju koja æe promijeniti vrijednosti elemenata matrice tako da nakon poziva 
    funkcije matrica izgleda ovako:
    1  0  0  0  0
    0  1  0  0  0
    0  0  1  0  0
    0  0  0  1  0
    0  0  0  0  1
    
  Broj i vrstu parametara, kao i o povratne vrijednosti funkcija odredite sami.
*/

#include <iostream>

using namespace std;

void niz_nula_jedan(int niz[][5])
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(i == j) niz[i][j] = 0;
            else niz[i][j] = 1;
        }
    }
}

void niz_jedan_nula(int niz[][5])
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(i == j) niz[i][j] = 1;
            else niz[i][j] = 0;
        }
    }
}

int suma_dijagonale(int niz[][5])
{
    int suma = 0;
    
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            if(i + j == 4) suma += niz[i][j] // i + j == duzina - 1

    return suma;
}

void ispis(int niz[][5])
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << niz[i][j] << " "; 
        }
        cout << endl;
    }
}

int main()
{
    int niz[5][5];
    
    niz_nula_jedan(niz);
    ispis(niz);
    
    cout << "Suma sporedne dijagonale: " << suma_dijagonale(niz) << endl;
    
    niz_jedan_nula(niz);
    ispis(niz);
    
    return 0;
}