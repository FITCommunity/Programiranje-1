/*
  Napišite program koji će omogućiti kreiranje matrice 4x4. Uz pomoć:
  • funkcije: void unos(int[][4]); omogućite unos samo parnih elemenata u matricu;
  • funkcije: void zamijeniR(int[][4], int, int); zamijeniti mjesta izabranim recima; izbor redaka vrši korisnik;
  • funkcije: float avrgd(int[][4]); izračunati prosječnu vrijednost elemenata iznad glavne dijagonale; 

  Ispis prosječne vrijednosti elemenata  iznad  glavne dijagonale kao i izbor redaka matrice 
  za zamjenu vršite u funkciji main.
*/

#include <iostream>
#include <iomanip>

using namespace std;

void unos(int niz[][4])
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            do
            {
                cout << "Unesite [" << i <<"][" << j << "] element niza ";
                cin >> niz[i][j];
                
            }while(niz[i][j] % 2 != 0);
        }
    }
}

void ispis(int niz[][4])
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << setw(2) <<  niz[i][j] << " ";
        }
        cout << "\n";
    }
}

void zamjenaR(int niz[][4], int red1, int red2)
{
    int temp;
    
    for(int i = 0; i < 4; i++)
    {
        temp = niz[red1][i];
        niz[red1][i] = niz[red2][i];
        niz[red2][i] = temp;
    }
}

float avrgd(int niz[][4])
{
    // 00 01 02 03 
    // 10 11 12 13 
    // 20 21 22 23 
    // 30 31 32 33
    // 01 + 02 + 03 + 12 + 13 + 23
    
    int suma = 0;
    int brojac = 0;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(j > i)
            {
                suma += niz[i][j];
                brojac++;
            }
        }
    }
    
    return suma / brojac;
}

int main()
{
    int niz[4][4];
    int red1, red2;
    
    unos(niz);
    ispis(niz);
    
    cout << "Koje redove zelite zamjeniti" << endl;
    cin >> red1 >> red2;
    
    zamjenaR(niz, red1, red2);
    ispis(niz);
    
    
    cout << "Prosjek brojeva iznad dijagonale je: " << avrgd(niz) << endl;
    
    
    return 0;
}
