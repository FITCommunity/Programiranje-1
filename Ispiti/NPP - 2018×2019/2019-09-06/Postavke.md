# Zadatak 01

Poštujući sve faze programiranja napisati program koji omogućava unos prirodnog broja n preko tastature te izračunava sumu:  
![1/3^2 + 1/5^2 + ... + 1/(2n+1)^2](https://latex.codecogs.com/png.latex?\frac{1}{3^2}&space;&plus;&space;\frac{1}{5^2}&space;&plus;&space;...&space;&plus;&space;\frac{1}{(2n&plus;1)^2})


# Zadatak 02

Napisati program koji omogućava unos pozitivnog broja n te pronalazi njegove parne cifri i formira novi broj u kojem su parne cifra zamijenjena cifrom '5'. Dodatno program treba ispisati razliku unesenog i broja koji se dobije nakon zamjene najmanje cifre.


# Zadatak 03

Napisati program koji će omogućiti korisniku da unese velicinu jednodimenzionalnog dinamickog niza integer vrijednosti. Napisati rekurzivnu funkciju koja će taj niz puniti serijom brojeva 2, 4, 8, 16, 32, 64, 128, 256, 512 itd., tako da je svaki slijedeci broj jednak prethodnom pomnozenom sa 2, pocevsi od broja 2. Rekurzija se prekida kad se popuni cijeli niz ili kad se desi overflow na integer varijabli. U ovom zadatku je zabranjeno indexirati elemente niza uglastim zagradama. Obavezno koristiti aritmetiku pokazivaca.
Za olaksanje rjesenja, mozete izabrati prototip funkcija po zelji.


# Zadatak 04

Kreirati dinamički dvodimenzionalni niz čiji su elementi objekti tipa fudbaler (fudbaler je struktura čija su obilježja data u nastavku). Omogućiti korisniku da unese dimenzije niza.

```cpp
struct fudbaler
{
	int *godRodjenja;
	int *brojIgraca;
	int *golovi;
};
```

Redovi dvodimenzionalnog niza predstavljaju razlicite timove a kolone prestavljaju igrače u tim timovima. Omogućiti korisniku unos svih podataka za sve igrače, te napraviti (i testirati u main funkciji) funkciju koja će pronaći tim sa najvećim prosjekom. Zatim napraviti  (i testirati u main funkciji) funkciju koja će pronaći igrača sa najviše golova u timu sa najlošijim prosjekom golova.
Radi lakšeg testiranja programa obavezno u funciji unosa podataka omogućiti da se podaci generišu tako što će se:
* godRodjenja generisati: `1980 + rand() % ((2000 + 1) - 1980)` (uzmite ovaj dio code-a da dobijete slučajne brojeve u rangu 1980-2000)
* brojIgraca generisati: `rand() % 30 + 1`
* golovi generisati: `rand() % 5`

U ovom zadatku je zabranjeno indexirati elemente niza uglastim zagradama. Obavezno koristiti aritmetiku pokazivaca.
