# [Zadatak 01](./Grupa%20B%20-%20Zadatak%2001.cpp)

Napišite program, poštujući sve faze procesa programiranja, u kojem ćete za uneseni prirodni broj n izračunati sumu:   ![S=3!-6!+9! -....+(-1)n+1(3n)!](https://latex.codecogs.com/gif.latex?S%3D3%21-6%21&plus;9%21%20-....&plus;%28-1%29%20*%20n&plus;1*%283n%29%21)

Upotrijebite funkcije:
```cpp
int faktorijel(int);
int suma(int);
```

# [Zadatak 02](./Grupa%20B%20-%20Zadatak%2002.cpp)

Napišite program koji će omogućiti kreiranje matrice negativnih brojeva 5 x 5. Uz pomoć funkcije:
* `void unos (int [][5]);` omogućite unos elemenata matrice; vodite računa da svi elementi matrice moraju biti negativni brojevi;
* `bool pozicija(int[][5], int &);` pronaći prvi redak koji sadrži vrijednost -7; u slučaju da u matrici nema vrijednosti -7 funkcija treba vratiti vrijednost false, a program treba ispisati odgovarajuću poruku;
* `float prosjecna(int [][5], int);` izračunati prosječnu vrijednost u retku za koji ste prethodnom funkcijom utvrdili da sadrži vrijednost -7; u slučaju da ste prethodnom funkcijom ustanovili da u matrici nema broja -7 funkciju ne treba pozivati.
 
Ispis prvog retka koji sadrži vrijednost -7, prosječne vrijednosti u tom retku kao i zahtijevanih poruka vršite u funkciji main.

# [Zadatak 03](./Grupa%20B%20-%20Zadatak%2003.cpp)

Napišite program koji omogućava da se ispišu svi brojevi koji zadovoljavaju uvjet da im je zapis jednak zapisu posljednjih znamenki njihovog kvadrata. (Npr. ![6^2=36, 25^2=625](https://latex.codecogs.com/gif.latex?6%20%5E%202%20%3D%2036%2C%2025%20%5E%202%20%3D%20625) … ) 
Provjeru vršiti za prvih 150 prirodnih brojeva.
```cpp
Upotrijebite funkciju:
bool provjera (int);
```

# [Zadatak 04](./Grupa%20B%20-%20Zadatak%2004.cpp)

Napišite program u kojem ćete :
* omogućiti unos niza od 6 realnih brojeva u intervalu od -7.0 do +7.0 pomoću funkcije: `void unos (float [], int);`
* definirati i upotrijebiti funkciju `int najvecineg(float [], int);` koja će pronaći i vratiti poziciju najvećeg negativnog elementa u nizu; (Moguće je da u nizu uopće ne bude negativnih brojeva – ispisati odgovarajuću poruku.)
* definirati i upotrijebiti funkciju `float suman(float[], int);` koja treba izračunati i vratiti sumu negativnih elemenata niza; (Moguće je da u nizu uopće ne bude negativnih brojeva.)

Ispis pozicije najvećeg negativnog elementa, sume negativnih elemenata kao i odgovarajućih poruka vršite u funkciji main.
