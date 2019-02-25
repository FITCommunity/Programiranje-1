#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const int brojUposlenika = 10;
const char *imenaMjeseci[]
            { 
                "Januar", 
                "Februar", 
                "Mart", 
                "April", 
                "Maj", 
                "Juni", 
                "Juli", 
                "August",
                "Septembat", 
                "Oktobar", 
                "Novembar", 
                "Decembar"
            };



void Unos(float uposlenici[][12], int mjesec)
{
    //if Test - komentarisati cin >>; koristiti rand()
    cout << "Unesite plate za " << imenaMjeseci[mjesec - 1] << endl;
    for (int i = 0; i < brojUposlenika; i++)
        cin >> uposlenici[i][mjesec - 1]; 
        //uposlenici[i][mjesec - 1] = rand() % 1000 + 1000;
}

float IspisiPlate(float plate[])
{
    float prosjek = 0;
    for (int i = 0; i < 12; i++)
    {
        if (plate[i] != 0)
          cout << setw(12) << imenaMjeseci[i] << ": " << plate[i] << endl;
        
        prosjek += plate[i];
    }

    cout << endl;
    return prosjek / 12;
}

int najvecaProsjecnaPlata(float uposlenici[][12])
{
    float prosjeci[brojUposlenika] = { 0 };
    for (int i = 0; i < brojUposlenika; i++)
    {
        for (int j = 0; j < 12; j++)
            prosjeci[i] += uposlenici[i][j];
        prosjeci[i] /= 12;
    }

    int max = 0;
    for (int i = 0; i < brojUposlenika; i++)
        if (prosjeci[i] > prosjeci[max])
            max = i;

    cout << "Najveca prosjecna plata je: " << round(prosjeci[max] * 100) / 100 << endl;

    return max;
}

int main()
{
    float uposlenici[brojUposlenika][12] = { 0 };

    //if Test komentarisati
    int izbor;
    while (cout << "Izaberite mjesec: ", cin >> izbor, izbor > 0 && izbor < 13)
        Unos(uposlenici, izbor);

    while (cout << "Izaberite radnika: ", cin >> izbor, izbor > 0 && izbor < 11)
        IspisiPlate(uposlenici[izbor - 1]);

    //if Test odkomentarisati
    // srand(time(0));
    // for(int i = 1; i <= 12; i++) Unos(uposlenici, i);
    // for(int i = 1; i <= 10; i++) IspisiPlate(uposlenici[i - 1]);

    najvecaProsjecnaPlata(uposlenici);

    system("pause>0");
    return 0;
}