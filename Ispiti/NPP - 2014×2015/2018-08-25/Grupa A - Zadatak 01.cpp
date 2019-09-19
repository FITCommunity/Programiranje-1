#include <iostream>
#include <cmath>

using namespace std;

/*
kako se trazi da se nade broj m koji je veci ili jednak n krece se od n 
i trazi se broj l (veci ili jednak 2 a manji od sqrt(n) + 1) koji broj n dijeli k puta (tj. dobije se n = k ^ l)
ukoliko je broj m potencija nekog broja dijeljenjem sa brojem l k puta ce ga svesti na 1 i pronasli smo trazeni broj m,
ukoliko broj m nije potencija treba ga inkrementirati i ponoviti proces
*/

int getPotenciju(int n)
{
  int tempBroj;
  while(1)
  {
    int l = 2;
    while(l < sqrt(n) + 1)
    {
      tempBroj = n;
      int k = 0;
      while(tempBroj % l == 0)
      {
        tempBroj /= l;
        k++;
      }
        
      if(tempBroj == 1 && k >= 2) return n;
      l++;
    }

    n++;
  }

  return n;
}

int main() 
{
    int n;
    while(cout << "Unesite broj: ", cin >> n, n <= 0);

    

    cout << getPotenciju(n) << endl;
    system("pause>0");
    return 0;
}