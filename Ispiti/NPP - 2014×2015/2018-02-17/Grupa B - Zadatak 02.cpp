#include <iostream>
#include <ctime>
 
using namespace std;
 
int main()
{
    int k1, k2, k3, brojac = 0, brBacanja = 0;
   
    srand(time(NULL));
    do
    {
        k1 = rand() % 6 + 1;
        k2 = rand() % 6 + 1;
        k3 = rand() % 6 + 1;
       
        if(k1 == k2 && k1 == k3)
            brojac++;
        else
            brojac = 0;
           
        brBacanja++;
    }while(brojac != 2);
   
    cout << brBacanja << endl;
   
    system("pause>0");
    return 0;
}