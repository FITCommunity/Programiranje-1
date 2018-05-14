/*
   Napišite program, poštujući sve faze procesa programiranja, za rezervaciju 
   autobusnih karata. U autobusu je 20 sjedišta. Korisnik ima pravo birati želi li sjedište do 
   prozora ili do prolaza (sjedišta do prozora označena sa x).
   
   +---+---+    +---+---+
   | x |   |    |   | x |
   +---+---+    +---+---+
   | x |   |    |   | x |
   +---+---+    +---+---+
   | x |   |    |   | x |
   +---+---+    +---+---+
   | x |   |    |   | x |
   +---+---+    +---+---+
   | x |   |    |   | x |
   +---+---+    +---+---+
   
   Kreirajte funkcije za: 
    • rezervaciju sjedišta, 
    • otkazivanje rezervacije sjedišta
    • provjeru je li neko sjedište slobodno, 
    • ispis slobodnih i zauzetih sjedišta. 
   Po potrebi kreirajte i dodatne funkcije. 
*/

#include <iostream>

using namespace std;

void ispis(bool niz[][4]);
void rezervacija(bool niz[][4]);
bool provjera(bool niz[][4], int x, int y);
void otkazivanje(bool niz[][4]);

int main()
{
    bool sjedista[5][4] = {};
    int opcija;
    int x, y;

    
    do
    {
        cout << "Izaberite uslugu: " << endl
             << "0 - Izlaz" << endl
             << "1 - Rezervacija" << endl
             << "2 - Otkazivanje rezervacije" << endl
             << "3 - Provjera" << endl
             << "4 - Ispis" << endl;
        cin >> opcija;
        
        if(opcija == 1) rezervacija(sjedista);
        else if(opcija == 2) otkazivanje(sjedista);
        else if(opcija == 3)
        {
            cout << "Koje sjediste zelite provjeriti?" << endl;
            cin >> x >> y;
            
            if(provjera(sjedista, x-1, y-1)) cout << "Mjesto nije zauzeto" << endl;
            else cout << "Mjesto je zauzeto" << endl;
            
        }
        else if(opcija == 4) ispis(sjedista);
        else if(opcija != 0) cout << "Pogresna usluga" << endl;
        
    }while(opcija != 0);
    
    ispis(sjedista);
    
    return 0;
}

void otkazivanje(bool niz[][4])
{
    int x, y;
    cout << "Koju rezervaciju zelite otkazati?" << endl;
    cin >> x >> y;
    
    // !nesta -> nesta = false;
    if(!provjera(niz, x-1, y-1))
    {
        niz[x-1][y-1] = false;
        cout << "Rezervacija otkazana!" << endl;
    }
    else cout << "To mjesto nije rezervisano" << endl;
}

void rezervacija(bool niz[][4])
{
    bool prozor_prolaz[5][4] = { {true, false, false, true},
                                 {true, false, false, true},
                                 {true, false, false, true},
                                 {true, false, false, true},
                                 {true, false, false, true}};
    char mjesto;
    int x, y;
    
    
    
    do
    {
        
        ispis(prozor_prolaz);
        cout << "Da li zelite mjesto do prozora (X) ili prolaza (O)?" << endl;
        cin >> mjesto;
            
     
        cout << "Koje mjesto zelite rezervisati?" << endl;
        cin >> x >> y;
        
        x = x - 1;
        y = y - 1;
        
        if((mjesto == 'X' || mjesto == 'x') && (y == 1 || y == 2)) cout << "To mjesto nije do prozora." << endl;
        else if((mjesto == 'O' || mjesto == 'o' ) && (y == 0 || y == 3)) cout << "To mjesto nije do prolaza." << endl;
        else
        {
            if(provjera(niz, x, y))
            {
                niz[x][y] = true;
                cout << "Mjesto uspjesno rezervisano" << endl;
            }
            else cout << "To mjesto je zauzeto" << endl;
        }
    }while(!provjera(niz, x-1, y-1));
    
    
}

bool provjera(bool niz[][4], int x, int y)
{
    // true - zauzeto vrati false
    if(niz[x][y]) return false;
    else return true;
}

void ispis(bool niz[][4])
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            // if true - zauzeto
            if(niz[i][j]) cout << "X";
            else cout << "O";
        }
        cout << endl;
    }
}
