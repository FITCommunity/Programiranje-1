#include <iostream>

using namespace std;

int duzinaStringa(char niz[])
{
    int duzina = 0;
    
    while(niz[duzina] != '\0')
        duzina++;
    
    return duzina;
}

int ponavljanje(char recenica[], char rijec[])
{
    int dRecenice = duzinaStringa(recenica);
    int dRijeci = duzinaStringa(rijec);
    
    int brojac = 0, 
        brojac_rijeci = 0,
        j;
    bool sekvenca = false;
    
    for(int i = 0; i < dRecenice; i++)
    {
        j = 0;
        do
        {
            
            if(!sekvenca)
                brojac = 0;
                
            if((recenica[i] == rijec[j] ||
                recenica[i] == rijec[j] - 32 ||
                recenica[i] == rijec[j] + 32) &&
                recenica[i] != '\0' && rijec[j] != '\0')
            {
               brojac++;
               sekvenca = true;
               i++; 
            }
            else
                sekvenca = false;
            

            if(!sekvenca && brojac == dRijeci && (recenica[i] == ' ' || recenica[i] == '\0'))
                brojac_rijeci++;
            
            j++;
                
        }while(j <= dRijeci);
    }
    
    
    return brojac_rijeci;
}

int main()
{
    char recenica[200] = {"Most u Mostaru je Stari most a pored njega je jos jedan most"};
    char rijec[5] = {"most"};
    
    cout << rijec << " se ponavlja " << ponavljanje(recenica, rijec) << " put(a) u recenici '" << recenica << "'" << endl;
    
    system("pause>0");
    return 0;
}