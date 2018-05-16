/*
  Napisati program koji omoguæava unos realnog broja x,
  cijelog broja m (m > 0) i odabir funkcije za proraèun
  datog izraza. Korisnik bira funkciju unosom jednog od
  sljedeæih karaktera: 's' (sabiranje), 'o' (oduzimanje),
  'm' (množenje), 'd' (dijeljenje). U sluèaju da korisnik
  unese karakter koji ne odgovara niti jednoj od predefinisanih
  vrijednosti ispisati odgovarajuæu poruku i ponoviti odabir.
  
  Za odabir funkcije s izraz je:
  f(x, m) = [(1 + x)/1] + [(2 + x)/2] + ... + [(m + x)/m]
  Za odabir funkcije o izraz je:
  f(x, m) = [(1 + x)/1] - [(2 + x)/2] - ... - [(m + x)/m]
  itd.
  
  Broj faktora u izrazu odgovara unesenom broju m.
  U rješenju obavezno iskoristiti switch iskaz.
*/

#include <iostream>

using namespace std;

int main()
{
    double x;
    cout << "Unesite realan broj: ";
    cin >> x;
    
    int m;
    do
    {
        cout << "Unesite cijeli broj: ";
        cin >> m;
        
    }while(m < 0);
    
    char operacija;
    long double rezultat;
    do
    {
        cout << "Odaberite operaciju: " << endl
             << "s - Sabiranje" << endl
             << "o - Oduzimanje" << endl
             << "m - Mnozenje" << endl
             << "d - Dijeljenje" << endl;
        cin >> operacija;
             
        rezultat = (1 + x) / 1;
        switch(operacija)
        {
            case 's':
                for(int i = 2; i <= m; i++)
                    rezultat += (i + x) / i;
                break;
            case 'o':
                for(int i = 2; i <= m; i++)
                    rezultat -= (i + x) / i;
                break;
            case 'm':
                for(int i = 2; i <= m; i++)
                    rezultat *= (i + x) / i;
                break;
            case 'd':
                for(int i = 2; i <= m; i++)
                    rezultat /= (i + x) / i;
                break;
            default:
                cout << "Pogresna operacija pokusaj te ponovo" << endl;
        }
        
    }while(operacija != 's' && operacija != 'o' && operacija != 'm' && operacija != 'd');
    
    cout << "Rezultat: " << rezultat << endl;
     
    return 0;
}