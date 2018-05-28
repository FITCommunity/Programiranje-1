/*
   Napisati program koji simulira bacanje 3 kockice (jedna kockica ima 6 strana i na tim stranama 
   su brojevi 1 - 6). Simuliranje bacanja svake kockice ostvariti funkcijom rand() % 6 + 1.
   Simulirati konstantno bacanje sve tri kockice dok se u dva uzastopna bacanja ne desi da se dobiju
   isti brojevi na sve tri kockice (npr. u šestom bacanju se dobiju brojevi 2, 2, 2 a u sedmom 4,4,4
   na sve tri kockice). Ispisati koliko je ukupno bilo bacanja dok se nije ispunio navedeni uslov.
   Nije potrebno tražiti bilo kakav unos od korisnika.
   
   Napomena: Po želji kreirati dodatne funkcije da se olakša rješavanje zadataka.
*/

#include <iostream>
#include <ctime>
 
using namespace std;
 
int main()
{
    int k1, k2, k3, brojac = 0, brBacanja = 0;
   
    srand(time(NULL));
    do
    {
        k1 = rand() % 6 + 1;
        k2 = rand() % 6 + 1;
        k3 = rand() % 6 + 1;
       
        if(k1 == k2 && k1 == k3)
            brojac++;
        else
            brojac = 0;
           
        brBacanja++;
    }while(brojac != 2);
   
    cout << brBacanja << endl;
   
    system("pause>0");
    return 0;
}