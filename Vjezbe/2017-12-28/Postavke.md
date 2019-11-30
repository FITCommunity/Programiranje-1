# [Zadatak 01](./Zadatak%2001.cpp)

Napišite program poštujući sve faze procesa programiranja u kojem se od korisnika traži unos tri broja. Program treba ispisati najveću i najmanju od unesenih vrijednosti. Za pronalaženje najmanjeg i najvećeg broja upotrijebite funkcije najmanji i najveći čiji su prototipovi dati u nastavku:
```cpp
float najmanji(float, float, float);
float najveci(float, float, float);
```
  
Prilikom pisanja definicija funkcija najveći i najmanji upotrebite i funkcije min i max koje vraćaju manji/veći od dva broja, a čiji prototipovi su dati u nastavku: 
```cpp
float min(float, float);
float max(float, float);
```

# [Zadatak 02](./Zadatak%2002.cpp)

Napišite program, poštujući sve faze procesa programiranja, kojim ćete simulirati usluge koje Telecom operater nudi prepaid korisnicima (odnosno vlasnicima Ultra, Hej i sličnih paketa). Dakle, korisnik paketa mora biti u mogućnosti pristupiti sljedećim uslugama:
* Pristupiti izborniku usluga pomoću svog broja 
* Provjeriti stanje 
* Dopuniti 
* Poslati dugom korisniku dio svog 
* Završiti (okončati) izbor.
Za svaku od aktivnosti definirajte zasebnu funkciju:
```cpp
void meni(); //funkcija ispisuje sadržaj izbornika
bool ProvjeraBroja(int); //funkcija provjerava je li broj s kojeg se traži pristup izborniku validan
void Dopuna(double &); //funkcija omogućava dopunu kredita
void Slanje(double &, double); //funkcija omogućava slanje dijela kredita drugom korisniku
```
Sve dok korisnik ne izabere zadnju opciju (završi), nakon obavljene aktivnosti vratite ga na izbornik da odabere novu aktivnost.

# [Zadatak 03](./Zadatak%2003.cpp)

Napišite program poštujući sve faze procesa programiranja u kojem ćete omogućiti:
* unos elemenata dva niza od po 9 znakova pomoću funkcije: void unos (char [], int);
* uz pomoć funkcije `int slova(char [], char [], int);` izračunati i vratiti ukupan broj slova (bez obzira na to jesu li slova mala ili velika) u oba niza;
* uz pomoć funkcije: `int vokali(char [], int);` prebrojati koliko među elementima prvog niza ima samoglasnika (vokala).

# [Zadatak 04](./Zadatak%2004.cpp)

Napišite program u kojem ćete kreirati matricu 5 x 5, te napišite i pozovite sljedeće funkcije:
* funkciju koja će inicijalizirati matricu da izgleda 

    | 0 | 1 | 1 | 1 | 1 |
    | --- | --- | --- | --- | --- |
    | __1__ | __0__ | __1__ | __1__ | __1__ |
    | __1__ | __1__ | __0__ | __1__ | __1__ |
    | __1__ | __1__ | __1__ | __0__ | __1__ |
    | __1__ | __1__ | __1__ | __1__ | __0__ |
* funkciju koja će izračunati sumu elemenata na sporednoj dijagonali;
* funkciju koja će promijeniti vrijednosti elemenata matrice tako da nakon poziva funkcije matrica izgleda ovako:

    | 1 | 0 | 0 | 0 | 0 |
    | --- | --- | --- | --- | --- |
    | __0__ | __1__ | __0__ | __0__ | __0__ |
    | __0__ | __0__ | __1__ | __0__ | __0__ |
    | __0__ | __0__ | __0__ | __1__ | __0__ |
    | __0__ | __0__ | __0__ | __0__ | __1__ |

Broj i vrstu parametara, kao i povratne vrijednosti funkcija odredite sami.

# [Zadatak 05](./Zadatak%2005.cpp)

Napišite program koja provjerava je li vaš Bingo listić sadrži dobitnu kombinaciju brojeva. Dobitna kombinacija sadrži 15 brojeva (5 brojeva raspoređenih u tri retka), a Bingo listić sadrži tri kombinacije od po 15 brojeva. Koristite funkcije i nizove. Predvidite i manje dobitke, "peterce“ (svi brojevi u istom redu) i "deseterce" (svi brojevi u dva reda).

# [Zadatak 06](./Zadatak%2006.cpp)

Napišite program u kojem ćete omogućiti unos šesteroznamenkastog prirodnog broja i kreiranje niza od 6 cjelobrojnih elemenata. 
* definirati i upotrijebiti funkciju `void inicijaliziraj(int[], int, int);` koja će elemente niza inicijalizirate tako da svakom od elemenata niza dodijeli po jednu znamenku unesenog šesteroznamenkastog prirodnog 
* definirati i upotrijebiti funkciju `float aritmeticka(int [], int);` koja će izračunati aritmetičku sredinu (prosječnu vrijednost) elemenata niza;
* definirati i upotrijebiti funkciju `int pronaci(int [], int, float);` koja treba pronaćii vratiti element niza koji je po svojoj vrijednosti najbliži prethodno izračunatoj aritmetičkoj sredini;
    
Ispis aritmetičke sredine i elementa koji je po svojoj vrijednosti najbliži aritmetičkoj sredini vršiti u funkciji main.

# [Zadatak 07](./Zadatak%2007.cpp)

Napišite program koji će omogućiti kreiranje matrice 4x4. Uz pomoć:
* funkcije: `void unos(int[][4]);` omogućite unos samo parnih elemenata u matricu;
* funkcije: `void zamijeniR(int[][4], int, int);` zamijeniti mjesta izabranim recima; izbor redaka vrši korisnik;
* funkcije: `float avrgd(int[][4]);` izračunati prosječnu vrijednost elemenata iznad glavne dijagonale; 
Ispis prosječne vrijednosti elemenata iznad glavne dijagonale kao i izbor redaka matrice za zamjenu vršite u funkciji main.

# [Zadatak 08](./Zadatak%2008.cpp)

Napišite program koji će omogućiti kreiranje matrice prirodnih brojeva 2x3. 
Pretpostavka je da postoji funkcija koja omogućava unos prirodnih brojeva (ne treba ju definirati); 
Kreirajte funkcije:
* `void kopiraj(int[][3], int [][5]);` zadaća funkcije da kopira sve elemente iz 
jedne  matrice  (2x3)  u  drugu  matricu  (2x5)  pri  čemu  se  prve  dvije  kolone
prve matrice kopiraju dva puta; Npr.

    | 1 | 2 | 3 |
    | --- | --- | --- |
    | __4__ | __5__ | __6__ |
    
    | 1 | 2 | 3 | 1 | 2 |
    | --- | --- | --- | --- | --- |
    | __4__ | __5__ | __6__ | __4__ | __5__ |
                
* funkcije:  `int  suma(int  [],  int);`  čija  je  zadaća  izralunati  sumu  retka kojeg izabere korisnik za matricu koju izabere korisnik; obavezno onemogućiti korisniku da izabere nepostojeću matricu i nepostojeći redak;
    
Ispis sume i izbor matrice i retka vršite u funkciji main.

# [Zadatak 09](./Zadatak%2009.cpp)

Napišite program, poštujući sve faze procesa programiranja, za rezervaciju autobusnih karata. U autobusu je 20 sjedišta. Korisnik ima pravo birati želi li sjedište do prozora ili do prolaza (sjedišta do prozora označena sa x).
   
   | x |   |   | x |
   | --- | --- | --- | --- |
   | __x__ |   |   | __x__ |
   | __x__ |   |   | __x__ |
   | __x__ |   |   | __x__ |
   | __x__ |   |   | __x__ |

Kreirajte funkcije za: 
* rezervaciju sjedišta, 
* otkazivanje rezervacije sjedišta
* provjeru je li neko sjedište slobodno, 
* ispis slobodnih i zauzetih sjedišta. 

Po potrebi kreirajte i dodatne funkcije. 