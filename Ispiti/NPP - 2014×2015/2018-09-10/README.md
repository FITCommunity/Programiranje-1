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

Napisati program koji će omogućiti unos isključivo velikih i malih slova i jednodimenzionalni niz od 20 elemenata. Zatim napraviti funkciju koja će primati kao argument taj niz. Funkcija treba da izbaci iz niza sve karaktere velikih slova, a da ostavi u nizu sve karaktere iz grupe malih slova. Izbacivanje karaktera se treba napraviti tako da se ostatak niza pomjeri u lijevo da ne bi bilo praznih elemenata. To pomjeranje je potrebno uraditi prilikom izbacivanja svakog elementa a ne na kraju posto su izbačena sve velika slova.

Obavezno voditi računa o optimizaciji coda-a koja posebno utiče na broj bodova u ovom zadatku.

# [Zadatak 04](./Grupa%20A%20-%20Zadatak%2004.cpp)

Dat je 2D niz koji simulira šahovsku tablu. Omogućiti korisniku unos cjelobrojnih elemenata 2D niza tako da se u svako "crno" polje unese parni broj sa neparnim brojem cifara, a u "bijelo" polje neparni broj sa parnim brojem cifara. Provjeriti da li je matrica simetrična po glavnoj dijagonali (dakle da li je broj na poziciji 1.0 jednak broju na poziciji 0.1, na 0.2 jednak onome na 2.0, na 3.1 jednak onome na 1.3 itd.) te ako jeste simetrična naći i ispisati indeks reda sa najvećim prosjekom elemenata, a ako nije u potpunosti simetricna naći i ispisati indeks kolone sa najmanjim prosjekom elemenata.
    
    C - Crna
    B - Bijela
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

# Grupa B

# [Zadatak 01](./Grupa%20B%20-%20Zadatak%2001.cpp)

Napisati program koji korisniku omogućava unos realnog broja x i odabir funkcije za proračun datog izraza. Korisnik bira funkciju unosom jednog od sljedećih karaktera: 's' (sin), 'c' (cos). U slučaju da korisnik unese karakter koji ne odgovara niti jednoj od predefinisanih vrijednosti ispisati odgovarajuću poruku i ponoviti odabir. Za određenu funkciju sin() izraz je:  
![f(x) = 1 + [1/(sin(x) + x)] + [2/(sin(x/2) + x)] + ... + [x/(sin(x/x) + x)]](https://latex.codecogs.com/gif.latex?f%28x%29%20%3D%201%20&plus;%20%5Cfrac%7B1%7D%7B%5Csin%28x%29%20&plus;%20x%7D%20&plus;%20%5Cfrac%7B2%7D%7B%5Csin%28%5Cfrac%7Bx%7D%7B2%7D%29%20&plus;%20x%7D%20&plus;%20...%20&plus;%20%5Cfrac%7Bn%7D%7B%5Csin%28%5Cfrac%7Bx%7D%7Bx%7D%29%20&plus;%20x%7D)

# [Zadatak 02](./Grupa%20B%20-%20Zadatak%2002.cpp)

Napisati program koji simulira bacanje 3 kockice (jedna kockica ima 6 strana i na tim stranama su brojevi 1 - 6). Simuliranje bacanja svake kockice ostvariti funkcijom rand() % 6 + 1. Simulirati konstantno bacanje sve tri kockice dok se u dva uzastopna bacanja ne desi da se dobiju isti brojevi na sve tri kockice (npr. u šestom bacanju se dobiju brojevi 2, 2, 2 a u sedmom 4, 4, 4 na sve tri kockice). Ispisati koliko je ukupno bilo bacanja dok se nije ispunio navedeni uslov. Nije potrebno tražiti bilo kakav unos od korisnika.

# [Zadatak 03](./Grupa%20B%20-%20Zadatak%2003.cpp)

Napisati program koji će omogućiti unos cijelobrojnih parnih vrijednosti sa neparnim brojem cifara u jednodimenzionalni niz od 20 elemenata. Zatim napraviti funkciju koja će primati kao argument taj niz. Funkcija treba da izbaci iz niza sve brojeve djeljive sa 6, a da ostavi u nizu sve ostale brojeve. Izbacivanje karaktera se treba napraviti tako da se ostatak niza pomjeri u lijevo da ne bi bilo praznih elemenata. To pomjeranje je potrebno uraditi prilikom izbacivanja svakog elementa a ne na kraju posto su svi elementi djeljivi sa 6.

Obavezno voditi računa o optimizaciji coda-a koja posebno utiče na broj bodova u ovom zadatku.

# [Zadatak 04](./Grupa%20B%20-%20Zadatak%2004.cpp)

Neka je data matrica dimenzija 10x12 u kojoj svaki red predstavlja uposlenika firme, a svaka kolona mjesec u godini. Elementi matrice predstavljaju evidentirane plate po mjesecima i uposlenicima (plata je iznos sa dvije decimalne cifre iza zareza). Kreirati a potom u glavnom programu testirati sljedeće funkcije:
* Funkciju za unos plata za sve uposlenike za odabrani mjesec. Omogućiti poziv funkcije iz main funkcije više puta kako bi se unijeli podaci za sve mjesece u godini.
* Funkciju koja za odabranog uposlenika vrši ispis plata po mjesecima. Ukoliko je za neki od mjeseci uposlenik bio na neplaćenom odsustvu, njegova plata će biti 0 i neće se ispisivati za taj mjesec. Pored toga, funkcija kao rezultat vraća prosjećnu platu za cijelu godinu za odabranog uposlenika uključujući i mjesece otsustva.
* Funkciju koja pronalazi uposlenika sa najvećom prosječnom platom i ispisuje iznos prosječne plate zaokruzen na dvije decimale, te vraća indeks tog uposlenika
