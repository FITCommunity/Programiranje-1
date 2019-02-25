#include <iostream>

using namespace std;

int duzina(const char niz[])
{
    int i = 0;
    while(niz[i] != '\0') i++;
    return i;
}

bool rijecPostoji(const char recenica[], int i, const char rijec[])
{
  int duzinaRijeci = duzina(rijec);

  for(int j = 0; j < duzinaRijeci; j++)
    if(recenica[i++] != rijec[j])
      return false;
  
  return true;
}

void preklopiRijec(char recenica[], int &i, const char rijec[])
{
  int duzinaRijeci = duzina(rijec);
  for(int j = 0; j < duzinaRijeci; j++)
    recenica[i++] = rijec[j];
}

void zamjena(char recenica[], const char rijec[], int &duzinaRecenice)
{
    char novaRijec[] = "FIT";
    int duzinaRijeci = duzina(rijec);

    for(int i = 0; i < duzinaRecenice; i++)
    {
        if(rijecPostoji(recenica, i, rijec))
        {
            int novaDuzina = duzina(novaRijec);

            if(novaDuzina < duzinaRijeci)
            {
              preklopiRijec(recenica, i, novaRijec);

              //Pomjeri recenicu do lokacije "i" tako da ne ostaje praznog mjesta ni starih karaktera
              for(int j = i; j < duzinaRecenice - duzinaRijeci + novaDuzina + 1; j++)
                recenica[j] = recenica[j + duzinaRijeci - novaDuzina];
            }
            else
            {
              //Pomjeri recenicu nazad tako da se nova rijec ne napise preko ostatka recenice
              for(int j = duzinaRecenice + novaDuzina - duzinaRijeci; j > i; j--)
                recenica[j] = recenica[j - 1];
              
              preklopiRijec(recenica, i, novaRijec);
            }

            duzinaRecenice = duzinaRecenice - duzinaRijeci + novaDuzina;
            i--;
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
    zamjena(recenica, rijec, duzinaRecenice);
    
    cout << "Nakon izmjene: ";
    for(int i = 0; i < duzinaRecenice; i++)
      cout << recenica[i];


    system("pause>0");
    return 0;
    
}