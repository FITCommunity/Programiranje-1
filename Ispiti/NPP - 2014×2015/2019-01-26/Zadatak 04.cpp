#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int d = 10;

void generisanje(int niz[][d])
{
    int eksponent = 0;
    bool overflow = false;
    
    for(int i = 0; i < d; i++)
    {
        for(int j = 0; j < d; j++)
        {
            niz[i][j] = pow(2, eksponent++);
            if(niz[i][j] < 0)
            {
                niz[i][j] = 0;
                overflow = true;
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
          cout << setw(12) << niz[i][j];
        cout << endl;
    }
}

void transponuj(int niz[][d])
{
    int novi_niz[d][d] = {};
    
    for(int i = 0; i < (d + 1) / 2; i++)
      for(int j = 0; j < d; j++)
        novi_niz[j][i] = niz[i][j];
    
    for(int i = 0; i < d; i++)
        for(int j = 0; j < d; j++)
            niz[i][j] = novi_niz[i][j];
}

int aritmeticka_sredina(int matrica[][d])
{
  int suma = 0, brojac = 0;
  for(int i = 0; i < d; i++)
    for(int j = 0; j < d; j++)
      if(j > i && (i + j) % 2 == 0)
      {
        suma += matrica[i][j];
        brojac++;
      }
  return suma / brojac;

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
    
    cout << aritmeticka_sredina(matrica) << endl;
    
    system("pause>0");
    return 0;
}