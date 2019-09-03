# Zadatak 01

Napisati program koji korisniku omogućava unos cijelog broja N, te izračunava geometrijsku sredinu svih neparnih brojeva u intervalu [1, N] koji su djeljivi sa 5. Rezultat treba biti zaokružen na dvije decimale. Geometrijska sredina n brojeva se računa po formuli: ![(a1 * a2 * ... an) ^ 1/n](https://latex.codecogs.com/gif.latex?%28a_1%20*%20a_2%20*%20...%20*%20a_n%29%20%5E%20%7B%5Cfrac%7B1%7D%7Bn%7D%7D)

# Zadatak 02

Napisati program koji će omogućiti korisniku unos broja n ( 10 <= n <= 1000). Zatim simulirati n bacanja kockice (kockica ima 6 strana i na tim stranicama su brojevi 1-6). Simuliranje bacanja svake kockice ostvariti funkcijom rand() % 6 + 1. Izračunati statičke podatke u kojem procentu ukupnog bacanja se dobiva svaki od mogućih brojeva 1-6. Obavezno koristiti switch statement za zbrajanje rezultata bacanja kockice.
  
Napomena: Po želji kreirati dodatne funkcije da se olakša rješavanje zadataka.

# Zadatak 03

Napisati program koji će generisati Fibonacci niz i smjestiti ga u jedan niz od 20 elemenata. (Fibbonacijev niz je niz brojeva koji počinje brojevima 0 i 1, a svaki sljedeći broj u nizu dobija se zbrajanjem prethodna dva: F(0) = 0, F(1) = 1,F(n) = F(n-1) + F(n-2)). Zatim napraviti funkciju koja će u nizu pronaći sve brojeve koji završavanju parnom cifrom i ukloniti ih iz niza. Uklanjanje elemenata niza obavezno uraditi tako da ne ostaju prazni elementi već da se ostatak niza pomjeri kako ne bi bilo praznih elemenata. Pomjeranje ostatka niza obavezno raditi prilikom uklanjanja elemenata, a ne sortiranjem poslije uklanjanja.

# Zadatak 04

Napisati program koji će omogućiti unos elemenata matrice dimenzija 10x10 cijelim brojevima sa neparnim brojem cifara. Za provjeru broja cifara koristiti funkciju brCif(int). Zatim pronaći i ispisati red sa najvećim presjekom (aritmetičkom sredinom) elemenata, te kolonu sa najmanjim prosjekom elemenata.