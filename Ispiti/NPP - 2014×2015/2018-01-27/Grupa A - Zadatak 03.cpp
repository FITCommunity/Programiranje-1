#include <iostream>
 
using namespace std;

int sekvencija(int niz[], int n)
{
    int brojacSekvence = 0;
    for(int i = 0; i < n; i++)
    {
      int brojac = 1;
           
      while(i < n && niz[i] == niz[i + 1] - 1) brojac++, i++;
       
      if(brojac >= 4) brojacSekvence++;
    }
   
    return brojacSekvence;
}
 
int main()
{
    const int n = 10;
    int niz[n];
   
    for(int i = 0; i < n; i++)
      cin >> niz[i];
       
    cout << sekvencija(niz, 50) << endl;
 
    system("pause>0");
    return 0;
}