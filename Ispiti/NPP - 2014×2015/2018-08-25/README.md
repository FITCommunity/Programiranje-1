# Grupa A

# [Zadatak 01](./Grupa%20A%20-%20Zadatak%2001.cpp)

Napisati program koji učitava prirodan broj n. Program treba ispisati najmanji prirodan broj m, veći ili jednak n, koji je potencija nekog prirodnog broja, tj. ![m = k ^ l](https://latex.codecogs.com/gif.latex?m%20%3D%20k%20%5E%20l), gdje su k i l prirodni brojevi >= 2.

# [Zadatak 02](./Grupa%20A%20-%20Zadatak%2002.cpp)

Napisati program koji će omogućiti korisniku unos broja n (uz uslov 10 <= n <= 1000). Zatim simulirati unos n slučajnih vrijednosti. Simuliranje unosa ostvariti funkcijom rand() % 1000 + 1. Izračunati statističke podatke u kojem procentu se od n generisanih slučajnih vrijednosti pojavljuje prost broj.

Npr. Ako je generisano 10 brojeva (n = 10): 5,7,4,13,17,20,25,23,30,45, u ovom uzorku od 10 brojeva postoji 5 prostih brojeva pa je procenat prostih brojeva u ovom slučaju 50%.

Napomena: Po želji kreirati dodatne funkcije da se olakša rješavanje zadatka.

# [Zadatak 03](./Grupa%20A%20-%20Zadatak%2003.cpp)

Napisati program koji će omogućiti unos cijelih brojeva sa neparnih brojem cifara 
(minimalno trocifrenih) u jednodimenzionalni niz od 20 elemenata i jedan karakter u main funkciji. Zatim napraviti funkciju koja će primati kao argumente taj niz i karakter. Funkcija treba da na osnovu karaktera izvrši sortiranje niza uzlazno ili silazno po srednjoj cifri i to ako je primljeni karakter "U" sortiranje treba biti uzlazno, a ako je primljen karakter "S" onda sortiranje treba biti silazno. Ukoliko karakter nije jedan od navedenih, treba se ispisati poruka "Sortiranje nedefinisano". Obavezno voditi računa o optimizaciji code-a koja posebno utiče na broj bodova u ovom zadatku.

# [Zadatak 04](./Grupa%20A%20-%20Zadatak%2004.cpp)

Dat je 2D niz koji simulira šahovsku tablu. Omogućiti korisniku unos cjelobrojnih elemenata 2D niza tako da se u svako "crno" polje unese parni broj sa neparnim brojem cifara, a u "bijelo" polje neparni broj sa parnim brojem cifara. Provjeriti da li je matrica simetrična po glavnoj dijagonali (dakle da li je broj na poziciji 1.0 jednak broju na poziciji 0.1, na 0.2 jednak onome na 2.0, na 3.1 jednak onome na 1.3 itd.) te ako jeste simetrična na taj način izvršiti transpoziciju matrice tako što će se zamjeniti redovi i kolone (ne samo ispisati nego potpuno zamjeniti elemente). Ako nije u potpunosti simetricna ispisati koliko ima simetricnih elemenata).
    
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

Napisati program koji korisniku omogućava unos cijelog broja n, te izračunava:
![S = [1/(n + 1)] - [2/((n - 1) + 2!)] + [3/((n - 2) + 3!)] - [4/((n - 3) + 4!)] + ... + (-1)^(n - 1) * [n/(1 + n!)]](https://latex.codecogs.com/gif.latex?S%20%3D%20%5Cfrac%7B1%7D%7Bn%20&plus;%201%7D%20-%20%5Cfrac%7B2%7D%7B%28n%20-%201%29%20&plus;%202%21%7D%20&plus;%20%5Cfrac%7B3%7D%7B%28n%20-%202%29%20&plus;%203%21%7D%20-%20%5Cfrac%7B4%7D%7B%28n%20-%203%29%20&plus;%204%21%7D%20&plus;%20...%20&plus;%20%28-1%29%5E%7Bn%20-%201%7D%5Cfrac%7Bn%7D%7B1%20&plus;%20n%21%7D)

# [Zadatak 02](./Grupa%20B%20-%20Zadatak%2002.cpp)

Napisati program koji simulira bacanje 3 kockice (jedna kockica ima 6 strana i na tim stranama su brojevi 1 - 6). Simuliranje bacanja svake kockice ostvariti funkcijom rand() % 6 + 1. Simulirati konstantno bacanje sve tri kockice dok se u dva uzastopna bacanja ne desi da se dobiju isti brojevi na sve tri kockice (npr. u šestom bacanju se dobiju brojevi 2, 2, 2 a u sedmom 4, 4, 4 na sve tri kockice). Ispisati koliko je ukupno bilo bacanja dok se nije ispunio navedeni uslov. Nije potrebno tražiti bilo kakav unos od korisnika.

Napomena: Po želji kreirati dodatne funkcije da se olakša rješavanje zadataka.

# [Zadatak 03](./Grupa%20B%20-%20Zadatak%2003.cpp)

Napisati program koji će generisati Fibonacci niz i smjestiti ga u jednodimenzionalni niz od 20 elemenata. (Fibonaccijev niz je niz brojeva koji počinje brojevima 0 i 1, a svaki sljedeći broj u nizu dobije se zbrajanjem prethodna dva: F(0) = 0, F(1) = 1, F(n) = F(n-1) + F(n-2)). Zatim napraviti funkciju koja će sortirati niz uzlazno po srednjoj cifri. (Za brojeve sa parnim brojem koristiti aritmeticku sredinu srednje dvije cifre). Voditi računa o tipu podatka prilikom računanja srednje cifre.

# [Zadatak 04](./Grupa%20B%20-%20Zadatak%2004.cpp)

Neka je data matrica dimenzija 11x12 u kojoj svaki red predstavlja fudbalera nekog tima, a svaka kolona utakmicu (fudbalski meč) u toku sezone. Elementi matrice predstavljaju broj postignutih golova po utakmici. Kreirati, a potom u glavnom programu testirati, sljedeće funkcije:
* Funkciju za unos svih golova za odabranu utakmicu. Omogućiti poziv funkcije iz main funkcije više puta kako bi se unijeli podaci za sve utakmice. 
* Funkciju koja za odabranog fudbalera vrši ispis postignutih golova po utakmicama. Ukoliko fudbaler nije postigao niti jedan gol, podatak za tu utakmicu se ne ispisuje. Pored toga, funkcija kao rezultat vraća prosječan broj postignutih golova za cijelu sezonu.
* Funkciju koja pronalazi fudbalera sa najboljim prosjekom postignutih golova te ispisuje njegov prosjek u sezoni i vraća index tog fudbalera.
