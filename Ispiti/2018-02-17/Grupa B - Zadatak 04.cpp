/*
   Dat je 2D niz koji simulira šahovsku tablu. Omoguæiti korisniku unos cjelobrojnih elemenata         2D niza tako da se u svako "crno" polje unese parni broj sa neparnim brojem cifara, a u "bijelo      polje neparni broj sa parnim brojem cifara. Izraèunati i ispisati prosjeke (aritmetièke sredine)     svih elemenata na bijelim poljima iznad glavne dijagonale te na crnim poljima ispod sporedne        dijagonale.
    
    C - Crna
    B - Bijela
    
    +-----+-----+-----+-----+-----+-----+-----+-----+
    | C00 | B01 | C02 | B03 | C04 | B05 | C06 | B07 |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    | B10 | C11 | B12 | C13 | B14 | C15 | B16 | C17 |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    | C20 | B21 | C22 | B23 | C24 | B25 | C26 | B27 |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    | B30 | C31 | B32 | C33 | B34 | C35 | B36 | C37 |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    | C40 | B41 | C42 | B43 | C44 | B45 | C46 | B47 |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    | B50 | C51 | B52 | C53 | B54 | C55 | B56 | C57 |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    | C60 | B61 | C62 | B63 | C64 | B65 | C66 | B67 |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    | B70 | C71 | B72 | C73 | B74 | C75 | B76 | C77 |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    
*/

#include <iostream>
 
using namespace std;
 
const int d = 8;
 
void unos(int niz[][d]);
int provjeraUnosa(int broj);
int duzina(int broj);
void avg(int niz[][d], double &avg_b, double &avg_c);
bool crni_bijeli(int i, int j);
 
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
    int suma_b = 0,
        suma_c = 0,
        broj_b = 0,
        broj_c = 0;
       
    for(int i = 0; i < d; i++)
    {
        for(int j = 0; j < d; j++)
        {
            if(crni_bijeli(i, j) && i + j > d - 1)
            {
                suma_c += niz[i][j];
                broj_c++;
            }
            else if(!crni_bijeli(i, j) && i < j)
            {
                suma_b += niz[i][j];
                broj_b++;
            }
        }
    }
   
    avg_b = double(suma_b) / broj_b;
    avg_c = double(suma_c) / broj_c;
}
 
bool crni_bijeli(int i, int j)
{
    // true - crna
    // false - bijela
    return ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0));
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
 
int provjeraUnosa(int broj)
{
   
    if(broj % 2 == 0 && duzina(broj) % 2 != 0)
        return 1;
    else if(broj % 2 != 0 && duzina(broj) % 2 == 0)
        return 0;
    else
        return -1;
}
 
void unos(int niz[][d])
{
    for(int i = 0; i < d; i++)
    {
        for(int j = 0; j < d; j++)
        {
            if(crni_bijeli(i, j))
            {
                do
                {
                    cout << "Niz[" << i << "][" << j << "]: " << endl;
                    cin >> niz[i][j];
                   
                }while(provjeraUnosa(niz[i][j]) != 1);
            }
            else
            {
                do
                {
                    cout << "Niz[" << i << "][" << j << "]: " << endl;
                    cin >> niz[i][j];
                   
                }while(provjeraUnosa(niz[i][j]) != 0);
            }
        }
    }
}