# [Zadatak 01](./Zadatak%2001.cpp)

Napisati program u kojem je potrebno unijeti odabrani broj cifara počevši od cifre najveće težinske vrijednosti, pa od njih sastaviti i ispisati prirodni broj. Unos cifara se prekida kada se unese broj manji od 0, ukoliko korisnik unese cifru vecu od 9, ispisati poruku da cifra nije validna, ali se unos ne prekida. (Obavezno koristiti bar jednu korisnički definisanu funkciju).

Ispis neka bude oblika:
```
Upisi cifru: 2
Upisi cifru: 8
Upisi cifru: 72
Cifra nije validna
Upisi cifru: -1
Broj sastavljen od zadanih cifara je 28.
```

# [Zadatak 02](./Zadatak%2002.cpp)

Svaki paran broj se može prikazati kao suma dva prosta broja (tkz. Goldbachovo pravilo). Napisati program koji će najprije učitati dva prirodna broja n1 i n2 (n2 > n1). Zatim prikazati sve parne brojeve u intervalu od n1 do n2 kao sumu dva prosta broja. U glavnom programu samo unijeti navedena dva prirodna broja i pozvati funkciju koja obavlja zadani posao.

# [Zadatak 03](./Zadatak%2003.cpp)

Napisati program koji će omogućiti korisniku da unese veličinu n jednodimenzionalnog  dinamičkog niza integer vrijednosti (n > 2). Napisati rekurzivnu funkciju koja će taj niz puniti serijom brojeva 1, 3, 3, 9, 27, ..., tako da je svaki slijedeći broj jednak umnosku dva prethodna broja (Prva dva elementa su 1 i 3.) Rekurzija se prekida kad se popuni cijeli niz ili kad se desi overflow na integer varijabli. Zatim napraviti drugu rekurzivnu funkciju koja će izračunati zbir svih elemenata tog niza (Voditi računa o tipu podataka zbog veličine broja). U ovom zadatku je zabranjeno indexirati elemente niza uglastim zagradama. Obavezno koristiti aritmetiku pokazivača.


# [Zadatak 04](./Zadatak%2004.cpp)

Kreirati dinamički dvodimenzionalni niz čiji su elementi objekti tipa vozilo (vozilo je struktura čija su obilježja data u nastavku). Omogućiti korisniku da unese dimenzije niza.

```cpp
struct vozilo
{
    char *markaVozila;
    char *brojSasije;
    char *tipVozila; //dozvoliti unos samo vrijednosti "A", "B", ili "C"
    int *kubnihCM;
};
```
Redovi dvodimenzionalnog niza predstavljaju različite firme a u kolone različita vozila u tim firmama. (radi jednostavnosti rješenja podrazumijevati da svaka firma ima isti broj vozila). Omogućiti korisniku unos svih podataka za sva vozila. Napisati i testirati funkciju koja će pronaći firmu koja ima največu prosječnu kubikazu vozila (prosjek vrijednosti kubnihCM). Zatim napisati i testirati funkciju koja će pronaći i ispisati porosječnu kubikažu vozila (prosjek vrijednosti kubnihCM) svih vozila tipova "A" te posebno svih vozila tipa "B" u cijeloj matrici (Pošto se trazi u istoj funkciji, vodite računa o optimizaciji petlji jer to utiče na broj bodova). U ovom zadatku je zabranjeno indexirati elemente niza uglastim zagradama. Obavezno koristiti aritmetiku pokazivača.