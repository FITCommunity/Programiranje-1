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