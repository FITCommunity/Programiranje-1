#include <iostream>

using namespace std;

bool provjera(int broj)
{
    int temp = broj;
    int cifra;
    while(temp)
    {
        cifra = temp % 10;
        
        if(cifra == 0)
            return false;
            
        if(broj % cifra != 0)
            return false;
        
        temp /= 10;
    }
    
    return true;
}

int main()
{
   int x, y;
   do
   {
       cout << "Unesite brojeve x i y: ";
       cin >> x >> y;
       
   }while(x < 10 || y < 10 || x > 6000 || y > 6000);
   
   if(x > y)
   {
       int temp = x;
       x = y;
       y = temp;
   }
   
   for(int i = x; i <= y; i++)
        if(provjera(i))
            cout << i << endl;
   
   return 0;
}