#include <iostream>
#include <cmath>
 
using namespace std;

int Potencija(int broj)
{
  int granica = 10;
  for(int k = 2; k <= granica; k++)
    for(int l = 2; l <= granica; l++)
    {
      int m = pow(l, k);
      if(m >= broj)
        return m;
    }
}
 
int main()
{
    int n;
       
    do
    {
        cout << "Unesite broj: " << endl;
        cin >> n;
       
    }while(n < 1);
   
    cout << Potencija(n);
   
    system("pause>0");
    return 0;
}