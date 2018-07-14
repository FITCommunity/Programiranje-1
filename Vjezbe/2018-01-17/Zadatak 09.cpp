#include <iostream>
#include <cmath>

using namespace std;

const int meteorolog = 5;
const int dan = 7;

double temperature[dan] = {25.5, 26.8, 21, 32, 35.6, 36, 33.5};

void unesiPrognoze(double niz[][dan]);
double najnizePrognoze(double niz[][dan]);
double uspjesnostMjerenja(double niz[][dan], int m);
int najuspjesnijiMeteorolog(double niz[][dan]);

int main()
{
    double mjerenja[meteorolog][dan];
    int m;
    
    unesiPrognoze(mjerenja);
    cout << "Najniza prognoza je za " << najnizePrognoze(mjerenja) << ". dan" << endl;
    
    do
    {
        cout << "Izaberite meteorologa" << endl;
        cin >> m;
        
    }while(m < 1 || m > 5);
    
    cout << "Uspjesnost meteorologa broj" << m << " je " << uspjesnostMjerenja(mjerenja, m-1) * 100 << "%" << endl;
    cout << "Najuspjeniji meteorolog je meteorolog broj " << najuspjesnijiMeteorolog(mjerenja) + 1 << " sa % tacnosti od " 
        << uspjesnostMjerenja(mjerenja, najuspjesnijiMeteorolog(mjerenja)) * 100 << "%" << endl;
        
        
    
}

int najuspjesnijiMeteorolog(double niz[][dan])
{
    double uspjesnost[meteorolog];
    int max;
    
    for(int i = 0; i < meteorolog; i++)
    	uspjesnost[i] = uspjesnostMjerenja(niz, i);
    
    max = 0;
    for(int i = 1; i < meteorolog; i++)
    	if(uspjesnost[i] > uspjesnost[max])
            max = i;	
    
    return max;
}

double uspjesnostMjerenja(double niz[][dan], int m)
{
    double suma = 0;
    
    for(int i = 0; i < dan; i++)
    	if(abs(niz[m][i]-temperature[i]) < 5)
            suma++;
    
    return suma / 7;    
}

double najnizePrognoze(double niz[][dan])
{
    double prosjek[dan] = {};
    int min;
    
    for(int i = 0; i < dan; i++)
    {
        for(int j = 0; j < meteorolog; j++)
        {
            prosjek[i] += niz[j][i];
        }
        prosjek[i] = prosjek[i] / 7;
    }
    
    
        
    min = 0;
    for(int i = 1; i < dan; i++)
    	if(prosjek[i] < prosjek[min])
            min = i;
    
    return min;

}

void unesiPrognoze(double niz[][dan])
{
    for(int i = 0; i < meteorolog; i++)
    {
        cout << "Unesite mjerenja " << i + 1 << ". meteorologa" << endl;
        for(int j = 0; j < dan; j++)
        {
            do
            {
                cin >> niz[i][j];
                
            }while(niz[i][j] < -20 || niz[i][j] > 50);
        }
    }
}