/*
  Neka je dat 2D niz tipa int dimenzija 10x10. Kreirati, a potom u glavnom programu 
  testirati, sljedeæe funkcije:
  a) Funkciju koja za vrsi generisanje podataka u 2D nizu na nacin da se u elementu sa 
     indexom [0][0] upise vrijednost 1 a svaki slijedeci element da ima vrijednost prethodnog 
     elementa pomnozenog sa 2 kao na slici. Generisanje se prekida ako se desi overflow na varijabli int.
  b) Funkciju koja popunjenu matricu iz pod-zadatka a) transponuje tako sto joj zamjeni redove i kolone.
  c) Funkciju koja kao parametar prima pomenuti niz i index kolone te silazno sortira kompletan 
     2D niz po izabranoj koloni na nacin da se kompletni redovi zamjene prema vrijednosti u izabranoj 
     koloni (princip sortiranja po koloni kao u MS Excel tabeli)
     
     +------+------+------+------+------+------+------+------+------+------+
     |  1   |  2   |  4   |  8   |  16  |  32  |  64  | 128  | 256  | 512  |
     +------+------+------+------+------+------+------+------+------+------+
     | 1024 | 2048 | itd. | itd. | itd. | itd. | itd. | itd. | itd. | itd. |
     +------+------+------+------+------+------+------+------+------+------+
     |      |      |      |      |      |      |      |      |      |      |
     +------+------+------+------+------+------+------+------+------+------+
     |      |      |      |      |      |      |      |      |      |      |
     +------+------+------+------+------+------+------+------+------+------+
     |      |      |      |      |      |      |      |      |      |      |
     +------+------+------+------+------+------+------+------+------+------+
     |      |      |      |      |      |      |      |      |      |      |
     +------+------+------+------+------+------+------+------+------+------+
     |      |      |      |      |      |      |      |      |      |      |
     +------+------+------+------+------+------+------+------+------+------+
     |      |      |      |      |      |      |      |      |      |      |
     +------+------+------+------+------+------+------+------+------+------+
     |      |      |      |      |      |      |      |      |      |      |
     +------+------+------+------+------+------+------+------+------+------+
     |      |      |      |      |      |      |      |      |      |      |
     +------+------+------+------+------+------+------+------+------+------+
	
*/

#include <iostream>
#include <iomanip>

using namespace std;

const int d = 10;

void generisanje(int niz[][d])
{
    int broj = 1;
    bool overflow = false;
    
    for(int i = 0; i < d; i++)
    {
        for(int j = 0; j < d; j++)
        {
            if(i == 0 && j == 0)
                niz[i][j] = broj;
            else
            {
                niz[i][j] = 2 * broj;
                broj = niz[i][j]; // broj = broj * 2
                
                if(niz[i][j] < 0)
                {
                    niz[i][j] = 0;
                    overflow = true;
                }
            }
        }
        
        if(overflow)
            break;
    }
}

void ispis(int niz[][d])
{
    for(int i = 0; i < d; i++)
    {
        for(int j = 0; j < d; j++)
        {
           cout << setw(12) << niz[i][j];
        }
        cout << endl;
    }
}

void transponuj(int niz[][d])
{
    int novi_niz[d][d] = {};
    
    for(int i = 0; i < (d + 1) / 2; i++)
    {
        for(int j = 0; j < d; j++)
        {
           novi_niz[j][i] = niz[i][j];
        }
    }
    
    for(int i = 0; i < d; i++)
        for(int j = 0; j < d; j++)
            niz[i][j] = novi_niz[i][j];
}

void sortiraj(int niz[][d], int kolona)
{
    int temp;
    for(int i = 0; i < d; i++)
    {
        for(int j = i + 1; j < d; j++)
        {
            if(niz[j][kolona] > niz[i][kolona])
            {
                for(int k = 0; k < d; k++)
                {
                    temp = niz[i][k];
                    niz[i][k] = niz[j][k];
                    niz[j][k] = temp;
                }
            }
        }
    }
}

int main()
{
    int matrica[d][d] = {};
    int kolona;
    
    generisanje(matrica);
    ispis(matrica);
    cout << endl;
    
    transponuj(matrica);
    ispis(matrica);
    cout << endl;
    
    do
    {
        cout << "Izaberite kolonu: " << endl;
        cin >> kolona;
        
    }while(kolona < 1 || kolona > 11);
    
    cout << endl;
    sortiraj(matrica, kolona-1);
    ispis(matrica);
    
    return 0;
}