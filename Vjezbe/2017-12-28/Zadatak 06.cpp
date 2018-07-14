#include <iostream>

using namespace std;

void inicijaliziraj(int niz[], int broj, int duzina)
{

    for(int i = duzina - 1; i >= 0; i--)
    {
        niz[i] = broj % 10;
        broj /= 10;
    }
    
    for(int i = 0; i < duzina; i++)
        cout << niz[i] << " ";
}
float aritmeticka(int niz[], int duzina)
{
    int suma = 0;
    for(int i = 0; i < duzina; i++)
        suma += niz[i];
        
    return suma / duzina;
}

int pronaci(int niz[], int duzina, float prosjek)
{
    float razlika[6];
    int min;
    
    for(int i = 0; i < duzina; i++)
    {
        razlika[i] = (float)niz[i] - prosjek;
        if(razlika[i] < 0) razlika[i] = -razlika[i];
    }
    
    min = 0;
    for(int i = 1; i < duzina; i++)
        if(razlika[i] < razlika[min]) min = i;
    
    return niz[min];
}

int main()
{
    int niz[6];
    int broj;
    float prosjek;
    
    cout << "Unesite 6 znamenkasti broj: " << endl;
    cin >> broj;
    
    inicijaliziraj(niz, broj, 6);
    prosjek = aritmeticka(niz, 6);
    
    
    cout << "Prosjek: " << prosjek << endl;
    cout << "Najbliza cifra prosjeku je: " << pronaci(niz, 6, prosjek) << endl;
    
    return 0;
}