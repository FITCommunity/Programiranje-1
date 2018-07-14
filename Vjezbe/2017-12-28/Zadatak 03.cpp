#include <iostream>

using namespace std;

void unos(char niz[], int duzina)
{
    cout << "Unesite niz: " << endl;
    for(int i = 0; i < duzina; i++)
        cin >> niz[i];
    
}

int slova(char niz1[], char niz2[], int duzina)
{
    int brojac = 0;
    
    for(int i = 0; i < duzina; i++)
    {
        if((niz1[i] >= 'A' && niz1[i] <= 'Z') || (niz1[i] >= 'a' && niz1[i] <= 'z')) brojac++;
        if((niz2[i] >= 'A' && niz2[i] <= 'Z') || (niz2[i] >= 'a' && niz2[i] <= 'z')) brojac++;
    }
    
    return brojac;
}

int vokali(char niz[], int  duzina)
{
    char samoglasnici[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int brojac = 0;
    for(int i = 0; i < duzina; i++)
        for(int j = 0; j < 10; j++)
            if(niz[i] == samoglasnici[j])
                brojac++;
         
    return brojac;
}

int main()
{
    char niz1[9], niz2[9];
    
    unos(niz1, 9);
    unos(niz2, 9);
    
    cout << "Slova: " << slova(niz1, niz2, 9) << endl;
    cout << "U 1. nizu ima " << vokali(niz1, 9) << " vokala" << endl;
}