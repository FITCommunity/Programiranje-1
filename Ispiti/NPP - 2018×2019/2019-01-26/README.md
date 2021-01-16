# Grupa A

# [Zadatak 01](./Grupa%20A%20-%20Zadatak%2001.cpp)

Napisati program u kojem je potrebno unijeti odabrani broj cifara počevši od cifre najveće težinske vrijednosti, pa od njih sastaviti i ispisati prirodni broj. Unos cifara se prekida kada se unese broj manji od 0 ili veći od 9. Ispis neka bude oblika:
```
Upisi cifru: 2
Upisi cifru: 8
Upisi cifru: -1
Broj sastavljen od zadanih cifara je 28.
```

# [Zadatak 02](./Grupa%20A%20-%20Zadatak%2002.cpp)

Napisati program koji će omogućiti korisniku unos broja n (uz uslov 10 <= n <= 1000). Zatim
simulirati unos n slučajnih vrijednosti. Simuliranje unosa ostvariti funkcijom rand() % 1000 + 1. Izračunati statističke podatke u kojem procentu se od n generisanih slučajnih vrijednosti pojavljuje prost broj.

Npr. Ako je generisano 10 brojeva (n = 10): 5,7,4,13,17,20,25,23,30,45, u ovom uzorku od 10 brojeva postoji 5 prostih brojeva pa je procenat prostih brojeva u ovom slučaju 50%.


# [Zadatak 03](./Grupa%20A%20-%20Zadatak%2003.cpp)

Napisati program koji će omogućiti korisniku da unese veličinu jednodimenzionalnog dinamičkog niza integer vrijednosti. Napisati rekurzivnu funkciju koja će taj niz popuniti serijom brojeva 2, 4, 8, 16, 32, 64, 128, 256, 512, itd., tako da je svaki sljedeći broj jednak prethodnom pomnoženom sa 2, počevši od broja 2. Rekurzija se prekida kada se popuni cijeli niz ili kada se desi overflow na integer varijabli. U ovom zadatku je zabranjeno indeksirati niz uglastim zagradama. Obavezno koristiti aritmetiku pokazivača.

# [Zadatak 04](./Grupa%20A%20-%20Zadatak%2004.cpp)

Kreirati dinamički dvodimenzionalni niz čiji su elementi objekti tipa uposlenik (uposlenik je struktura čija su obilježja data). Omogućiti korisniku da unese dimenzije niza.
```cpp
struct uposlenik
{
    char *ID;
    char *imePrezime;
    float *plata;
}
```
Redovi dvodimenzionalnog niza predstavljaju različite odjele firme u kojima rade različiti radnici (radi jednostavnosti rješenja podrazumijevati da svaki odjel ima isti broj radnika). Omogućiti korisniku unos svih podataka za sve radnike, te napraviti funkciju koja će naći najveći prosjek plate po odjelima firme te ispisati koji je to redni broj odjela (indeks reda sa najvećim prosjekom) i koji je najveći prosjek plate.

# Grupa B

# [Zadatak 01](./Grupa%20B%20-%20Zadatak%2001.cpp)

Napisati program koji korisniku omogućava unos realnog broja x i odabir funkcije za proračun datog izraza. Korisnik bira funkciju unosom jednog od sljedećih karaktera: 's' (sin), 'c' (cos). U slučaju da korisnik unese karakter koji ne odgovara niti jednoj od predefinisanih vrijednosti ispisati odgovarajuću poruku i ponoviti odabir. Za određenu funkciju sin() izraz je:  
![f(x) = 1 + [1/(sin(x) + x)] + [2/(sin(x/2) + x)] + ... + [x/(sin(x/x) + x)]](https://latex.codecogs.com/gif.latex?f%28x%29%20%3D%201%20&plus;%20%5Cfrac%7B1%7D%7B%5Csin%28x%29%20&plus;%20x%7D%20&plus;%20%5Cfrac%7B2%7D%7B%5Csin%28%5Cfrac%7Bx%7D%7B2%7D%29%20&plus;%20x%7D%20&plus;%20...%20&plus;%20%5Cfrac%7Bn%7D%7B%5Csin%28%5Cfrac%7Bx%7D%7Bx%7D%29%20&plus;%20x%7D)

# [Zadatak 02](./Grupa%20B%20-%20Zadatak%2002.cpp)

Napisati program koji omogućava korisniku unos integer vrijednosti veće od 100.
Napisati funckiju koja će provjeriti da li je uneseni broj u isto vrijeme i prost i "palindrom", odnosno da li je isti broj i kada se obrnnu sve cifre. Po potrebi koristiti dodatne funkcije.
Npr. brojevi 383, 727, 757, 787, 797, 919, 929 su u isto vrijeme i prosti brojevi i "palindromi".

# [Zadatak 03](./Grupa%20B%20-%20Zadatak%2003.cpp)

Napisati program koji će omogućiti korisniku da unese veličinu jednodimenzionalnog dinamičkog niza integer vrijednosti. Napisati funkciju koja će taj niz popuniti serijom Fibonacci brojeva počevši od broja 1. Za pronalazenje elemenata Fibonacci serije obavezno koristiti rekurzivnu funkciju. Punjenje niza se prekida kada se popuni cijeli niz ili kada se desi overflow na integer varijabli. U ovom zadatku je zabranjeno indeksirati niz uglastim zagradama. Obavezno koristiti aritmetiku pokazivača.

# [Zadatak 04](./Grupa%20B%20-%20Zadatak%2004.cpp)

Kreirati dvodimenzionalni dinamički niz čiji su elementi objekti tipa figura (figura je struktura čija su obilježja data u nastavku). Omogućiti korisniku da unese dimenzije niza, te omogućiti unos elemenata.
```cpp
struct figura
{
    int ID
    char *nazivFigure;
    float *visinaFigure;
}
```
Potrebno je napisati funkciju koja će računati prosječnu visinu svih figura koje se nalaze na crnim poljima ispod sporedne dijagonale. Funkcija treba vratiti pokazivač
na memorijsku lokaciju u kojoj je upisana ta vrijednost.
```
    C - Crna
    B - Bijela
```
```   
    +-----+-----+-----+-----+-----+-----+-----+-----+
    | C00 | B01 | C02 | B03 | C04 | B05 | C06 | B07 |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    | B10 | C11 | B12 | C13 | B14 | C15 | B16 | C17 |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    | C20 | B21 | C22 | B23 | C24 | B25 | C26 | B27 |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    | B30 | C31 | B32 | C33 | B34 | C35 | B36 | C37 |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    | C40 | B41 | C42 | B43 | C44 | B45 | C46 | B47 |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    | B50 | C51 | B52 | C53 | B54 | C55 | B56 | C57 |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    | C60 | B61 | C62 | B63 | C64 | B65 | C66 | B67 |
    +-----+-----+-----+-----+-----+-----+-----+-----+
    | B70 | C71 | B72 | C73 | B74 | C75 | B76 | C77 |
    +-----+-----+-----+-----+-----+-----+-----+-----+
```

