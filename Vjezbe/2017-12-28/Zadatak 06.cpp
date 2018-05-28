/*
  Napišite  program  u  kojem  æete  omoguæiti  unos  šesteroznamenkastog 
  prirodnog broja i kreiranje niza od 6 cjelobrojnih elemenata. 
  • definirati  i  upotrijebiti  funkciju  void  inicijaliziraj(int[],  int,  int);  koja  æe 
    elemente  niza  inicijalizirate  tako  da  svakom  od  elemenata  niza  dodijeli  po  jednu 
    znamenku unesenog šesteroznamenkastog prirodnog broja;
  • definirati i upotrijebiti funkciju float aritmeticka(int [], int); koja æe izraèunati 
    aritmetièku sredinu (prosjeènu vrijednost) elemenata niza;
  • definirati  i  upotrijebiti  funkciju  int  pronaci(int  [],  int,   float)  koja  treba 
    pronaæi  i  vratiti  element  niza  koji  je  po  svojoj  vrijednosti  najbliži  prethodno 
    izraèunatoj aritmetièkoj sredini;
    
  Ispis  aritmetièke  sredine  i  elementa  koji  je  po  svojoj  vrijednosti  najbliži    aritmetièkoj sredini vršiti u funkciji main.
*/

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