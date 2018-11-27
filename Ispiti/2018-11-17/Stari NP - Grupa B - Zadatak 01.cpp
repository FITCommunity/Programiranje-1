#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    int broj = 0;
    while(broj <= 0)
    {
        cout << "Unesite prirodan broj: ";
        cin >> broj;
    }
    
    int proizvod = 1;
    int brojac = 0;
    for(int i = 1; i < broj; i++)
        if(i % 5 != 0)
        {
            proizvod *= i;
            brojac++;
        }
    cout << "Geometrijska sredina: " << pow(proizvod, 1.F / brojac) << endl;
    
    system("pause>0");
    return 0;
}