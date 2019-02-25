#include <iostream>
 
using namespace std;
 
int prost(int x)
{
    for(int i = 2; i < x; i++)
        if(x % i == 0)
            return 0;
   
    return 1;
}
void goldbachov(int n1, int n2)
{
    int i, j;
   
    if(n1 % 2 != 0)
        n1++;
    do
    {
        //if(n1 == 2) i = 1;
        //else i = 2;
        for(n1 == 2 ? i = 1 : i = 2 ; i <= n1; i++)
        {
            for(n1 == 2 ? j = 1 : j = 2 ; j <= n1; j++)
            {
                if(prost(i) && prost(j))
                {
                    if(i + j == n1)
                    {
                      cout << i << " + " << j << " = " << n1 << endl;
                      n1 += 2;
                      break;
                    }
                }
               
            }
            if(n1 >= n2) break;
                
        }
       
    }while(n1 < n2);
   
   
}
 
int main()
{
    int n1, n2;
   
    do
    {
        cout << "Unesite 2 broja: " << endl;
        cin >> n1 >> n2;
       
    }while(n1 <= 0 || n2 <= 0);
   
    if(n1 > n2)
    {
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }
   
    goldbachov(n1, n2);
 
    system("pause>0");
    return 0;
}