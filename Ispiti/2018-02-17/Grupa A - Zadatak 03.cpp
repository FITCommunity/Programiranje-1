#include <iostream>
 
using namespace std;
 
void fibonacci(int niz[], int duzina)
{
    niz[0] = 0;
    niz[1] = 1;
   
    for(int i = 2; i < duzina; i++)
        niz[i] = niz[i-1] + niz[i-2];
}
 
void ispis(int niz[], int duzina)
{
    for(int i = 0; i < duzina; i++)
        cout << niz[i] << " ";
}
 
bool paranZadnji(int broj)
{
    int cifra;
   
    cifra = broj % 10;
    broj /= 10;
   
    return (cifra % 2 == 0 && broj > 0);
}
 
void izbaci(int niz[], int &duzina)
{
    for(int i = 0; i < duzina; i++)
    {
        if(paranZadnji(niz[i]))
        {
            for(int j = i; j < duzina; j++)
            {
                niz[j] = niz[j+1];
            }
           
            duzina--;
        }
    }
}
 
int main()
{
    int niz[20], duzina = 20;
   
    fibonacci(niz, duzina);
    ispis(niz, duzina);
    izbaci(niz, duzina);
    cout << endl;
    ispis(niz, duzina);
   
    system("pause>0");
    return 0;
}