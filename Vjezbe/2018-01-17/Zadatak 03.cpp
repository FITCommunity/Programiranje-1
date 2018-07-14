#include <iostream>
#include <cmath>
 
using namespace std;
 
const int dimenzija = 4;
 
void unos(int niz[][dimenzija]);
void transpozicija(int niz[][dimenzija]);
float aritmeticka(int niz[][dimenzija]);
bool prost_broj(int broj);
void simpatican(int niz[][dimenzija]);
 
int main()
{
    int niz[dimenzija][dimenzija];
   
   
    unos(niz);
    transpozicija(niz);
   
    for(int i = 0; i < dimenzija; i++)
    {
        for(int j = 0; j < dimenzija; j++)
        {
            cout << niz[i][j] << " ";
        }
        cout << endl;
    }
   
    cout << endl;
    cout << "Aritmeticka sredina: " << aritmeticka(niz) << endl;
    cout << endl;
    simpatican(niz);
   
}
 
void simpatican(int niz[][dimenzija])
{
    int broj1,
        broj2,
        cifra,
        s1 = 0,
        s2 = 0;
   
    for(int i = 0; i < dimenzija; i++)
    {
        for(int j = 0; j < dimenzija; j++)
        {
            if(i + j  < dimenzija - 1)
            {
                // Trocifreni
                broj1 = niz[i][j];
                broj1 = broj1 * broj1;
                s1 = 0;
                while(broj1 != 0)
                {
                    cifra = broj1 % 10;
                    broj1 /= 10;
                   
                    s1 += cifra;
                }
               
                //Dvocifreni
                broj2 = niz[i][j];
                s2 = 0;
                while(broj2 != 0)
                {
                    cifra = broj2 % 10;
                    broj2 /= 10;
                   
                    s2 += cifra;
                }
               
                s2 = s2 * s2;
               
                if(s1 == s2)
                    cout << niz[i][j] << " je simpatican" << endl;
                else
                    cout << niz[i][j] << " nije simpatican" << endl;
            }
        }
    }
}
 
float aritmeticka(int niz[][dimenzija])
{
    // Sporedna dijagonala
    // 00 01 02
    // 10 11 12
    // 20 21 22
    // 2+0 = 1+1 = 0+2 = dimenzija - 1
    // Ispod i + j > dimenzija - 1
    // Iznad i + j < dimenzija - 1
   
    // Glavna dijagonala
    // 00 01 02
    // 10 11 12
    // 20 21 22
    // Iznad j > i
    // Ispod i > j
   
    int suma = 0;
    int brojac = 0;
   
    for(int i = 0; i < dimenzija; i++)
    {
        for(int j = 0; j < dimenzija; j++)
        {
            if(i + j  > dimenzija - 1)
            {
                if(prost_broj(niz[i][j]))
                {
                    suma += niz[i][j];
                    brojac++;
                }
            }
        }
    }
   
    if(brojac == 0)
        return 0;
    else
        return float(suma) / brojac;
}
bool prost_broj(int broj)
{
    for(int i = 2; i < broj; i++)
        if(broj % i == 0)
            return 0;
           
    return 1;
}
 
void transpozicija(int niz[][dimenzija])
{
   
    int noviniz[dimenzija][dimenzija];
   
    for(int i = 0; i < dimenzija; i++)
      for(int j = 0; j < dimenzija; j++)
          noviniz[j][i] = niz[i][j];
   
    for(int i = 0; i < dimenzija; i++)
      for(int j = 0; j < dimenzija; j++)
          niz[i][j] = noviniz[i][j];  
   
}
 
void unos(int niz[][dimenzija])
{
    cout << "Unesite niz: " << endl;
    for(int i = 0; i < dimenzija; i++)
    {
        for(int j = 0; j < dimenzija; j++)
        {
            do
            {
                cout << "Niz[" << i << "][" << j << "] = ";
                cin >> niz[i][j];
               
            }while(niz[i][j] < 10 || niz[i][j] > 99);
        }
    }
}