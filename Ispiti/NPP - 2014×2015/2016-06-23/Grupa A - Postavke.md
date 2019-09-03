# Zadatak 01

Napišite program, poštujući sve faze procesa programiranja, u kojem ćete za uneseni prirodni broj n (prirodni brojevi: 1, 2, 3, ….. )  izračunati umnožak:
![S = (1 kroz korijen iz 2 puta 1 kroz korijen iz 2 plus korijen iz dva ..... )](https://latex.codecogs.com/gif.latex?S%20%3D%20%5Cfrac%7B1%7D%7B%5Csqrt%7B2%20*%20%5Cfrac%7B1%7D%7B%5Csqrt%7B2%20&plus;%20%5Csqrt%7B2%7D%20*%20...%7D%7D%7D%7D)
Kod posljednjeg faktora kvadratni korijen je primijenjen n puta.

Upotrijebite funkciju:
```cpp
double umnozak (int);
```

# Zadatak 02

Napišite program koji će omogućiti kreiranje matrice prirodnih brojeva 2x3. Pretpostavka je da postoji funkcija koja omogućava unos prirodnih brojeva (ne treba ju definirati); Kreirajte funkcije:
* `void kopiraj(int[][3], int [][5]);` zadaća funkcije da kopira sve elemente iz jedne matrice (2x3) u drugu matricu (2x5) pri čemu se prve dvije kolone prve matrice kopiraju dva puta;
* funkcije: `int suma(int [], int);` čija je zadaća izračunati sumu retka kojeg izabere korisnik za matricu koju izabere korisnik; obavezno onemogućiti korisnika da izabere nepostojeću matricu i nepostojeći redak;
 
Ispis sume i izbor matrice i retka vršite u funkciji main.

# Zadatal 03

Napišite programu kojem ćete omogućiti provjeru i ispisati sve parove prijateljskih brojeva u intervalu od 1 do 1000. Prirodni brojevi a i b čine prijateljski par brojeva ako je zbir pravih djelitelja broja a (onih koji su manji od a) jednak broju b i istovremeno zbir pravih djelitelja broja b jednak je broju a.
Npr. Brojevi 220 i 284 su prijateljski brojevi.
Pravi djelitelji broja 220 su: 1, 2, 4, 5, 10, 11, 20, 22, 55, 110, a njihova suma iznosi 284;
Pravi djelitelji broja 284 su: 1, 2, 4, 71,  142 a njihova suma iznosi 220.
 
Upotrijebite funkcije:
```cpp
int suma_pravih_djelitelja (int);
bool provjera (int, int);
```

# Zadatak 04

Napišite program u kojem ćete omogućiti kreiranje niza od 6 cjelobrojnih elemenata. 
Pretpostavka je da postoji funkcija koja omogućava unos brojeva u niz (ne treba ju definirati);
* definirati i upotrijebiti funkciju `void pronaci(int[], int);` koja će pronaći i ispisati dva najveća elementa u nizu;
* definirati i upotrijebiti funkciju `float suma(int [], int);` koja će izračunati sumu recipročnih vrijednosti elemenata niza;
* definirati i upotrijebiti funkciju `int prebroji(int [], int)` koja treba ispisati sve pozitivne elemente niza i njihove indekse, te prebrojati koliko takvih elemenata ima;

Ispis sume recipročnih vrijednosti i broja pozitivnih elemenata vršiti u funkciji main.