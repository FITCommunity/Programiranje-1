/*
  Napišite  program  poštujući  sve  faze  procesa  programiranja  u  kojem  se  od 
  korisnika  traži  unos  tri  broja.  Program  treba  ispisati  najveću  i  najmanju  od  unesenih 
  vrijednosti.  Za  pronalaženje  najmanjeg  i  najvećeg  broja  upotrijebite  funkcije  najmanji  i 
  najveci čiji su prototipovi dati u nastavku:
  float najmanji (float, float, float);
  float najveci (float, float, float);
  
  Prilikom pisanja definicija funkcija najveci i najmanji upotrebite i funkcije min i max koje
  većaju manji/veći od dva broja, a čiji prototipovi su dati u nastavku: 
  float min (float, float);
  float max (float, float);
*/

#include <iostream>

using namespace std;

float najmanji(float, float, float);
float najveci(float, float, float);
float min(float, float);
float max(float, float);

int main()
{
    float br1, br2, br3;
    
    cout << "Unesite 3 broja: " << endl;
    cin >> br1 >> br2 >> br3;
    
    cout << "Najmanji broj je: " << najmanji(br1, br2, br3) << endl;
    cout << "Najveci broj je: " << najveci(br1, br2, br3) << endl;
    
    return 0;
}

float najmanji(float a, float b, float c)
{
    if(a < min(b, c)) return a;
    else if(b < min(a, c)) return b;
    else return c;
}

float najveci(float a, float b, float c)
{
    if(a > max(b, c)) return a;
    else if(b > max(a, c)) return b;
    else return c;
}

float min(float a1, float a2)
{
    if(a1 < a2) return a1;
    else return a2;
}

float max(float a1, float a2)
{
    if(a1 > a2) return a1;
    else return a2;
}
