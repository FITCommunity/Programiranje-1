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