#include <iostream>

using namespace std;

const int duzina = 10;

void unos(int niz[])
{
    cout << "Unesite niz: " << endl;
    for(int i = 0; i < duzina; i++)
    	cin >> niz[i];
}

void ispis(int niz[])
{
    cout << endl;
    for(int i = 0; i < duzina; i++)
    	cout << niz[i] << " ";
}

void sortiraj(int niz[], int izbor)
{
    int temp;
    for(int i = 0; i < duzina; i++)
    {
	for(int j = i + 1; j < duzina; j++)
        {
            if(izbor == 1 ? niz[i] < niz[j] : niz[i] > niz[j])
            {
            	temp = niz[j];
                niz[j] = niz[i];
                niz[i] = temp;
            }
        }
    }
}

int main()
{
    int niz[duzina], izbor;
    
    unos(niz);
    cout << endl;
    ispis(niz);
    
    do
    {
        cout << "Unesite nacin sortiranja" << endl 
             << "1 - za opadajuci poredak" << endl
             << "2 - za rastuci poredak" << endl;
        cin >> izbor;
    }while(izbor != 1 && izbor != 2);
    
    sortiraj(niz, izbor);
    ispis(niz);
    
    return 0;
}