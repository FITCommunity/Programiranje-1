#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n, m, l, k;
    int granica = 10;
    bool potencija = false;
   
    do
    {
        cout << "Unesite broj: " << endl;
        cin >> n;
       
    }while(n < 1);
   
    for(k = 2; k <= granica; k++)
    {
        for(l = 2; l <= granica; l++)
        {
            m = pow(l, k);
           
            if(m >= n)
            {
                cout << m << endl;
                potencija = true;
                break;
            }
           
        }
       
        if(potencija) break;
            
    }
   
   
    system("pause>0");
    return 0;
}