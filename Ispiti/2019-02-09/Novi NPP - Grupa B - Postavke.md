# Zadatak 01

Napisati program koji korisniku omogućava unos cijelog broja N, te izračunava geometrijsku sredinu svih neparnih brojeva u intervalu [1, N] koji nisu djeljivi sa brojem 5. Rezlutat treba biti zaokruzen na dvije decimale.
Geometrijska sredina n brojeva se računa po formuli:
![(a_1 * a_2 * ... * a_n)^{\frac{1}{n}} ](https://latex.codecogs.com/gif.latex?(a_1&space;*&space;a_2&space;*&space;...&space;*&space;a_n)^{\frac{1}{n}}) ili ![\sqrt[n]{a_1*a_2*...*a_n}](https://latex.codecogs.com/gif.latex?\sqrt[n]{a_1*a_2*...*a_n})

# Zadatak 02

Omogučiti unos dva broja X i Y iz intervala od 10 do 5000. Kreirati program koji će pronaći i ispisati sve brojeve od X do Y (uključujući granične vrijednosti) za koje važi da je obrnuti broj djeljiv sa njegovom sumom cifara. Za olakšanje rješenja zadataka napraviri funkcije za obrtanje poretka cifara i za sumu cifara.

Npr. Za broj 144 vrijedi da mu je suma cifara 9 i da je broj koji se dobije nakon što se njegove cifre obrnu 441, djeljiv sa 9.

```
Definišite vrijednosti intervala [X, Y]: 11 150
Brojevi koji ispunjuju dati uslov: 18 20 21 24 27
```

# Zadatak 03

Napisati program koji će omogućiti korisniku da unese veličinu jednodimenzionalnog dinamičkog niza integer vrijednosti. Napisati rekurzivnu funkciju koja će taj niz popuniti random brojevima u opsegu od 1 do 100. Za generisanje random brojeva koristiti rand() % 100 + 1. Punjenje niza se prekida kada se popuni cijeli niz ili kada se tri puta uzastopno dobije isti random broj. U ovom zadatku je zabranjeno indeksirati elemente niza uglastim zagradama. Obavezno koristiti aritmetiku pokazivača. Obavezno sve riješiti jednom rekurzivnom funkcijom.

# Zadatak 04

Kreirati dinamički dvodimenzionalni niz čiji su elementi objekti tipa figura (figura je struktura čija su obilježja data u nastavku). Omogućiti korisniku da unese dimenzije niza, te omogućiti unos elemenata. Osigurati da bude isti broj kolona i redova. Potrebno je napraviti funkciju koja će provjeriti da li su figure na bijelim poljima simetrično raspoređene po visini u odnosu na glavnu dijagonalu (da li je visina figure na poziciji 0,1 jednaka visini figure na poziciji 1,0 itd. za sva bijela polja). Funkcija treba da vrati pokazivač na memorijsku lokaciju u kojoj je upisan zbir visina figura ako je tabela simetrično raspoređena, a broj -1 ako nije simetrično raspoređena.
```cpp
struct figura
{
    int ID;
    char *nazivFigure;
    float *visinaFigure;
};
```