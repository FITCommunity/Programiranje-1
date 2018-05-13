/*
   Napisati program koji simulira bacanje 3 kockice (jedna kockica ima 6 strana i na tim stranama 
   su brojevi 1 - 6). Simuliranje bacanja svake kockice ostvariti funkcijom rand() % 6 + 1.
   Simulirati konstantno bacanje sve tri kockice dok se u dva uzastopna bacanja ne desi da se dobiju
   isti brojevi na sve tri kockice (npr. u šestom bacanju se dobiju brojevi 2, 2, 2 a u sedmom 4, 4, 4
   na sve tri kockice). Ispisati koliko je ukupno bilo bacanja dok se nije ispunio navedeni uslov.
   Nije potrebno tražiti bilo kakav unos od korisnika.
   
   Napomena: Po želji kreirati dodatne funkcije da se olakša rješavanje zadataka.
*/

#include <ctime>
#include <cmath>
 
using namespace std;
 
int main()
{
    int suma1 = 0,
        suma2 = 0,
        suma3 = 0,
        suma4 = 0,
        suma5 = 0,
        suma6 = 0,
        n,
        kockica;
   
    srand(time(NULL));
   
    do
    {
        cout << "Unesite broj: " << endl;
        cin >> n;
       
    }while(n < 10 || n > 1000);
   
    for(int i = 0; i < n; i++)
    {
        kockica = rand()%6 + 1;
       
        switch(kockica)
        {
            case 1:
                suma1++;
                break;
            case 2:
                suma2++;
                break;
            case 3:
                suma3++;
                break;
            case 4:
                suma4++;
                break;
            case 5:
                suma5++;
                break;
            case 6:
                suma6++;
                break;
               
        }
       
    }
   
    cout << "Procenat za broj 1: " << round(100 * double(suma1) / n * 100.0) / 100.0 << "%" << endl;
    cout << "Procenat za broj 2: " << round(100 * double(suma2) / n * 100.0) / 100.0 << "%" << endl;
    cout << "Procenat za broj 3: " << round(100 * double(suma3) / n * 100.0) / 100.0 << "%" << endl;
    cout << "Procenat za broj 4: " << round(100 * double(suma4) / n * 100.0) / 100.0 << "%" << endl;
    cout << "Procenat za broj 5: " << round(100 * double(suma5) / n * 100.0) / 100.0 << "%" << endl;
    cout << "Procenat za broj 6: " << round(100 * double(suma6) / n * 100.0) / 100.0 << "%" << endl;
   
    system("pause>0");
    return 0;
   
}
