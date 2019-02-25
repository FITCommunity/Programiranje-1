#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    double x;
    int m;
    char izbor;
    
    cout << "Unesite prirodan broj: ";
    cin >> x;
    
    cout << "Unesite cijeli broj: ";
    cin >> m;
    
    double rezultat = 1;
    do
    {
        cout << "Izaberite funkciju " << endl
            << "s - sinus" << endl
            << "c - kosinus" << endl
            << "q - korijenovanje" << endl
            << "p - kubiranje" << endl;
        cin >> izbor;
    
        switch(izbor)
        {
        case 's':
            for(int i = 1; i <= m; i++)
            rezultat *= sin(x) + i;
            break;
        case 'c':
            for(int i = 1; i <= m; i++)
            rezultat *= cos(x) + i;
            break;
        case 'q':
            for(int i = 1; i <= m; i++)
            rezultat *= sqrt(x) + i;
            break;
        case 'p':
            for(int i = 1; i <= m; i++)
            rezultat *= pow(x, 3) + i;
            break;
        default:
            cout << "Funkcija ne postoji!" << endl;
        }
    }while(izbor != 's' && izbor != 'c' && izbor != 'q' && izbor != 'p');
    
    cout << rezultat << endl;
    
    system("pause>0");
    return 0;
}