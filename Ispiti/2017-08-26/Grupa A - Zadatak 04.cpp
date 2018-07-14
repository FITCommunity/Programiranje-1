#include <iostream>
#include <iomanip>

using namespace std;

const int satnica = 12;

char mjesec[12][10] = {"Januar", "Februar", "Mart", "April", "Maj", "Juni", "Juli",
                     "August", "Septembar", "Oktobar", "Novembar", "Decembar"};
                     
void platnaLista(int radnik[])
{
    for(int i = 0; i < 12; i++)
        cout << setw(12) << mjesec[i] << " " << radnik[i] * satnica << endl;
    cout << endl;
}

int Prekovremeno(int radnik[])
{
    int suma = 0;
    for(int i = 0; i < 12; i++)
        if(radnik[i] > 160)
            suma += radnik[i] - 160;
    
    return suma;
}

int najvisePrekovremenih(int radniSati[][12])
{
    int max = 0;
    for(int i = 1; i < 10; i++)
        if(Prekovremeno(radniSati[max]) < Prekovremeno(radniSati[i]))
            max = i;
            
    return max;
    
}

int duzinaRijeci(char rijec[][10], int brMjeseca)
{
    int brojac = 0;
    while(rijec[brMjeseca][brojac] != '\0')
        brojac++;
        
    return brojac;
}

void isplate(int radniSati[][12])
{
    
    for(int i = 0; i < 12; i++)
    {
        int suma = 0;
        int prekovremenoSuma = 0;
        for(int j = 0; j < 10; j++)
        {
            suma += radniSati[j][i] * satnica;
            if(radniSati[i][j] > 160)
                prekovremenoSuma += (radniSati[j][i] - 160) * satnica;
        }
        
        int k = 0;
        int duzina = duzinaRijeci(mjesec, i);
        while(k < (40 - duzina) / 2) 
        {
            cout << "-";
            k++;
        }
        cout << mjesec[i]; 
        k += duzina;
        while(k < 40)
        {
            cout << "-";
            k++;
        }
        
        cout << "\nUkupno isplaceno: " << suma << " KM";
        cout << "\nIsplaceno za prekovremeni rad: " << prekovremenoSuma << " KM";
        cout << endl;
        
    }
}

int main()
{
    int radniSati[10][12];
    
    //Za testiranje dodati u header #include <ctime>
    //srand(time(NULL));
    //i cin >> radniSati[i][j] zamjeniti sa radniSari[i][j] = "Formula za neke rand vrijednosti"
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 12; j++)
            cin >> radniSati[i][j]//radniSati[i][j] = 160 + 4 * 5 * rand() % 6;
            
    for(int i = 0; i < 10; i++)
        platnaLista(radniSati[i]);
      
    cout << "Najvise prekovremenih sati ima radnik broj " << najvisePrekovremenih(radniSati) + 1 << endl;
    
    isplate(radniSati);
    
    return 0;
}