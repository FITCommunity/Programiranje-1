/*  
   Napisati program koji korisniku omogućava unos cijelog broja N, te izračunava geometrijsku sredinu svih 
   neparnih brojeva u intervalu [1, N] koji su djeljivi sa 5. Rezultat treba biti zaokružen na dvije decimale.
   Geometrijska sredina n brojeva se računa po formuli: (a1 * a2 * ... an) ^ 1/n
*/

#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n, i = 1, brojac = 0, proizvod = 1;
    float geo_sredina, eksponent;
   
    do
    {
        cout << "Unesite broj: " << endl;
        cin >> n;
       
    }while(n <= 1);
   
    do
    {
        if(i % 2 != 0 && i % 5 != 0)
        {
            proizvod *= i;
            brojac++;
        }
       
        i++;
       
    }while(i < n);
   
    eksponent = 1 / float(brojac);
    geo_sredina = pow(proizvod, eksponent);
    geo_sredina = round(geo_sredina * 100.0)/100.0;
   
   
    cout << "Geometrijska sredina je: " << geo_sredina << endl;
   
   
    system("pause>0");
    return 0;
   
}
