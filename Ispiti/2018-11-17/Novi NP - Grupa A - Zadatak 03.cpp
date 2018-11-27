#include <iostream>
 
using namespace std;
 
const int dimenzija = 8;
 
bool isUnos(int red, int broj)
{
  return (red % 2 != 0 && broj % 2 == 0) || (red % 2 == 0 && broj % 2 != 0);
}
 
void Ispis(int matrica[][dimenzija])
{
    cout << endl;
    for(int i = 0; i < dimenzija; i++)
    {
        for(int j = 0; j < dimenzija; j++)
            cout << matrica[i][j] << " ";
        cout << endl;
    }   
}
 
void Unos(int matrica[][dimenzija])
{
    for(int i = 0; i < dimenzija; i++)
        for(int j = 0; j < dimenzija; j++)
            do
            {
                // ifTest comment L1, uncomment L2
                cout << "matrica[" << i << "][" << j << "]: ";
                cin >> matrica[i][j]; // L1
                //matrica[i][j] = rand() % 100 + 1; // L2
        
            }while(!isUnos(i, matrica[i][j]));
}
 
int NajmanjiProsjek(int matrica[][dimenzija])
{
    float min[dimenzija] = {0};
    for(int i = 0; i < dimenzija; i++)
    {
        for(int j = 0; j < dimenzija; j++)
            min[i] += matrica[j][i];
        min[i] /= dimenzija;
    }
    
    int minIndeks = 0;
    for(int i = 1; i < dimenzija; i++)
        if(min[i] < min[minIndeks])
        minIndeks = i;
    
    cout << "Kolona sa najmanjim prosjekom: " << minIndeks << endl;
    
    return minIndeks;
}
 
int main()
{
    int matrica[dimenzija][dimenzija];
    
    // ifTest uncomment srand(time(0));
    // srand(time(0));
    Unos(matrica);
    Ispis(matrica);
    
    int kolona = NajmanjiProsjek(matrica);
    for(int i = 0; i < dimenzija; i++)
        cout << matrica[i][kolona] << endl;
    
    system("pause>0");
    return 0;
}