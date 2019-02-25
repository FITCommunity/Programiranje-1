# Zadatak 01

Napisati program koji učitava prirodan broj n. Program treba ispisati najmanji prirodan broj m, veći ili jednak n, koji je potencija nekog prirodnog broja, tj. ![m = k ^ l](https://latex.codecogs.com/gif.latex?m%20%3D%20k%20%5E%20l), gdje su k i l prirodni brojevi >= 2.

# Zadatak 02

Napisati program koji će omogućiti korisniku unos broja n ( 10 <= n <= 1000). Zatim simulirati n bacanja kockice (kockica ima 6 strana i na tim stranicama su brojevi 1-6). Simuliranje bacanja svake kockice ostvariti funkcijom rand() % 6 + 1. Izračunati statičke podatke u kojem procentu ukupnog bacanja se dobiva svaki od mogućih brojeva 1-6. Obavezno koristiti switch statement za zbrajanje rezultata bacanja kockice.
  
Napomena: Po želji kreirati dodatne funkcije da se olakša rješavanje zadataka.

# Zadatak 03

Napisati program koji će omogućiti korisniku da unese veličinu jednodimenzionalnog dinamičkog niza integer vrijednosti. Napisati rekurzivnu funkciju koja će taj niz popuniti faktorijelom rednog broja člana niza (1!, 2!, 3!, 4!...). Rekurzija se prekida kada se popuni cijeli niz ili kada se desi overflow na integer varijabli. U ovom zadatku je zabranjeno indeksirati elemente niza uglastim zagradama. Obavezno koristiti aritmetiku pokazivača. Obavezno sve riješiti jednom rekurzivnom funkcijom.

# Zadatak 04

Kreirati dinamički dvodimenzionalni niz čiji su elementi objekti tipa košarkaš (košarkaš je struktura čija su obilježja data u nastavku). Omogućiti korisniku da unese dimenzije niza.
```cpp
struct kosarkas
{
    char *ID;
    char *imePrezime;
    int *postignutiKosevi;
};
```
Redovi dvodimenzionalnog niza predstavljaju različite košarkaše a kolone različite klubove. Omogućiti korisniku unos svih podataka za sve košarkaše, te napraviti funkciju koja će pronaći najuspješniji klub (klub u kojem je postignut najveći broj koševa). Također je potrebno pronači najuspješnijeg košarkaša u tom timu (ne mora biti najuspješniji u ligi) i najlošijeg košarkaša u kompletnoj ligi te izračunati razliku u broju postignutih koševa te dva košarkaša. Funkcija treba vratiti pokazivač na memorijsku lokaciju u kojoj je upisana ta razlika.