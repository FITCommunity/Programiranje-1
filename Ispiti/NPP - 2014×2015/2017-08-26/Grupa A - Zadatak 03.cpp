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
        //Prolazak kroz znakove
        while(recenica[i] != ' ')
            i++;
        
        brRijeci++;
        
        //Prolazak kroz razmak
        while(recenica[i] == ' ')
            i++;
    }
    
    for(int i = 0; i < duzina; i++)
    {
        if((recenica[i] >= 'A' && recenica[i] <= 'Z') && (recenica[i - 1] == ' ' || i == 0)) //Ako rijec pocinje sa velikim slovom
        {
            int j, k;
            j = k = i;
            //Prolazi kroz rijec
            while(recenica[j] != ' ' && j < duzina)
                j++;
            //Prolazi kroz razmak koji se nalazi prije sljedece rijeci
            while(recenica[j] == ' ')
                j++;
                
            
            //Prepisuje ostatak recenice u prostor gdje se nalazila rijec    
            while(recenica[k] != '\0')
                recenica[k++] = recenica[j++];
            
            duzina = duzina - j + k; //skracuje duzinu recenice za duzinu rijeci
            i--; //vraca i na poziciju prije uklonjene rijeci
        }
    }
    
    return brRijeci;
    
}


int main()
{
    char recenica[200] = {"Stari most U Mostaru spaja obale rijeke Neretve."};
    
    cout << "Recenica ima " << ukloniRijeci(recenica) << " rijeci" << endl;
    
    int i = 0;
    while(recenica[i] != '\0')
        cout << recenica[i++];
    return 0;
}