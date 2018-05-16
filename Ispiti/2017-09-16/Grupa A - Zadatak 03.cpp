/*
   Napisati funkciju koja kao parametare prima dva niza char recenica[200] i char rijec[10] 
   odnosno reèenicu (niz od najviše 200 karaktera) i rijeè (niz od najviše 10 karaktera) 
   te u nizu recenica[200] pretrazuje i pronalazi sekvencu karaktera unesenih u niz rijec[10]. 
   Radi jednostavnosti rjesenja podrazumjeva se da i recenica i rijec koja se pretrazuje zavrsavaju tackom.
   Poslije pronalaska trazene rijeci, pomenutu rijec treba zamijeniti karakterima „FIT“ 
   (Pomoc: Treba voditi racuna koliko karaktera ima rijec koja je pronadjena i zamjenjena)
   
   Npr. ako je data reèenica u nizu recenica[200]:
   "Ja studiram na fakultetu jer zelim biti expert." i rijec[10]: "fakultet“,
   funkcija je treba pronaci rijec „fakultet“ u recenici i pretvoriti je u "FIT“:
   "Ja studiram na FITu jer zelim biti expert." (ima ukupno manje slova a zadrzan je samo 
   po jedan space izmedju rijeci). 
   
   Obavezno u main funkciji omoguciti unos recenice, zatim trazene rijeci i ispisati novu recenicu poslije zamjene.
 */

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