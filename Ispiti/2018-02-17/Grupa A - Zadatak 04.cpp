#include <iostream>
 
using namespace std;
 
const int d = 10;
 
void unos(int niz[][d]);
int brCif(int broj);
int max_avg(int niz[][d]);
int min_avg(int niz[][d]);
 
int main()
{
    int niz[d][d];
   
    unos(niz);
   
    cout << "Red sa najvecim prosjekom je: " << max_avg(niz) + 1 << endl;
    cout << "Kolona sa najmanjim prosjekom je: " << min_avg(niz) + 1 << endl;
   
    system("pause>0");
    return 0;
}
 
int max_avg(int niz[][d])
{
    double max_avg_r[d] = {0};
    int max;
   
    for(int i = 0; i < d; i++)
    {
        for(int j = 0; j < d; j++)
        {
            max_avg_r[i] += niz[j][i];
        }
       
        max_avg_r[i] /= d;
    }
   
    max = 0;
    for(int i = 1; i < d; i++)
        if(max_avg_r[max] < max_avg_r[i])
            max = i;
           
    return max;
}
 
int min_avg(int niz[][d])
{
    double min_avg_k[d] = {0};
    int min;
   
    for(int i = 0; i < d; i++)
    {
        for(int j = 0; j < d; j++)
        {
            min_avg_k[i] += niz[i][j];
        }
       
        min_avg_k[i] /= d;
    }
   
    min = 0;
    for(int i = 1; i < d; i++)
        if(min_avg_k[min] > min_avg_k[i])
            min = i;
           
    return min;
}
 
int brCif(int broj)
{
    int duzina = 0;
   
    do
    {
        broj /= 10;
        duzina++;
       
    }while(broj > 0);
   
    return duzina;
}
 
void unos(int niz[][d])
{
    for(int i = 0; i < d; i++)
    {
        for(int j = 0; j < d; j++)
        {
            do
            {
                cout << "Unesite niz["<< i << "][" << j << "]: " << endl;
                cin >> niz[i][j];
               
            }while(brCif(niz[i][j]) % 2 == 0);
        }
    }
}