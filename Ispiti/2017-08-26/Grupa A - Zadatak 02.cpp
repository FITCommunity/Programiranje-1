#include <iostream>

using namespace std;

int duzinaBroja(int broj)
{
    int brojac = 0;
    while(broj)
    {
        broj /= 10;
        brojac++;
    }
    
    return brojac;
}

void sortiraj(int niz[], int duzina)
{
    for(int i = 0; i < duzina; i++)
    {
        for(int j = i + 1; j < duzina; j++)
        {
            if(niz[i] > niz[j])
            {
                int temp = niz[i];
                niz[i] = niz[j];
                niz[j] = temp;
            }
        }
    }
}

int noviBroj(int niz[], int duzina)
{
    int suma = 0;
    for(int i = 0; i < duzina; i++)
        if(niz[i] % 2 != 0)
            suma = niz[i] + 10 * suma;
            
    return suma;
}

int main()
{
    int broj;
    do
    {
        cout << "Unesite broj: ";
        cin >> broj;
    }while(broj <= 0);
    
    int niz[10];
    int duzina = duzinaBroja(broj);
    for(int i = 0; i < duzina; i++)
    {
        niz[i] = broj % 10;
        broj /= 10;
    }
    
    
    sortiraj(niz, duzina);
    cout << "Broj sa sortiranim ciframa: " << noviBroj(niz, duzina);
    
    
    return 0;
}