#include <iostream>

using namespace std;

const int d = 4;//10

bool isProst(int broj)
{
  for(int i = 2; i <= broj / 2; i++)
    if(broj % i == 0)
      return false;
  return true;
}

int getSumaCifri(int broj)
{
  int suma = 0;
  while(broj)
  {
    suma += broj % 10;
    broj /= 10;
  }

  return suma;
}

void simpatican(int matrica[][d])
{
  for(int i = 0; i < d; i++)
    for(int j = 0; j < d; j++)
      if(i + j < d - 1)
      {
        int s1 = getSumaCifri(matrica[i][j]);
        s1 *= s1;
        int s2 = getSumaCifri(matrica[i][j] * matrica[i][j]);

        if(s1 == s2)
          cout << matrica[i][j] << " je simpatican" << endl;
        else
          cout << matrica[i][j] << " nije simpatican" << endl;
      }
}

float aritmeticka(int matrica[][d])
{
  int brojac = 0;
  float suma = 0;
  
  for(int i = 0; i < d; i++)
    for(int j = 0; j < d; j++)
      if(i + j > d - 1)
      {
        suma += matrica[i][j];
        brojac++;
      }

  return brojac ? suma / brojac : 0;
}

void transpozicija(int matrica[][d])
{
  for(int i = 0; i < d; i++)
    for(int j = i; j < d; j++)
    {
      int temp = matrica[i][j];
      matrica[i][j] = matrica[j][i];
      matrica[j][i] = temp;
    }
}

void unos(int matrica[][d])
{
  for(int i = 0; i < d; i++)
    for(int j = 0; j < d; j++)
      while
      (
        cout << "Niz[" << i << "][" << j << "] = ", 
        cin >> matrica[i][j], 
        matrica[i][j] < 10 || matrica[i][j] > 99
      );
}

void ispis(int matrica[][d])
{
  for(int i = 0; i < d; i++)
  {
    for(int j = 0; j < d; j++)
      cout << matrica[i][j] << " ";
    cout << endl;
  }
    
}

int main() 
{
   int matrica[d][d];
   
   
    unos(matrica);
    transpozicija(matrica);
    ispis(matrica);
   
    cout << endl;
    cout << "Aritmeticka sredina: " << aritmeticka(matrica) << endl;
    cout << endl;
    simpatican(matrica);

    system("pause>0");
    return 0;
}
