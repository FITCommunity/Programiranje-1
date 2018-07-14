#include <iostream>
 
using namespace std;
 
const int n = 50;
 
int sekvencija(int niz[]);
 
int main()
{
    int niz[n];
   
    for(int i = 0; i < n; i++)
        cin >> niz[i];
       
    cout << sekvencija(niz) << endl;
 
    system("pause>0");
    return 0;
}
 
int sekvencija(int niz[])
{
    int brojac = 1, brojac_sek = 0;
    bool sekvenca = false;
    for(int i = 0; i <= n - 1; i++)
    {
        if(!sekvenca)
            brojac = 1;
           
        if(niz[i] == niz[i+1] - 1)
        {
            brojac++;
            sekvenca = true;
        }
        else
        {
            sekvenca = false;
        }
       
        if(!sekvenca && brojac >= 4)
            brojac_sek++;
    }
   
    return brojac_sek;
 
}