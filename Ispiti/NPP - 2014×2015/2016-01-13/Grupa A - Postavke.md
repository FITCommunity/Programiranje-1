# [Zadatak 01](../Grupa A - Zadatak 01.cpp)

Napišite program, poštujući sve faze procesa programiranja, koji će ispisati sve troznamenkaste brojeve koji su jednaki sumi faktorijela svojih znamenki – ABC = A! + B! + C!
Upotrijebite funkcije:
```cpp
bool provjera(int);
int faktorijel(int);
```

# [Zadatak 02](../Grupa A - Zadatak 02.cpp)

Napišite program u kojem ćete deklarirati matricu 5x4. Redak u matrici je učenik, a kolona predmet. Uz pomoć funkcije:
* `void unos (int [] [4]);` omogućite unos samo prolaznih ocjena (2-5) za sve učenike;
* `float prosjek(int []);` izračunati prosječnu ocjenu učenika; za kojeg od učenika će se računati prosjek bira korisnik;
* `int prebroji (int [][4], int);` prebrojati koliko učenika ima ocjenu 4 i više na predmetu po izboru korisnika.

# [Zadatak 03](../Grupa A - Zadatak 03.cpp)

Napišite program u kojem ćete omogućiti unos prirodnog broja. Provjerite je li broj trivijalan (prost) uz pomoć funkcije: `bool trivijalan (int);`.
U slučaju da broj nije trivijalan (prost) odredite i ispište sve njegove djelitelje uz pomoć funkcije: `void djelitelji(int);`

# [Zadatak 04](../Grupa A - Zadatak 04.cpp)

Napišite program u kojem ćete kreirati tri cjelobrojna niza i  to – prvi niz od 3 elementa, drugi niz od 4 elementa i treći niz od 7 elemenata. Uz pomoć funkcije:
* `void unos (int [], int);` omogućite unos elemenata u prvi i drugi niz;
* `void inicijalizacija (int [], int[], int []);` omogućite inicijalizaciju elemenata trećeg niza tako što ćete kopirati sve elemente prvog i drugog niza u treći;
* `int sumiraj (int [], int);` koja će omogućiti sumiranje svih elementa niza; korisnik bira niz čije elemente treba sumirati;