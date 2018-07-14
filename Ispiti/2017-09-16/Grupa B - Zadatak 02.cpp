#include <iostream>

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


int main()
{
    int m, n;
    float temp = 0;
    do
    {
        
        do
        {
            cout << "Unesi m i n: ";
            cin >> m >> n;
        }while((m < 0 || m > 50 || n < 0 || n > 500) && ( m != 0 || n != 0));
        
        if(m == 0 || n == 0)
        {
            cout << "Forsiran prekid..." << endl;
            break;
        }
        
        int proizvod = m * n;
        int duzina = duzinaBroja(proizvod);
        
        float srednja;
        if(duzina % 2 == 0)
        {
            for(int i = 0; i < (duzina - 1) / 2; i++)
                proizvod /= 10;
            
            srednja = ((proizvod % 10) + (proizvod / 10) % 10) / 2.0;
        }
        else
        {
            for(int i = 0; i < duzina / 2; i++)
                proizvod /= 10;
                
            srednja = proizvod % 10;
            srednja = int(srednja);
            
        }
        
        if(temp < srednja)
            cout << "Srednja cifra/sredina proizvoda brojeva " 
            << m << " i " << n << "(" << m << "*" << n << "=" << m * n << ") je: " << srednja << endl;
        else
            cout << "Srednja cifra/sredina proizvoda brojeva " 
            << m << " i " << n << "(" << m << "*" << n << "=" << m * n << ") je: ne ispisuje se" << endl;
            
        temp = srednja;
            
    }while(temp - 9 < 0);
    
    return 0;
}