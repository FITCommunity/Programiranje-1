#include <iostream>
#include <cmath>

using namespace std;

bool provjeraBroja(int);
void Stanje(double);
void Dopuna(double &);
void Slanje(double &, double);
void meni();

int main()
{
    long int broj;
    double kredit = 5.0, slanjeK;
    
    cout << "Unesite broj telefona:\n+387";
    cin >> broj;
    
    if(provjeraBroja(broj))
    {
        
        while(true)
        {
            meni();

            int izbor;
            cin >> izbor;
            
            if(izbor == 0) break;

            system("CLS");
            
            switch(izbor)
            {
                case 1:
                  Stanje(kredit);
                  break;
                case 2:
                  Dopuna(kredit);
                  break;
                case 3:
                  cout << "Koliko kredita zelite poslati: " << endl;
                  cin >> slanjeK;
                  Slanje(kredit, slanjeK);
                  break;
                default:
                  cout << "Greska!" << endl;
            }
            
        }
            
    }
    else cout << "Broj nije ispravan!" << endl;
}

bool provjeraBroja(int broj)
{
    //treba imati 8-9 cifri
    int temp = broj;
    int duzina = 0;

    while(broj > 0)
    {
        broj = broj / 10;
        duzina++;
    }

    temp = temp / pow(10, duzina - 2);
    
    return (duzina == 8 || duzina == 9) && (temp == 60 || temp == 61 || temp == 62);   
}

void meni()
{
    cout << "Izaberite opciju: " << endl
         << "1 - Provjeru stanja " << endl
         << "2 - Dopunu kredita" << endl
         << "3 - Slanje kredita" << endl
         << "0 - Zavrsi izbor" << endl;
}

void Stanje(double kredit)
{
    cout << "Stanje na vasem racunu je: " << kredit << endl;
}

void Dopuna(double &kredit)
{
    double dopunaK;
    cout << "Koliko kredita zelite dopuniti?" << endl;
    cin >> dopunaK;
    
    kredit += dopunaK;
}

void Slanje(double &kredit, double slanjeK)
{
    if(slanjeK > kredit - slanjeK) cout << "Nemate dovoljno kredita" << endl;
    else kredit -= slanjeK;
}