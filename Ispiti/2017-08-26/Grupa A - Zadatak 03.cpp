#include <iostream>

using namespace std;

int duzinaRecenice(char recenica[])
{
    int brojac = 0;
    while(recenica[brojac] != '\0')
        brojac++;
        
    return brojac;
}

int ukloniRijeci(char recenica[])
{
    int duzina = duzinaRecenice(recenica);
    
    int brRijeci = 0;
    for(int i = 0; i < duzina; i++)
    {
        while(recenica[i] != ' ')
            i++;
        
        brRijeci++;
        
        while(recenica[i] == ' ')
            i++;
    }
    
    for(int i = 0; i < duzina; i++)
    {
        if(recenica[i] >= 'A' && recenica[i] <= 'Z')
        {
            int j, k;
            j = k = i;
            while(recenica[j] != ' ' && j < duzina)
                j++;
            while(recenica[j] == ' ')
                j++;
                
            
                
            while(recenica[k] != '\0')
                recenica[k++] = recenica[j++];
            
            duzina = duzina - j + k;
        }
    }
    
    return brRijeci;
    
}


int main()
{
    char recenica[200] = {"Stari most u Mostaru spaja obale rijeke Neretve."};
    
    cout << "Recenica ima " << ukloniRijeci(recenica) << " rijeci" << endl;
    
    int i = 0;
    while(recenica[i] != '\0')
        cout << recenica[i++];
    return 0;
}