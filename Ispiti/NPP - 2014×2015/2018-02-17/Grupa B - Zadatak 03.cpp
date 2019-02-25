#include <iostream>
 
using namespace std;
 
void unos(int niz[], int duzina);
void izbacivanje(int niz[], int &duzina);
bool parnaCifra(int broj);
void ispis(int niz[], int duzina);
 
int main()
{
    int duzina = 20;
    int niz[20];
   
    unos(niz, duzina);
    ispis(niz, duzina);
    izbacivanje(niz, duzina);
    cout << endl;
    ispis(niz, duzina);
   
    system("pause>0");
    return 0;
}
 
void izbacivanje(int niz[], int &duzina)
{
    for(int i = 0; i < duzina; i++)
    {
        if(parnaCifra(niz[i]))
        {
            for(int j = i; j < duzina; j++)
            {
                niz[j] = niz[j+1];
            }
           
            i--;
            duzina--;
        }
    }
}
 
bool parnaCifra(int broj)
{
    while(broj > 9) broj /= 10;
   
    return broj % 2 == 0;
}
 
void unos(int niz[], int duzina)
{
    for(int i = 0; i < duzina; i++)
    {
        do
        {
            cout << "niz[" << i << "]: " << endl;
            cin >> niz[i];
           
        }while(niz[i] < 100);
    }
}
 
void ispis(int niz[], int duzina)
{
    for(int i = 0; i < duzina; i++)
        cout << niz[i] << " ";
}