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