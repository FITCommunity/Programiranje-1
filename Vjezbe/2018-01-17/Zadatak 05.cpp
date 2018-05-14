/*
  Neka je data matrica kompetencija studenata dimenzija 10x5, gdje svaki red matrice predstavlja 
  studenta, a svaka kolona matrice kompetenciju koju je potrebno evaluirati. Matrica sadrži podatke 
  o studentima sa dva studijska programa, prvih 5 redova za jedan i drugih 5 redova za drugi program. 
  Kompetencije se definišu putem sljedeće skale: 
  A (ekspert), 
  B (stručnjak), 
  C (zadovoljava), 
  D (djelimično zadovoljava) i 
  E (ne zadovoljava). 
  Napisati program koji će implementirati i testirati sljedeće funkcije:
  •evaluiraj – funkcija omogućava unos evaluacije za određenog (odabranog u glavnom programu) studenta 
   (unosi se samo jedan red matrice), na način da su dozvoljene samo vrijednosti usvojene prethodnom 
   skalom (A, B, C, D i E). U slučaju unosa bilo kojeg karaktera izvan ovog opsega, potrebno je ponoviti unos. 
   Prilikom unosa ispisati poruku za svaku kompetenciju na sljedeći način: „Unesite evaluaciju 
   za kompetenciju C1“, i tako redom za svaku kolonu.
  •najuspjesnija_kompetencija – funkcija pronalazi kompetenciju (u oba studijska programa) koja je 
   najuspješnija, odnosno na kojoj su studenti ostvarili najbolji rezultat, te vraća i prosječnu 
   ocjenu za tu kompetenciju. 
   Napomena: Pridružiti svakoj oznaci numeričku vrijednost, radi jednostavnosti kalkulacije i poređenja 
   uspjeha pojedinih kompetencija. Koristiti prosljeđivanje najmanje jednog parametra po referenci, 
   te ispis rezultata ne vršiti u funkciji.
  •najuspjesniji_student – funkcija pronalazi najuspješnijeg studenta u odabranom studijskom programu 
   (studijski program se bira u glavnom programu putem vrijednost 1 (prvih 5 redova) ili 2 (drugih 5 redova),
   te vraća i prosječnu ocjenu tog studenta. Vrijede iste napomene kao i za prethodnu funkciju.
  
  U glavnom programu testirati implementirane funkcije na način da se uz uspjeh kompetencije ili studenta 
  definiše opisna evaluacija (ekspert, stručnjak,...). Dodatno ispisati podatke o najuspješnijem studentu, 
  posmatrajući oba studijska programa. Ispis najsupješnije kompetencije ili studenta izvršiti sa oznakama 
  C ili S, uz redni broj kolone ili reda gdje se nalaze u matrici. 
  Npr. Najuspješniji student je S2 sa prosječnom ocjenom „stručnjak“.
*/

#include <iostream>
#include <ctime>
 
using namespace std;
 
const int red = 10;
const int kolona = 5;
 
void evaluiraj(char niz[], int student);
void najuspjesnija_kompetencija(char niz[][kolona], double &avg1, double &avg2);
int bodovi(char evaluacija);
int najuspjesniji_student(char niz[][kolona], int studij, int& najuspjesniji);
 
int main()
{
    char kompetencija[red][kolona] = {};
   
    int izbor,
        student,
        najuspjesniji = 0,
        studij,
        ocjena;
       
    double avg1 = 0,
           avg2 = 0;
           
    /* TEST */
    /*
    srand(time(NULL));
    for(int i = 0; i < red; i++)
        evaluiraj(kompetencija[i], i + 1);
    */    
   
    // if TEST
    // Pocni komentar
    do
    {
        do
        {
            cout << "Unesite broj studentka kojeg zelite evaluirati: " << endl;
            cin >> student;
       
        }while(student < 1 || student > 10);
   
        evaluiraj(kompetencija[student-1], student);
       
        cout << "Unesite 0 za izlaz" << endl;
        cin >> izbor;
       
    }while(izbor != 0);
   
    // Zavrsi komentar
   
    // Ispis
    /*
    for(int i = 0; i < red; i++)
    {
        for(int j = 0; j < kolona; j++)
            cout << kompetencija[i][j] << " ";
           
        cout << endl;
    }
    */
   
    najuspjesnija_kompetencija(kompetencija, avg1, avg2);
    cout << avg1 << " " << avg2 << endl;
   
    if(avg1 > avg2)
        cout << "Prvi studij ima vecu kompetenciju" << endl;
    else if(avg2 > avg1)
        cout << "Drugi studij ima vecu kompetenciju" << endl;
    else
        cout << "Oba studija imaju jednaku kompetenciju" << endl;
       
    do
    {
        cout << "Izaberite studij (1 ili 2): " << endl;
        cin >> studij;
       
    }while(studij != 1 && studij != 2);
   
    ocjena = najuspjesniji_student(kompetencija, studij, najuspjesniji);
   
   
 
    cout << "Najuspjesniji student u studiju " << studij << " je S" << najuspjesniji + 5 * (studij - 1) + 1 << " sa prosjecnom ocjenom ";
    switch(ocjena)
    {
        case 5:
            cout << "ekspert";
            break;
        case 4:
            cout << "strucnjak";
            break;
        case 3:
            cout << "zadovoljava";
            break;
        case 2:
            cout << "djelimicno zadovoljava";
            break;
        case 1:
            cout << "ne zadovoljava";
            break;
    }
}
 
int najuspjesniji_student(char niz[][kolona], int studij, int &najuspjesniji)
{
    double prosjek[5] = {};
    int suma = 0;
    int k = 0;
    // studij = 1 -> i = 0; i < 5
    // studij = 2 -> i = 5; i < 10
    // 5 * (studij - 1) do 5 * studij
    // za 1 -> 0 do 5
    // za 2 -> 5 do 10
    for(int i = 5 * (studij - 1); i < 5 * studij; i++)
    {
        suma = 0;
        for(int j = 0; j < kolona; j++)
        {
            suma += bodovi(niz[i][j]);
        }
       
        prosjek[k] = double(suma) / 5;
        k++;
    }
   
    najuspjesniji = 0;
    for(int i = 1; i < k; i++)
    {
        if(prosjek[najuspjesniji] < prosjek[i])
            najuspjesniji = i;
    }
   
    return prosjek[najuspjesniji] + 0.5;
   
}
 
void najuspjesnija_kompetencija(char niz[][kolona], double &avg1, double &avg2)
{
    int suma1 = 0,
        suma2 = 0,
        brojac1 = 0,
        brojac2 = 0;
       
   
    for(int i = 0; i < red; i++)
    {
        for(int j = 0; j < kolona; j++)
        {
            if(bodovi(niz[i][j]) != 0)
            {
                if(i < 5)
                {
                    suma1 += bodovi(niz[i][j]);
                    brojac1++;
                }
                else
                {
                    suma2 += bodovi(niz[i][j]);
                    brojac2++;
                }
            }
        }
    }
   
    if(suma1 > 0)
        avg1 = double(suma1) / brojac1;
    if(suma2 > 0)
        avg2 = double(suma2) / brojac2;
}
 
int bodovi(char evaluacija)
{
    switch(evaluacija)
    {
        case 'A':
            return 5;
        case 'B':
            return 4;
        case 'C':
            return 3;
        case 'D':
            return 2;
        case 'E':
            return 1;
        default:
            return 0;
    }
}
 
void evaluiraj(char niz[], int student)
{
    cout << "Unesite evaluaciju za kompetenciju S" << student << ": " << endl;
    /* TEST */
    /*
    int temp;
    for(int i = 0; i < kolona; i++)
    {
        temp = rand() % 5 + 1;
        // A(5) -> 65
        // B(4) -> 66
        // C(3) -> 67
        // D(2) -> 68
        // E(1) -> 69
        niz[i] = char(70 - temp);
    }
    */
   
    // if TEST
    // pocni komentar
    for(int i = 0; i < kolona; i++)
    {
        do
        {
            cin >> niz[i];
           
        }while(niz[i] != 'A' && niz[i] != 'B' && niz[i] != 'C' && niz[i] != 'D' && niz[i] != 'E');
    }
    // zavrsi komentar
}
