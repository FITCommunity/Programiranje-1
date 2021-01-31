# Grupa A

# [Zadatak 01](./Grupa%20A%20-%20Zadatak%2001.cpp)

Napisati program koji korisniku omogućava unos cijelog broja N, te izračunava geometrijsku sredinu svih neparnih brojeva u intervalu [1, N] koji su djeljivi sa 5. Rezultat treba biti zaokružen na dvije decimale. Geometrijska sredina n brojeva se računa po formuli: ![(a1 * a2 * ... an) ^ 1/n](https://latex.codecogs.com/gif.latex?%28a_1%20*%20a_2%20*%20...%20*%20a_n%29%20%5E%20%7B%5Cfrac%7B1%7D%7Bn%7D%7D)

# [Zadatak 02](./Grupa%20A%20-%20Zadatak%2002.cpp)

Napisati program koji će omogućiti korisniku unos broja n ( 10 <= n <= 1000). Zatim simulirati n bacanja kockice (kockica ima 6 strana i na tim stranicama su brojevi 1-6). Simuliranje bacanja svake kockice ostvariti funkcijom rand() % 6 + 1. Izračunati statičke podatke u kojem procentu ukupnog bacanja se dobiva svaki od mogućih brojeva 1-6. Obavezno koristiti switch statement za zbrajanje rezultata bacanja kockice.
  
Napomena: Po želji kreirati dodatne funkcije da se olakša rješavanje zadataka.

# [Zadatak 03](./Grupa%20A%20-%20Zadatak%2003.cpp)

Napisati program koji će generisati Fibonacci niz i smjestiti ga u jedan niz od 20 elemenata. (Fibbonacijev niz je niz brojeva koji počinje brojevima 0 i 1, a svaki sljedeći broj u nizu dobija se zbrajanjem prethodna dva: F(0) = 0, F(1) = 1,F(n) = F(n-1) + F(n-2)). Zatim napraviti funkciju koja će u nizu pronaći sve brojeve koji završavanju parnom cifrom i ukloniti ih iz niza. Uklanjanje elemenata niza obavezno uraditi tako da ne ostaju prazni elementi već da se ostatak niza pomjeri kako ne bi bilo praznih elemenata. Pomjeranje ostatka niza obavezno raditi prilikom uklanjanja elemenata, a ne sortiranjem poslije uklanjanja.

# [Zadatak 04](./Grupa%20A%20-%20Zadatak%2004.cpp)

Napisati program koji će omogućiti unos elemenata matrice dimenzija 10x10 cijelim brojevima sa neparnim brojem cifara. Za provjeru broja cifara koristiti funkciju brCif(int). Zatim pronaći i ispisati red sa najvećim presjekom (aritmetičkom sredinom) elemenata, te kolonu sa najmanjim prosjekom elemenata.

# Grupa B

# [Zadatak 01](./Grupa%20B%20-%20Zadatak%2001.cpp)

Napisati program koji učitava prirodan broj n. Program treba ispisati najmanji prirodan broj m, veći ili jednak n, koji je potencija nekog prirodnog broja, tj. ![m = k ^ l](https://latex.codecogs.com/gif.latex?m%20%3D%20k%20%5E%20l), gdje su k i l prirodni brojevi >= 2.

# [Zadatak 02](./Grupa%20B%20-%20Zadatak%2002.cpp)

Napisati program koji simulira bacanje 3 kockice (jedna kockica ima 6 strana i na tim stranama su brojevi 1 - 6). Simuliranje bacanja svake kockice ostvariti funkcijom rand() % 6 + 1. Simulirati konstantno bacanje sve tri kockice dok se u dva uzastopna bacanja ne desi da se dobiju isti brojevi na sve tri kockice (npr. u šestom bacanju se dobiju brojevi 2, 2, 2 a u sedmom 4,4,4 na sve tri kockice). Ispisati koliko je ukupno bilo bacanja dok se nije ispunio navedeni uslov. Nije potrebno tražiti bilo kakav unos od korisnika.
   
Napomena: Po želji kreirati dodatne funkcije da se olakša rješavanje zadataka.

# [Zadatak 03](./Grupa%20B%20-%20Zadatak%2003.cpp)

Napisati program koji će omogućiti unos minimalno trocifrenih cijelih brojeva u jednodimenzionalni niz od 20 elemenata. Zatim napraviti funkciju koja će u nizu pronaći sve brojeve kojima je prva cifra (početna cifra sa lijeve strane) parna i ukloniti ih iz niza. Uklanjanje elemenata niza obavezno uraditi tako da ne ostaju prazni elementi već da se ostatak niza pomjeri kako ne bi bilo prazni.Pomjeranje ostatka niza niza obavezno raditi prilikom uklanjanja elemenata a ne sortiranjem poslije uklanjanja.

# [Zadatak 04](./Grupa%20B%20-%20Zadatak%2004.cpp)

Dat je 2D niz koji simulira šahovsku tablu. Omogućiti korisniku unos cjelobrojnih elemenata 2D niza tako da se u svako "crno" polje unese parni broj sa neparnim brojem cifara, a u "bijelo polje neparni broj sa parnim brojem cifara. Izračunati i ispisati prosjeke (aritmetičke sredine) svih elemenata na bijelim poljima iznad glavne dijagonale te na crnim poljima ispod sporedne dijagonale.
    
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
