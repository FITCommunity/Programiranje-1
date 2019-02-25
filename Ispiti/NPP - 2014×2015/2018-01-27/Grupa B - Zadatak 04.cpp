#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int d = 10;

void unos(int niz[][d]);
void transponuj(int niz[][d]);
void aritmeticka(int niz[][d], double &avg_p, double &avg_np);
void ispis(int niz[][d]);

int main()
{
    int matrica[d][d];
    double avg_p = 0, avg_np = 0;
           
    unos(matrica);
    ispis(matrica);
    transponuj(matrica);
    
    cout << endl;
    ispis(matrica);
    
    aritmeticka(matrica, avg_p, avg_np);
    
    if(avg_p > avg_np)
    {
      cout << "Vecu aritmeticku sredinu imaju parni brojevi iznad glavne dijagonale i ona iznosi: " << avg_p << endl;
    }
    else if(avg_p < avg_np)
	{
      cout << "Vecu aritmeticku sredinu imaju neparni brojevi iznad sporedne dijagonale i ona iznosi: " << avg_np << endl;
    }
    else
    {
      cout << "Aritmeticke sredine su jednake i iznose: " << avg_p << endl;
    }        
    

	system("pause>0");
	return 0;
    
}

void ispis(int niz[][d])
{
    for(int i = 0; i < d; i++)
    {
        for(int j = 0; j < d; j++) 
            cout << setw(4) << niz[i][j];
        cout << endl;
    }
}

void aritmeticka(int niz[][d], double &avg_p, double &avg_np)
{
    int brojac_p = 0,
        brojac_np = 0;
        
    for(int i = 0; i < d; i++)
    {
        for(int j = 0; j < d; j++)
        {
            //avg parnih iznad glavne dijagonale
            if(i < j && niz[i][j] % 2 == 0)
            {
                avg_p = avg_p + niz[i][j];
                brojac_p++;
            }
            
            //avg neparnih iznad sporedne dijagonale
            if(i + j < d - 1 && niz[i][j] % 2 == 1)
            {
                avg_np = avg_np + niz[i][j];
                brojac_np++;
            }
        }
    }
    
    avg_p = avg_p / brojac_p;
    avg_np = avg_np / brojac_np;
}

void transponuj(int niz[][d])
{
    int novi_niz[d][d] = {};
    
    for(int i = 0; i < d; i++)
        for(int j = 0; j < d; j++)
            novi_niz[j][i] = niz[i][j];
       
    
    for(int i = 0; i < d; i++)
        for(int j = 0; j < d; j++)
            niz[i][j] = novi_niz[i][j];
}

void unos(int niz[][d])
{
    cout << "Unesite niz: " << endl;
    for(int i = 0; i < d; i++)
        for(int j = 0; j < d; j++)
            cin >> niz[i][j];
}