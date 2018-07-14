#include <iostream>

using namespace std;

int duzina(const char niz[])
{
    int i = 0;
    while(niz[i] != '\0') i++;
    return i;
}

void zamjena(char recenica[],const char rijec[], int &duzinaRecenice, const int duzinaRijeci)
{
    char novaRijec[4] = "FIT";
    for(int i = 0; i < duzinaRecenice; i++)
    {
        int brojac = i;
        bool flag = false;
        if(recenica[brojac] == rijec[0])
        {
            flag = true;
            for(int j = 0; j < duzinaRijeci; j++)
            {
                if(recenica[brojac++] != rijec[j])
                {
                    flag = false;
                    break;
                }
            }
            
        }
        
        
        
        if(flag)
        {
            for(int j = 0; j < duzina(novaRijec); j++)
                recenica[i++] = novaRijec[j];
            
            
            for(int j = i; j < duzinaRecenice - duzinaRijeci + duzina(novaRijec); j++)
                recenica[j] = recenica[j + duzinaRijeci - duzina(novaRijec)];
            
            duzinaRecenice = duzinaRecenice - duzinaRijeci + duzina(novaRijec);
        }
        
    }
}

int main()
{
    char recenica[200];
    char rijec[10];
    
    cout << "Unesite recenicu: ";
    cin.getline(recenica, 200, '.');
    
    
    cout << "Unesite rijec: ";
    cin.ignore();
    cin.getline(rijec, 10, '.');
    
    int duzinaRecenice = duzina(recenica);
    zamjena(recenica, rijec, duzinaRecenice, duzina(rijec));
    
    cout << "Nakon izmjene: ";
    for(int i = 0; i < duzinaRecenice; i++)
        cout << recenica[i];
    
    
    return 0;
}