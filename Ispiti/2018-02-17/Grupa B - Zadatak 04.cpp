#include <iostream>
 
using namespace std;
 
const int d = 8;
 
void unos(int niz[][d]);
bool isUnos(int broj);
int duzina(int broj);
void avg(int niz[][d], double &avg_b, double &avg_c);
bool isCrno(int i, int j);
 
int main()
{
    int niz[d][d];
    double avg_b, avg_c;
   
    unos(niz);
    avg(niz, avg_b, avg_c);
   
    cout << avg_b << endl;
    cout << avg_c << endl;
   
    system("pause>0");
    return 0;
}
 
void avg(int niz[][d], double &avg_b, double &avg_c)
{
    int suma_b = 0, suma_c = 0, broj_b = 0, broj_c = 0;
       
    for(int i = 0; i < d; i++)
    {
        for(int j = 0; j < d; j++)
        {
            if(isCrno(i, j) && i + j > d - 1)
            {
                suma_c += niz[i][j];
                broj_c++;
            }
            else if(!isCrno(i, j) && i < j)
            {
                suma_b += niz[i][j];
                broj_b++;
            }
        }
    }
   
    avg_b = double(suma_b) / broj_b;
    avg_c = double(suma_c) / broj_c;
}
 
bool isCrno(int i, int j)
{
    return ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0));
    //alternativno: return (i + j) % 2 == 0;
}
 
int duzina(int broj)
{
    int brojac = 0;
    do
    {
        broj /= 10;
        brojac++;
       
    }while(broj > 0);
   
    return brojac;
}
 
bool isUnos(int niz[][d], int i, int j)
{
    return (niz[i][j] % 2 == 0 && duzina(niz[i][j]) % 2 != 0 && isCrno(i, j)) ||
           (niz[i][j] % 2 != 0 && duzina(niz[i][j]) % 2 == 0 && !isCrno(i, j));
         
}
 
void unos(int niz[][d])
{
    for(int i = 0; i < d; i++)
    {
        for(int j = 0; j < d; j++)
        {
            do
            {
              cout << "niz[" << i << "][" << j << "] = " << endl;
              cin >> niz[i][j];

            }while(!isUnos(niz, i, j));
        }
    }
}