# Grupa A

# [Zadatak 01](./Grupa%20A%20-%20Zadatak%2001.cpp)

Napisati program koji izračunava aritmetičku sredinu svih savršenih brojeva iz zadatog intervala. Za neki broj se kaže da je savršen ukoliko je jednak sumi svih svojih djelilaca (ne uključujući njega samog). Na primjer, 28 je savršen broj: njegovi djelioci su 1, 2, 4, 7 i 14, a 1 + 2 + 4 + 7 + 14 = 28. 
Jedini savršeni brojevi u opsegu od 1 do 100 su brojevi 6 i 28. U rješenju koristiti 
funkciju sljedećeg prototipa: 
```cpp
bool IsSavrsen(int);
```

# [Zadatak 02](./Grupa%20A%20-%20Zadatak%2002.cpp)

Napisati program koji na osnovu unesenog cijelog broja N formira i ispisuje broj sastavljen od istih cifara u rastućem poretku uzimajući samo neparne cifre. Za sortiranje cifara koristiti pomoćni niz od najviše 10 elemenata.
  
```
Unesite cijeli broj N: 4513982
Broj sa sortiranim ciframa: 1359
```
```
Unesite cijeli broj N: 109225
Broj sa sortiranim ciframa: 159
```
# [Zadatak 03](./Grupa%20A%20-%20Zadatak%2003.cpp)

Napisati funkciju koja kao parametar prima rečenicu (niz od najviše 200 karaktera) i iz nje uklanja svaku riječ koja počinje velikim slovom. Pored toga, funkcija treba da prebroji ukupan broj riječi u rečenici prije izmjene. Koristiti sljedeći prototip funkcije: `int ukloniRijeci(char []);`. Npr. ako je data rečenica: "Stari most u Mostaru spaja obale rijeke Neretve." funkcija je treba pretvoriti u: "most u spaja obale rijeke". Funkcija vraća broj riječi u polaznoj rečenici (prije odsijecanja ostalih riječi). 
  
Radi jednostavnosti rješenja, pretpostavite da je riječ bilo koji niz znakova razdvojen znakom razmak. 

# [Zadatak 04](./Grupa%20A%20-%20Zadatak%2004.cpp)

Neka je data matrica dimenzija 10 x 12 u kojoj svaki red predstavlja uposlenika određene kompanije, a svaka kolona mjesec u godini. Elementi matrice predstavljaju radne sate uposlenika po mjesecima jedne kalendarske godine. Kreirati, a potom u glavnom programu testirati, sljedeće funkcije:
* Funkciju koja za odabranog uposlenika vrši ispis platne liste po mjesecima, ako je poznato da je satnica svih uposlenika 12 KM. Pored toga, funkcija kao rezultat vraća prosječnu mjesečnu platu tog uposlenika.
* Funkciju koja pronalazi uposlenika sa najviše prekovremenih radnih sati, ako je usvojeno da jedna radna sedmica ima 40 obaveznih radnih sati, a svaki mjesec 4 sedmice.
* Funkciju koja za svaki mjesec u godini ispisuje prosječan iznos isplaćenih plata (za ukupne radne sate) uz posebno naznačen iznos koji je izdvojen isključivo za prekovremeni rad. Ispis za mjesec januar bi izgledao kako slijedi:
 ```   
-----------------Januar-----------------
Ukupno isplaceno: 25700 KM
Isplaceno za prekovremeni rad: 6500 KM
```
Napomena: Pretpostaviti da je u programu implementirana funkcija za unos radnih sati jedne kalendarske godine i koristiti je u glavnom programu (dakle, funkciju unos nije potrebno implementirati).

# Grupa B
# [Zadatak 01](./Grupa%20B%20-%20Zadatak%2001.cpp)

Kreirati program koji će pronaći i ispisati sve brojeve od X do Y (uključujući granične vrijednosti) koji su deljivi svim svojim ciframa. Na primjer, broj 36 je djeljiv sa brojevima 3 i 6. (36/6=6 i 36/3=12). Brojeve X i Y unosi korisnik i moraju biti u opsegu od 10 do 6000. Obavezno koristiti bar jednu funkciju.

# [Zadatak 02](./Grupa%20B%20-%20Zadatak%2002.cpp)

Napisati program koji na osnovu unesenog cijelog broja N formira i ispisuje broj sastavljen od istih cifara u opadajućem poretku uzimajući samo parne cifre. Za sortiranje cifara koristiti pomoćni niz od najviše 10 elemenata.
```
Unesite cijeli broj N: 4513982
Broj sa sortiranim ciframa: 842
```
```
Unesite cijeli broj N: 689225
Broj sa sortiranim ciframa: 8622
```

# [Zadatak 03](./Grupa%20B%20-%20Zadatak%2003.cpp)

Napisati funkciju koja kao parametar prima rečenicu (niz od najviše 200 karaktera) i iz nje uklanja svaku riječ koja počinje malim ili velikim slovom "s" (S i s). Pored toga, funkcija treba da prebroji ukupan broj riječi u rečenici prije izmjene. Koristiti sljedeći prototip funkcije: `int ukloniRijeci(char [])`. Npr. ako je data rečenica: "Stari most u Mostaru spaja obale rijeke Neretve."funkcija je treba pretvoriti u: "most u spaja obale rijeke". Funkcija vraća broj riječi u polaznoj rečenici (prije odsijecanja ostalih riječi). 
  
Radi jednostavnosti rješenja, pretpostavite da je riječ bilo koji niz znakova razdvojen znakom razmak.

# [Zadatak 04](./Grupa%20B%20-%20Zadatak%2004.cpp)

Neka je data matrica dimenzija 11 x 12 u kojoj svaki red predstavlja fudbalera nekog tima, a svaka kolona utakmicu (fudbalski meč) u toku sezone. Elementi matrice predstavljaju broj postignutih golova po utakmici. Kreirati, a potom u glavnom programu testirati, sljedeće funkcije:
* Funkciju za unos svih golova za odabranu utakmicu. Omogućiti poziv funkcije iz main funkcije više puta kako bi se unijeli podaci za sve utakmice. 
* Funkciju koja za odabranog fudbalera vrši ispis postignutih golova po utakmicama. Ukoliko fudbaler nije postigao niti jedan gol, podatak za tu utakmicu se ne ispisuje. Pored toga, funkcija kao rezultat vraća prosječan broj postignutih golova za cijelu sezonu.
* Funkciju koja pronalazi fudbalera sa najboljim prosjekom postignutih golova te ispisuje njegov prosjek u sezoni i vraća index tog fudbalera.
* Funkciju koja vraća najuspješniju utakmicu u sezoni i ispisuje procenat postignutih golova na toj utakmici (računajući svih 11 igrača i sve postignute golove), ukupan broj golova i indeks igrača koji je postigao najviše golova na toj utakmici. 

Primjer ispisa funkcije:
```    
-----------------Utakmica 3-----------------
Brog golova: 4
Procenat za tim – broj golova u odnosu na broj igrača u timu: 36.36% (4/11*100)
Najuspješniji igrač: 6.
```

