#include <iostream>
 
using namespace std;
 
long unsigned int faktorijel(int broj)
{
    long unsigned int proizvod = 1;
    for(int i = 2; i <= broj; i++)
        proizvod *= i;
    return proizvod;
}
 
int main()
{
    int broj = 0;
    while(broj <= 0)
    {
        cout << "Unesite prirodan broj: ";
        cin >> broj;
    }
    
    long unsigned int suma = 0;
    for(int i = 1; i <= broj; i += 2)
        if(i % 7 != 0)
            suma += faktorijel(i);
    
    cout << suma << endl;
    
    system("pause>0");
    return 0;
}