/*
  Napišite  program  koja  provjerava  je  li  vaš  Bingo  listiæ  sadrži  dobitnu 
  kombinaciju brojeva. Dobitna kombinacija sadrži 15 brojeva (5 brojeva rasporeðenih u tri 
  retka),  a  Bingo  listiæ  sadrži  tri  kombinacije  od  po  15  brojeva.  Koristite  funkcije  
  i  ni zove. Predvidite i manje dobitke, "peterce“ (svi brojevi u istom redu) i 
  "deseterce" (svi brojevi u dva reda).
*/

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>

using namespace std;

void upis(int niz[][5]);
void ispis(int niz[][5]);
int bingo(int listic[][5],int kombinacija[][5]);


int main()
{
    int listic1[3][5],
        listic2[3][5],
        listic3[3][5],
        kombinacija[3][5];
    int b1, b2, b3;
        
        
    srand(time(NULL));
    upis(listic1);
    upis(listic2);
    upis(listic3);
    upis(kombinacija);
    
    ispis(listic1);
    cout << endl;
    ispis(listic2);
    cout << endl;
    ispis(listic3);
    cout << endl;
    ispis(kombinacija);
    
    b1 = bingo(listic1, kombinacija);
    b2 = bingo(listic2, kombinacija);
    b3 = bingo(listic3, kombinacija);
    
    cout << b1 << " " << b2 << " " << b3 << endl;
    
    
    if(b1 == 3) cout << "Dobili ste bingo!1" << endl;
    else if(b2 == 3) cout << "Dobili ste bingo!2" << endl;
    else if(b3 == 3) cout << "Dobili ste bingo!3" << endl;
    else if(b1 == 2) cout << "Dobili ste deseterac!1" << endl;
    else if(b2 == 2) cout << "Dobili ste deseterac!2" << endl;
    else if(b3 == 2) cout << "Dobili ste deseterac!3" << endl;
    else if(b1 == 1) cout << "Dobili ste peterac!1" << endl;
    else if(b2 == 1) cout << "Dobili ste peterac!2" << endl;
    else if(b3 == 1) cout << "Dobili ste peterac!3" << endl;
    else cout << "Vise srece drugi put!" << endl;
        
    
    return 0;
}

int bingo(int listic[][5], int kombinacija[][5])
{
    int i, j, k, l;
    int brojac = 0;
    int red = 0;
    bool flag = false;
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 5; j++)
        {
            for(k = 0; k < 3; k++)
            {
                for(l = 0; l < 5; l++)
                {
                    if(listic[i][j] == kombinacija[k][l])
                    {
                        brojac++;
                        flag = true;
                        break;
                    }
                }
                
                if(flag)
                {
                    flag = false;
                    break;
                }
            }
        }
        if(brojac % 5 == 0)
        {
            red++;
            brojac = 0;
        }
    }
    
    return red;
}

void upis(int niz[][5])
{
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 5; j++)
            niz[i][j] = rand()%8 + 1;
}

void ispis(int niz[][5])
{
    for(int i = 0; i < 3; i++)
    {
         for(int j = 0; j < 5; j++)
         {
             cout << setw(2) << niz[i][j];
         }
         cout << endl;
    }
}