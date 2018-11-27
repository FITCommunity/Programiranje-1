#include <iostream>
#include <cmath>

using namespace std;

int duzinaBroja(int broj)
{
    int brojac = 0;
    while(broj)
    {
        broj /= 10;
        brojac++;
    }
    
    return brojac;
}


float srednjaCifra(int m, int n)
{
  int proizvod = m * n;
  int duzina = duzinaBroja(proizvod);

  float srednja;
  if(duzina % 2 == 0)
  {
    proizvod = proizvod / pow(10, (duzina - 1) / 2);  
    srednja = ((proizvod % 10) + (proizvod / 10) % 10) / 2.0;
  }
  else
  {
    proizvod = proizvod / pow(10, duzina / 2);            
    srednja = proizvod % 10;
  }

  return srednja;
}


int main()
{
    int m, n;
    float temp = 0;

    while(temp < 9)
    {
        do
        {
            cout << "Unesi m i n: ";
            cin >> m >> n;

        }while(m <= 0 || m > 50 || n < 0 || n > 500);
        
        if(n == 0)
        {
            cout << "Forsiran prekid..." << endl;
            break;
        }
        
        float srednja = srednjaCifra(m, n);
       
        
        if(temp < srednja)
        {
           cout << "Srednja cifra/sredina proizvoda brojeva " 
                << m << " i " << n 
                << " (" << m << " * " << n << " = " << m * n << ") je: " << srednja
                << endl;
        }
        else
        {
           cout << "Srednja cifra/sredina proizvoda brojeva " 
                << m << " i " << n 
                << " (" << m << " * " << n << " = " << m * n << ") je: ne ispisuje se"
                << endl; 
        }
            
        temp = srednja;
            
    }
    
    return 0;
}