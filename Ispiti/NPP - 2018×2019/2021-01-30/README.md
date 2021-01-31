# Grupa A

# [Zadatak 01](./Grupa%20A%20-%20Zadatak%2001.cpp)

Napisati program koji korisniku omogućava unos realnog broja x i odabir funkcije za proračun datog izraza. Korisnik bira funkciju unosom sljedećih karaktera 's' (sin), 'c' (cos). U slučaju da korisnik unese karakter koji ne odgovara niti jednoj od predefinisanih vrijednosti ispisati odgovarajuću poruku i ponoviti odabir.

Za odabranu funkciju sin izraz je:  
![](https://latex.codecogs.com/gif.latex?f%28x%2C%20m%29%20%3D%201%20&plus;%20%5Cfrac%7B1%7D%7B%5Csin%28x%29%20&plus;%20x%7D%20&plus;%20%5Cfrac%7B2%7D%7B%5Csin%28%5Cfrac%7Bx%7D%7B2%7D%29%20&plus;%20x%7D%20&plus;%20...%20&plus;%20%5Cfrac%7Bm%7D%7B%5Csin%28%5Cfrac%7Bx%7D%7Bm%7D%29%20&plus;%20x%7D)  


# [Zadatak 02](./Grupa%20A%20-%20Zadatak%2002.cpp)

Napisati program koji simulira bacanje 3 kockice (jedna kockica ima 6 strana i na tim stranama su brojevi 1 - 6). Simuliranje bacanja svake kockice ostvariti funkcijom rand() % 6 + 1. Simulirati konstantno bacanje sve tri kockice dok se u dva uzastopna bacanja ne desi da se dobiju isti brojevi na sve tri kockice (npr. u šestom bacanju se dobiju brojevi 2, 2, 2 a u sedmom 4,4,4 na sve tri kockice). Ispisati koliko je ukupno bilo bacanja dok se nije ispunio navedeni uslov. Nije potrebno tražiti bilo kakav unos od korisnika.

# [Zadatak 03](./Grupa%20A%20-%20Zadatak%2003.cpp)

Napisati program koji će omogućiti korisniku da unese veličinu jednodimenzionalnog dinamičkog niza integer vrijednosti. Napisati rekurzivnu funkciju koja će taj niz popuniti serijom brojeva 2, 4, 8, 16, 32, 64, 128, 256, 512, itd., tako da je svaki sljedeći broj jednak prethodnom pomnoženom sa 2, počevši od broja 2. Rekurzija se prekida kada se popuni cijeli niz ili kada se desi overflow na integer varijabli. U ovom zadatku je zabranjeno indeksirati niz uglastim zagradama. Obavezno koristiti aritmetiku pokazivača.

# [Zadatak 04](./Grupa%20A%20-%20Zadatak%2004.cpp)

Kreirati dinamički dvodimenzionalni niz čiji su elementi objekti tipa student (student je struktura čija su obilježja data u nastavku). Omogućiti korisniku da unese dimenzije niza.

```cpp
struct student
{
    char *ID;
    char *imePrezime;
    float *prosjek;
};
```
Kompletan 2D niz predstavlja univerzitet. Redovi dvodimenzionalnog niza predstavljaju različite fakultete (radi jednostavnosti rješenja podrazumijevati da svaki fakultet ima isti broj studenata). Omogućiti korisniku unos svih podataka za sve studente, te napraviti funkciju koja će pronaći fakultet sa najvećim prosjekom te ispisati koji je to redni broj fakulteta (index reda sa najvećim prosjekom). Zatim pronaći i ispisati ID studenta koji ima najveći prosjek na cijelom univerzitetu. U ovom zadatku je zabranjeno indexirati elemente niza uglastim zagradama. Obavezno koristiti aritmetiku pokazivača. Obavezno voditi računa o dealociranju dinamički alociranje memorije.

# Grupa B

