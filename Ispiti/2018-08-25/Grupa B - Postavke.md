# Zadatak 01
___
Napisati program koji korisniku omogućava unos cijelog broja n, te izračunava:
![S = [1/(n + 1)] - [2/((n - 1) + 2!)] + [3/((n - 2) + 3!)] - [4/((n - 3) + 4!)] + ... + (-1)^(n - 1) * [n/(1 + n!)]](https://latex.codecogs.com/gif.latex?S%20%3D%20%5Cfrac%7B1%7D%7Bn%20&plus;%201%7D%20-%20%5Cfrac%7B2%7D%7B%28n%20-%201%29%20&plus;%202%21%7D%20&plus;%20%5Cfrac%7B3%7D%7B%28n%20-%202%29%20&plus;%203%21%7D%20-%20%5Cfrac%7B4%7D%7B%28n%20-%203%29%20&plus;%204%21%7D%20&plus;%20...%20&plus;%20%28-1%29%5E%7Bn%20-%201%7D%5Cfrac%7Bn%7D%7B1%20&plus;%20n%21%7D)

# Zadatak 02
___
Napisati program koji simulira bacanje 3 kockice (jedna kockica ima 6 strana i na tim stranama su brojevi 1 - 6). Simuliranje bacanja svake kockice ostvariti funkcijom rand() % 6 + 1. Simulirati konstantno bacanje sve tri kockice dok se u dva uzastopna bacanja ne desi da se dobiju isti brojevi na sve tri kockice (npr. u šestom bacanju se dobiju brojevi 2, 2, 2 a u sedmom 4, 4, 4 na sve tri kockice). Ispisati koliko je ukupno bilo bacanja dok se nije ispunio navedeni uslov. Nije potrebno tražiti bilo kakav unos od korisnika.

Napomena: Po želji kreirati dodatne funkcije da se olakša rješavanje zadataka.

# Zadatak 03
___
Napisati program koji će generisati Fibonacci niz i smjestiti ga u jednodimenzionalni niz od 20 elemenata. (Fibonaccijev niz je niz brojeva koji počinje brojevima 0 i 1, a svaki sljedeći broj u nizu dobije se zbrajanjem prethodna dva: F(0) = 0, F(1) = 1, F(n) = F(n-1) + F(n-2)). Zatim napraviti funkciju koja će sortirati niz uzlazno po srednjoj cifri. (Za brojeve sa parnim brojem koristiti aritmeticku sredinu srednje dvije cifre). Voditi računa o tipu podatka prilikom računanja srednje cifre.

# Zadatak 04
___
Neka je data matrica dimenzija 11x12 u kojoj svaki red predstavlja fudbalera nekog tima, a svaka kolona utakmicu (fudbalski meč) u toku sezone. Elementi matrice predstavljaju broj postignutih golova po utakmici. Kreirati, a potom u glavnom programu testirati, sljedeće funkcije:
* Funkciju za unos svih golova za odabranu utakmicu. Omogućiti poziv funkcije iz main funkcije više puta kako bi se unijeli podaci za sve utakmice. 
* Funkciju koja za odabranog fudbalera vrši ispis postignutih golova po utakmicama. Ukoliko fudbaler nije postigao niti jedan gol, podatak za tu utakmicu se ne ispisuje. Pored toga, funkcija kao rezultat vraća prosječan broj postignutih golova za cijelu sezonu.
* Funkciju koja pronalazi fudbalera sa najboljim prosjekom postignutih golova te ispisuje njegov prosjek u sezoni i vraća index tog fudbalera.