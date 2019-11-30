# [Zadatak 01](./Grupa%20B%20-%20Zadatak%2001.cpp)

Poštujući sve faze procesa programiranja napraviti program koji pronalazi i ispisuje 
sve složene brojeve brojeve iz intervala m-n (10 < m < 100, 500 < n < 2000, m < n; 
ukoliko unesene vrijednosti nisu ispravne, učitavanje treba ponavljati), te pronalazi i ispisuje njihovu aritmetičku sredinu. Napraviti sljedeće funkcije:
* bool slozeni – koja će ispitivati da li je broj složeni i
* ispis – koja koja će ispisivati sve složene brojeve i vratiti main funkciji njihovu aritmetičku sredinu.
    
U glavnom programu je potrebno ispisati aritmetičku sredinu. 
  
Složeni broj je svaki broj koji nije prosti, odnosno koji ima bar jednog djelioca osim broja 1 i samog sebe.

# [Zadatak 02](./Grupa%20B%20-%20Zadatak%2002.cpp)

Napisati program koji će uzastopno učitatvati cijele brojeve m i n 
(1 <= m <= 50, 1 <= n <= 500) i pronalaziti srednju cifru njihovog proizvoda/umnoška
(srednju cifru ako proizvod/umnožak ima neparan broj cifara, odnosno aritmeticku sredinu (tip float) dvije srednje cifre ako proizvod/umnožak ima parni broj cifara). Program treba ispisivati srednju cifru samo ako je veća od prethodno izračunate srednje cifre. Prva pronađena srednja cifra se svakako ispisuje. Program se forsirano prekida ako korisnik unese n = 0. Program se prirodno završava ako je pronađena srednja cifra 9.
    
Primjer izvršenja:
```
unesi m i n: 10, 15
srednja cifra/sredina proizvoda brojeva 10 i 15 (10 * 15 = 150) je: 5
unesi m i n: 10, 42
srednja cifra/sredina proizvoda brojeva 10 i 42 (10 * 42 = 420) je: ne ispisuje se
unesi m i n: 12, 31
srednja cifra/sredina proizvoda brojeva 12 i 31 (12 * 31 = 372) je: 7
unesi m i n: 149, 20
srednja cifra/sredina proizvoda brojeva 149 i 20 (149 * 20 = 2980) je: 8.5
unesi m i n: 150, 0
forsirani prekid...
```

# [Zadatak 03](./Grupa%20B%20-%20Zadatak%2003.cpp)

Napisati funkciju koja kao parametare prima dva niza char recenica[200] i char rijec[10] odnosno rečenicu (niz od najviše 200 karaktera) i riječ (niz od najviše 10 karaktera) te u nizu recenica[200] pretrazuje i pronalazi sekvencu karaktera unesenih u niz rijec[10]. Radi jednostavnosti rjesenja podrazumjeva se da i recenica i rijec koja se pretrazuje zavrsavaju tackom. Poslije pronalaska tražene riječi, pomenutu riječ treba zamijeniti karakterima "FIT".

(Pomoć: Treba voditi računa koliko karaktera ima riječ koja je pronađena i zamjenjena)
   
Npr. ako je data rečenica u nizu recenica[200]: "Ja studiram na fakultetu jer zelim biti expert." i rijec[10]: "fakultet",funkcija je treba pronaći riječ "fakultet" u rečenici i pretvoriti je u "FIT": "Ja studiram na FITu jer zelim biti expert." (ima ukupno manje slova a zadrzan je samo po jedan space između riječi). 
   
Obavezno u main funkciji omogučiti unos recenice, zatim tražene riječi i ispisati novu rečenicu poslije zamjene.

# [Zadatak 04](./Grupa%20B%20-%20Zadatak%2004.cpp)

Neka je dat 2D niz tipa int dimenzija 5 x 5. Kreirati, a potom u glavnom programu 
testirati, sljedeće funkcije:
* Funkciju koja vrši generisanje Fibonaccijevih brojeva u 2D nizu dok se niz ne popuni
* Funkcija koja ispisuje najveće zajedničke djelitelje brojeva na suprotnim indeksima matrice koristeći Euklidov algoritam, kad se indeksi izjednače petlja se treba prekinuti:
```
Euklidov algoritam(a,b):
    Dok(b>0)
        p=a;
        a=b;
        b = p mod b;
    NZD = a;
```
Gdje je 'p' pomoćna varijabla. Suprotni indeksi matrice su matrica[0,0] i matrica[5,5], zatim matrica[0,1] i matrica [5,4]itd.
     
Primjer: 
```
Najveći zajednički djelitelj za brojeve 610 i 34 je 2. 
```
```
Najveći zajednički djelitelj za brojeve 8 i 2584 je 8. 
```
