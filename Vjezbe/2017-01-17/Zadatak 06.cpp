/*
  Napisati program koji æe korisniku omoguæiti unos pozitivnih neparnih cijelih      
  brojeva za koje će se ispitivati da li im je prva cifra parna (npr. 4993 ili 4999).    
  Ukoliko je zadovoljen uslov broj se smješta u niz od 10 elemenata. 
  Unos se ponavlja dok se ne popuni niz od 10 elemenata koji zadovoljavaju uslov     
  unosa. Unos se prekida ukoliko korisnik unese vrijednost 0 te se i 
  izvršenje program završava uz poruku „Forsirani prekid“. Zatim se za sve 
  elementi niza ispituje da li je broj prost i da li ima samo jednu parnu cifru. 
  Ako broj nije prost i ako ima više od jedne parne cifre, broj se izbacuje 
  iz niza tako što se njegova vrijednost mijenja sa 0. Na kraju niz sortirati od     
  najveæeg ka najmanjem broju te ga ispisati. Koristiti odvojene funkcije za 
  provjeru da li je broj prost, za sortiranje i ispis niza. 
*/

#include <iostream>
#include <cmath>

using namespace std;

void unos(int niz[], int &duzina);
void ispis(int niz[], int duzina);
void sortiraj(int niz[], int duzina);
void ukloni(int niz[], int duzina);
int brParnihCifri(int broj);
int brojCifri(int broj);
bool prostBroj(int broj);
bool prvaCifraParna(int broj);

int main()
{
    int niz[10], duzina = 0;
    
    unos(niz, duzina);
    ukloni(niz, duzina);
    sortiraj(niz, duzina);
    ispis(niz, duzina);
    
    return 0;
    
}

void sortiraj(int niz[], int duzina)
{
    int temp;
    for(int i = 0; i < duzina; i++)
    {
        for(int j = i + 1; j < duzina; j++)
        {
            if(niz[i] > niz[j])
            {
                temp = niz[j];
                niz[j] = niz[i];
                niz[i] = temp;
            }
        }
    }
}
void ispis(int niz[], int duzina)
{
    for(int i = 0; i < duzina; i++)
        cout << niz[i] << " ";
}

void ukloni(int niz[], int duzina)
{
    for(int i = 0; i < duzina; i++)
    {
        if(!prostBroj(niz[i]) && brParnihCifri(niz[i]) > 1)
            niz[i] = 0;
    }
}

int brParnihCifri(int broj)
{
    int parne = 0;
    int cifra;
    
    while(broj > 0)
    {
        cifra = broj % 10;
        if(cifra % 2 == 0)
            parne++;
            
        broj /= 10;
    }
    
    return parne;
}

bool prostBroj(int broj)
{
    for(int i =  2; i < broj; i++)
        if(broj % i == 0)
            return false;
            
    return true;
}

int brojCifri(int broj)
{
    int brojac = 0;
    while(broj > 0)
    {
        broj /= 10;
        brojac++;
    }
    
    return brojac;
}

bool prvaCifraParna(int broj)
{
    int duzina = brojCifri(broj);
    int temp = pow(10, duzina - 1);
    broj = broj / temp;
    
    return broj % 2 == 0;
}

void unos(int niz[], int &duzina)
{
    int temp;
    
    do
    {
        do
        {
            cout << "Unesite " << duzina + 1 << ". neparan broj: " << endl;
            cin >> temp;
            
        }while((temp % 2 == 0 || temp < 0) && temp != 0);
        

        if(temp == 0)
        {
            cout << "Forsiran prekid!" << endl;
            break;
        }
        
        
        if(prvaCifraParna(temp))
        {
            niz[duzina] = temp;
            duzina++;
        }
        
        
    }while(duzina < 10);
}
