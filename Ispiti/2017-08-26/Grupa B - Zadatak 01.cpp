/*
  Kreirati program koji æe pronaæi i ispisati sve brojeve od X do Y (ukljuèujuæi
  graniène vrijednosti) koji su deljivi svim svojim ciframa. Na primjer, broj 36 
  je djeljiv sa brojevima 3 i 6. (36/6=6 i 36/3=12). Brojeve X i Y unosi korisnik 
  i moraju biti u opsegu od 10 do 6000. Obavezno koristiti bar jednu funkciju.
*/

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