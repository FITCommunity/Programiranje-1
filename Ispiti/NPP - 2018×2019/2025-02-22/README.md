# Grupa A

# [Zadatak 01](./Grupa-A/Zadatak-01.cpp)

Napisite program gdje se uzastopno generiraju brojevi (koristeci <b>rand()</b> funkciju) koji su u opsegu
od 100 do 1000 (racunajuci i granicne vrijednosti). Ako se generirani broj sastoji od unikantnih cifri
tj. Cifri koje se ne ponavljaju (npr. broj 253) potrebno je dodati broj na ukupnu sumu. Ako se u 
generiranom broju nade cifra koja se ponavlja (npr. broj 343) program se zavrsava i posljednji broj
ne ulazi u totalnu sumu. Na kraju programa pored ukupne sume potrebno je prikazati ukupan zbroj
brojeva koji su imali srednju cifru vecu od posljednje cifre (npr. broj 154 odgovara ovom pravilu
dok broj 216 ne odgovara).

Output aplikacije:
```cpp
502 734 364 751 165
Program se je zavrsio sa brojem: 777 a ukupoan zbroj brojeva koji su imali srednju cifru vecu od posljednje cifre je: 3 dok je ukupna suma: 2516
```

# [Zadatak 02](./Grupa-A/Zadatak-02.cpp)

Napisite program koji treba da simulira igru bacanja novcica. Pravila igre su:
- Novcic moze pasti na Glavu (G) ili Pismo (P) (koristiti <b>rand()</b> za generisanje rezultata).
- Igrac pocinje sa 3 boda.
- Ako igrac pritisne 'n', igra se prekida i prikazuje se njegov ukupni rezultat.
- Ako igrac pritisne 'y', igra se nastavlja i ponovo baca novcic.

Pravila bodovanja:
- Glava (G) dodaje 1 bod na ukupni rezultat.
- Pismo (P) oduzima 1 bod, ali rezultat ne moze biti manji od 0.

Igra se automatski prekida ako:
- Rezultat dode do 10 ili vise -> <b>Pobjeda</b>!
- Rezultat padne na 0 nakon Pisma-> <b>Poraz</b>!

Posebni uslovi:
- Ako igrac dobije 3 Glave zaredom, automatski <b>pobjeduje</b>
- Ako igrac dobije 3 Pisma zaredom, automatski <b>gubi</b>
- Ako igrac pritisne 'n' prije nego sto dosegne 10 bodova, automatski <b>gubi</b>

Output automatske pobjede zbog 3 bacene glave za redom:

```
Dobrodosli u igru bacanja novcica!
Zelite li baciti novcic? (y/n): y
Novcic je pao na: G
Vas trenutni rezultat: 4
Zelite li baciti novcic? (y/n): y
Novcic je pao na: P
Vas trenutni rezultat: 3
Zelite li baciti novcic? (y/n): y
Novcic je pao na: G
Vas trenutni rezultat: 4
Zelite li baciti novcic? (y/n): y
Novcic je pao na: G
Vas trenutni rezultat: 5
Zelite li baciti novcic? (y/n): y
Novcic je pao na: G
```
Nazalost output iznad je cut off pa nemam nastavak, ja predpostavljam da je slican necemu kao ispod
```
Vas trenutni rezultat: 6
Pobjedili ste! Dobijena su 3 Glave zaredom - automatska pobjeda!
```

Output gubitka nakon sto bacite 3 pisma za redom:
```
Dobrodosli u igru bacanja novcica!
Zelite li baciti novcic? (y/n): y
Novcic je pao na: G
Vas trenutni rezultat: 4
Zelite li baciti novcic? (y/n): y
Novcic je pao na: P
Vas trenutni rezultat: 3
Zelite li baciti novcic? (y/n): y
Novcic je pao na: P
Vas trenutni rezultat: 2
Zelite li baciti novcic? (y/n): y
Novcic je pao na: P
Vas trenutni rezultat: 1
Izgubili ste! Dobijena su 3 Pisma zaredom - automatski poraz!
```

Output gubitka nakon sto prekinete igru a imate rezultat ispod 10:
```
Dobrodosli u igru bacanja novcica!
Zelite li baciti novcic? (y/n): y
Novcic je pao na: P
Vas trenutni rezultat: 2
Zelite li baciti novcic? (y/n): y
Novcic je pao na: G
Vas trenutni rezultat: 3
Zelite li baciti novcic? (y/n): y
Novcic je pao na: G
Vas trenutni rezultat: 4
Zelite li baciti novcic? (y/n): y
Novcic je pao na: P
Vas trenutni rezultat: 3
Zelite li baciti novcic? (y/n): n
Igra je prekinuta. Izgubili ste. Vas rezultat: 3
```

Output gubitka nakon sto rezultat padne na 0:
```
Dobrodosli u igru bacanja novcica!
Zelite li baciti novcic? (y/n): y
Novcic je pao na: P
Vas trenutni rezultat: 2
Zelite li baciti novcic? (y/n): y
Novcic je pao na: P
Vas trenutni rezultat: 1
Zelite li baciti novcic? (y/n): y
Novcic je pao na: G
Vas trenutni rezultat: 2
Zelite li baciti novcic? (y/n): y
Novcic je pao na: G
Vas trenutni rezultat: 3
Zelite li baciti novcic? (y/n): y
Novcic je pao na: P
Vas trenutni rezultat: 2
Zelite li baciti novcic? (y/n): y
Novcic je pao na: P
Vas trenutni rezultat: 1
Zelite li baciti novcic? (y/n): y
Novcic je pao na: G
Vas trenutni rezultat: 2
Zelite li baciti novcic? (y/n): y
Novcic je pao na: P
Vas trenutni rezultat: 1
Zelite li baciti novcic? (y/n): y
Novcic je pao na: P
Vas trenutni rezultat: 0
Izgubili ste! Vas rezultat je pao na 0.
```

# [Zadatak 03](./Grupa-A/Zadatak-03.cpp)

Napisite program koji trazi da unesete broj koji je u opsegu od 100 do 100 000 (ukljucujuci i 
granicne vrijednosti). Nakon sto korisnik unese broj, rekurzivno sabirete znamenke broja. Ako
dobiveni rezultat zbira znamenki broja je veci od broj 10 (npr. Broj 546 = 5 + 4 + 6 = 15), nastavite
sabirati znamenke novog broja (15 = 1 + 5 = 6), sve dok ne dobijete rezultat koji je manji od 10.

<b>OBAVEZNO KORISTITI REKURZIVNE FUNKCIJE</b>

Output aplikacije:
```cpp
Unesite broj u opsegu od 100 do 100 000
68999
Rezultat sume znamenki je: 41
Rezultat sume znamenki je: 5
Finalna suma znamenki je: 5
```

# [Zadatak 04](./Grupa-A/Zadatak-04.cpp)

Neka je dat sljedeci prototip strukture Igrica:
```cpp
struct Igrica {
	char* imeIgrice = nullptr;
	char* zanrIgrice = nullptr; // dozvoliti unos samo "War", "Strategy", "Open World"
	char izdavac[40] = "";
	int brojDijelova = 0;
	int brojKriticara = 0;
	int** ocjene = nullptr; // matrica brojDijelova * brojKriticara

	void unos();
	void ispis();
	void dealokacije();
};

float* getAverageByGenre(Igrica* niz, int velNiza);
```

Uraditi implementaciju zadanih funkcija clanica kao i globalne funkcije "getAverageByGenre" i po potrebi
definirati i implementirati pomocne globalne funkcije. Zatim, u main funkciji dodati sljedece stavke:
- Kreiranje dinamickog niza objekta tipa Igrica, velicine koju korisnik unese
- Poziv funkcije clanice unos (funkcije koja radi alokaciju i konzolni unos, paziti na unos zanra igrice)
  za sve elemente niza, <b>UNOS OCJENA MORA BITI RANDOM U VRIJEDNOSTIMA 1 DO 10</b> 
- Poziv funkcije clanice ispis za sve elemente niza
- Kreiranje i dohvacanje niza prosjecnih ocjena za zanrove
- Dealokacija niza prosjecnih ocjena za zanrove
- Poziv funkcije za dealokaciju
- Dealokacija dinamickog niza Igrica

<b>ZABRANJENO JE KORISTITI UGLASTE ZAGRADE OBAVEZNO KORISTITI ARITMETIKU
POKAZIVACA. PRIMJERI OUTPUTA SU ISPOD.</b>

<b>Primjer outputa za unos:</b>
```
Unesite broj Igrica:
3
Unesite ime igrice:
Call of Duty
Unesite zanr igrice:
War
Unesite ime izdavaca:
EA
Unesite broj dijelova igrice:
12
Unesite broj recenzenata igrice:
1
Unesite ime igrice:
Grand Theft Auto
Unesite zanr igrice:
Open World
Unesite ime izdavaca:
Rockstar
Unesite broj dijelova igrice:
5
Unesite broj recenzenata igrice:
2
Unesite ime igrice:
Red Dead Redemption
Unesite zanr igrice:
Open World
Unesite ime izdavaca:
Rockstar
Unesite broj dijelova igrice:
2
Unesite broj recenzenata igrice:
2
```

<b>Primjer outputa za ispis:</b>
```
==============================================================================
Ime igrice: Call of Duty
zanr igrice: War
Izdavac igrice: EA
Broj dijelova: 12
Broj kriticara: 1
-----------------------------------------------------
Dio 1 -> Kriticar 1 ocjena:   8 |
Dio 2 -> Kriticar 1 ocjena:   8 |
Dio 3 -> Kriticar 1 ocjena:   5 |
Dio 4 -> Kriticar 1 ocjena:   9 |
Dio 5 -> Kriticar 1 ocjena:   2 |
Dio 6 -> Kriticar 1 ocjena:   6 |
Dio 7 -> Kriticar 1 ocjena:   2 |
Dio 8 -> Kriticar 1 ocjena:   4 |
Dio 9 -> Kriticar 1 ocjena:   1 |
Dio 10 -> Kriticar 1 ocjena:   7 |
Dio 11 -> Kriticar 1 ocjena:  10 |
Dio 12 -> Kriticar 1 ocjena:   2 |
-----------------------------------------------------
==============================================================================
==============================================================================
Ime igrice: Grand Theft Auto
zanr igrice: Open World
Izdavac igrice: Rockstar
Broj dijelova: 5
Broj kriticara: 2
-----------------------------------------------------
Dio 1 -> Kriticar 1 ocjena:  10 | Kriticar 2 ocjena:   1 |
Dio 2 -> Kriticar 1 ocjena:   1 | Kriticar 2 ocjena:   2 |
Dio 3 -> Kriticar 1 ocjena:   8 | Kriticar 2 ocjena:   8 |
Dio 4 -> Kriticar 1 ocjena:   9 | Kriticar 2 ocjena:   5 |
Dio 5 -> Kriticar 1 ocjena:   6 | Kriticar 2 ocjena:   1 |
-----------------------------------------------------
==============================================================================
==============================================================================
Ime igrice: Red Dead Redemption
zanr igrice: Open World
Izdavac igrice: Rockstar
Broj dijelova: 2
Broj kriticara: 2
-----------------------------------------------------
Dio 1 -> Kriticar 1 ocjena:   5 | Kriticar 2 ocjena:   3 |
Dio 2 -> Kriticar 1 ocjena:   6 | Kriticar 2 ocjena:   7 |
-----------------------------------------------------
==============================================================================
```

<b>Primjer outputa za prosjek po zanru:</b>
```
============================================================
Prosjecne ocjene po zanrovima:
War: 5.33333
Strategy: 0
Open World: 5.175
============================================================
```

# Grupa B

# [Zadatak 01](./Grupa-B/Zadatak1.cpp)

Napišite program koji generira nasumične brojeve u opsegu od 200 do 900 (uključujući granične
vrijednosti) koristeći rand() funkciju.
- Ako broj sadrži samo parne cifre (npr. 424), dodajte ga na ukupnu sumu.
- Ako broj sadrži sve neparne cifre (npr. 571), program se prekida i taj broj ne ulazi u
sumu.
Na kraju programa, pored ukupne sume, ispisati koliko generisanih brojeva (bez obzira da li su sve
cifre parne ili ne) ima prvu cifru veću od zadnje cifre (npr. broj 731 zadovoljava, dok 137 ne).
Output aplikacije:

```
Generisani broj: 592 - Ne ulazi u sumu
Generisani broj: 691 - Ne ulazi u sumu
Generisani broj: 458 - Ne ulazi u sumu
Generisani broj: 635 - Ne ulazi u sumu
Generisani broj: 644 - Ulazi u sumu
Generisani broj: 644 - Ulazi u sumu
Generisani broj: 747 - Ne ulazi u sumu
Generisani broj: 304 - Ne ulazi u sumu
Generisani broj: 368 - Ne ulazi u sumu
Generisani broj: 482 - Ulazi u sumu
Generisani broj: 855 - Ne ulazi u sumu
Generisani broj: 578 - Ne ulazi u sumu
Generisani broj: 200 - Ulazi u sumu
Generisani broj: 378 - Ne ulazi u sumu
Generisani broj: 561 - Ne ulazi u sumu
Generisani broj: 688 - Ulazi u sumu
Generisani broj: 593 - Prekid programa (broj sadrzi samo neparne cifre)
Ukupna suma: 2658
Broj generisanih brojeva gdje je prva cifra veca od zadnje: 9
```
 
# [Zadatak 02](./Grupa-B/Zadatak2.cpp)

U sljedecoj postavci postoji mala greska s intervalom, treba ici od 1 do 13.
Provjerio na teamsu sa Berunom.

Napisati program koji simulira igru sa kartama u kojoj igrač povremeno izvlači karte iz špila.
Svaka karta ima vrijednost koja utiče na ukupan broj bodova igrača na sljedeći način:
1. Igra počinje sa 10 bodova
2. Igrač izvlači kartu nasumično iz špila sa kartama označenim brojevima od 1 do 14 (rand()
funkcija u opsegu od 1 do 14).
3. Karta koja je izvučena dodjeljuje sljedeće bodove:
	- <b>Brojevi od 1 do 10:</b> Karta sa brojem X daje X bodova (npr. Ako je radnom
generisana karta 2, ona donosi igraču 2 boda).
	- <b>Žandar (11), Dama (12), Kralj (13):</b> Svaka od ovih karata oduzima 1 bod od
ukupnog rezultata.
4. Igrač nakon svakog kruga može da odluči da li da nastavi igru ili da je završi:
	- Ako pritisne 'n', igra se završava, a ukupan broj bodova se prikazuje.
	- Ako pritisne 'y', igra se nastavlja, i igrač ponovo izvlači kartu.
5. Specijalni uslovi:
	- Ako igrač izvuče 4 Kralja (karta broj 13) zaredom, automatski gubi.
6. Igra se završava automatski:
	- Ako broj bodova igrača dostigne od 20 do 23 boda, igrač pobeđuje.
	- Ako broj bodova padne ispod 5, igrač gubi.
	- Ako broj bodova pređe 23 ili je konačan rezultat ispod 20 igrač gubi
7. Nakon svakog izvlačenja karte, igrač se pita da li želi da nastavi igru i prikazuju se njegovi
ukupni bodovi.

Output aplikacije:

```
Trenutni rezultat: 10 bodova
Izvucena karta: 5 (Bodovi: 5)
Zelite li nastaviti (y/n)? y
Trenutni rezultat: 15 bodova
Izvucena karta: 4 (Bodovi: 4)
Zelite li nastaviti (y/n)? y
Trenutni rezultat: 19 bodova
Izvucena karta: 12 (Bodovi: -1)
Zelite li nastaviti (y/n)? y
Trenutni rezultat: 18 bodova
Izvucena karta: 5 (Bodovi: 5)
Zelite li nastaviti (y/n)? y
Trenutni rezultat: 23 bodova
Pobijedili ste! Cestitamo!
```

```
Trenutni rezultat: 10 bodova
Izvucena karta: 12 (Bodovi: -1)
Zelite li nastaviti (y/n)? y
Trenutni rezultat: 9 bodova
Izvucena karta: 12 (Bodovi: -1)
Zelite li nastaviti (y/n)? y
Trenutni rezultat: 8 bodova
Izvucena karta: 12 (Bodovi: -1)
Zelite li nastaviti (y/n)? y
Trenutni rezultat: 7 bodova
Izvucena karta: 12 (Bodovi: -1)
Zelite li nastaviti (y/n)? y
Trenutni rezultat: 6 bodova
Izvucena karta: 12 (Bodovi: -1)
Zelite li nastaviti (y/n)? y
Trenutni rezultat: 5 bodova
Izvucena karta: 12 (Bodovi: -1)
Zelite li nastaviti (y/n)? y
Igra je gotova, izgubili ste!
```

Output gubitka nakon sto bacite 4 kralja za redom:

```
Trenutni rezultat: 10 bodova
Izvucena karta: 13 (Bodovi: -1)
Zelite li nastaviti (y/n)? y
Trenutni rezultat: 9 bodova
Izvucena karta: 13 (Bodovi: -1)
Zelite li nastaviti (y/n)? y
Trenutni rezultat: 8 bodova
Izvucena karta: 13 (Bodovi: -1)
Zelite li nastaviti (y/n)? y
Trenutni rezultat: 7 bodova
Izvucena karta: 13 (Bodovi: -1)
Automatski gubitak! 4 Kralja zaredom!
```

# [Zadatak 03](./Grupa-B/Zadatak3.cpp)

U sljedecoj postavci postoji mala greska u output-u aplikacije / primjeru ispisa.<br>
Umjesto djeljivosti sa 4 treba se gledati da li je broj prost (kao sto tekst kaze).<br>
Zbog cega u ovom zadatku necu navodit primjer ispisa, u pdf-u postavke to moze vidjet koga interesuje.<br>
Ovo sam takoder na teamsu provjerio sa Berunom.<br>

Napišite program koji od korisnika traži da unese broj u opsegu od 6 do 100 (uključujući granične
vrijednosti). Nakon što korisnik unese broj, program treba rekurzivno računati zbir svih njegovih
djelitelja (uključujući broj i 1). Zbir djelitelja broja se računa sve dok ne dođemo do broja koji ima
samo dva djelitelja (tj. broj koji je prost). Nakon toga, ispišite rezultat

<b>OBAVEZNO KORISTITI REKURZIVNE FUNKCIJE</b>

Primjeri ispisa koji nisu bili u postavci na ispitu:
```
Unesite broj (6 do 100): 9
Djelioci broja 9: 1 3 9
Zbir: 13
Djelitelji broja 13: 1 13
Broj 13 je prost!
```
```
Unesite broj (6 do 100): 64
Djelioci broja 64: 1 2 4 8 16 32 64
Zbir: 127
Djelitelji broja 127: 1 127
Broj 127 je prost!
```
Jos par brojeva koji ce raditi bez stack overflow-a: 13, 16, 25.

# [Zadatak 04](./Grupa-B/Zadatak4.cpp)

Neka je dat sljedeći prototip strukture Igrica:
```
#include <iostream>
using namespace std;

struct Knjiga {
	char* imeKnjige = nullptr;
	char* kategorijaKnjige = nullptr; // dozvoliti unos samo "Fiction", "Non-Fiction", "Mystery"
	char izdavac[40] = "";
	int brojDijelova = 0;
	int brojCitatelja = 0;
	int** ocjene = nullptr; // matrica brojDijelova* brojČitatelja
	void unos();
	void ispis();
	void dealokacije();
};

float* getAverageByCategory(Knjiga* niz, int velNiza);
```

Uraditi implementaciju zadanih funkcija članica kao i globalne funkcije “ getAverageByCategory“
i po potrebi definirati i implementirati pomoćne globalne funkcije. Zatim, u main funkciji dodati
sljedeće stavke:
- Kreiranje dinamičnog niza objekta tipa Knjiga, veličine koju korisnik unese
- Poziv funkcije članice unos (funkcije koja radi alokaciju i konzolni unos, paziti na unos
kategorije knjige) za sve elemente niza, <b>UNOS OCJENA MORA BITI RANDOM U
VRIJEDNOSTIMA 1 DO 5</b>
- Poziv funkcije članice ispis za sve elemente niza
- Kreiranje i dohvaćanje niza prosječnih ocjena za sve 3 kategorije
- Ispis dinamičkog niza prosječnih ocjena za kategorije
- Dealokacija niza prosječnih ocjena kategorija
- Poziv funkcije za dealokaciju
- Dealokacija dinamičkog niza Knjiga

<b>ZABRANJENO JE KORISTITI UGLASTE ZAGRADE. OBAVEZNO KORISTITI ARITMETIKU POKAZIVAČA. PRIMJERI OUTPUTA SU ISPOD.</b>

<b>Primjer outputa za unos:</b>
```
Unesite broj knjiga: 2
Unesite ime knjige: Prohujalo s vihorom
Unesite kategoriju knjige (Fiction, Non-Fiction, Mystery): Non-Fiction
Unesite izdavaca: Svjetlost
Unesite broj dijelova: 4
Unesite broj citatelja: 2
Unesite ime knjige: Harry Potter
Unesite kategoriju knjige (Fiction, Non-Fiction, Mystery): Fiction
Unesite izdavaca: Alfa Naklada
Unesite broj dijelova: 3
Unesite broj citatelja: 1
```

<b>Ispis knjige:</b>
```
Podaci o knjigama:
Ime knjige: Prohujalo s vihorom
Kategorija: Non-Fiction
Izdavac: Svjetlost
Broj dijelova: 4
Broj citatelja: 2
Ocjene:
Dio 1 : Citatelj 1 : 1 | Citatelj 2 : 2 |
Dio 2 : Citatelj 1 : 5 | Citatelj 2 : 3	|
Dio 3 : Citatelj 1 : 2 | Citatelj 2 : 5	|
Dio 4 : Citatelj 1 : 2 | Citatelj 2 : 4	|
Ime knjige: Harry Potter
Kategorija: Fiction
Izdavac: Alfa Naklada
Broj dijelova: 3
Broj citatelja: 1
Ocjene:
Dio 1 : Citatelj 1 : 5 |
Dio 2 : Citatelj 1 : 3 |
Dio 3 : Citatelj 1 : 5 |
```

<b>Primjer outputa za prosjek po kategoriji:</b>
```
Prosjecne ocjene po kategorijama:
Fiction: 4.33333
Non-Fiction: 3
Mystery: 0
```

# Grupa C

# [Zadatak 01](./Grupa-C/Zadatak-01.cpp)

Napisati program koji simulira bacanje 5 kockica, ali sa sljedećim pravilima:
1. Kockice imaju vrijednosti od 1 do 6.
2. Ponavljati bacanje kockica sve dok se ne dobiju tačno tri ponavljanja jedne vrijednosti i dva
ponavljanja druge vrijednosti (npr. tri petice i dvije trojke). Redoslijed ispisanih vrijednosti
kockica nije bitan.
3. Ispisati svako bacanje zasebno.
4. Na kraju ispisati ukupan broj bacanja, kao i posljednje izvučene vrijednosti kockica.

<b>Primjer koristenja:</b>
```
Bacanje 10: 6 1 2 6 6
Bacanje 11: 1 2 5 1 6
Bacanje 12: 3 1 4 4 4
Bacanje 13: 3 3 4 6 6
Bacanje 14: 4 2 3 6 6
Bacanje 15: 6 1 3 1 3
Bacanje 16: 2 1 2 3 6
Bacanje 17: 3 3 1 1 2
Bacanje 18: 5 3 6 2 2
Bacanje 19: 2 1 4 2 2
Bacanje 20: 5 6 6 2 1
Bacanje 21: 4 4 2 2 1
Bacanje 22: 5 4 1 5 4
Bacanje 23: 5 1 6 5 1
Bacanje 24: 1 1 1 4 3
Bacanje 25: 6 5 2 1 6
Bacanje 26: 6 1 1 6 2
Bacanje 27: 1 2 1 3 2
Bacanje 28: 4 4 6 5 6
Bacanje 29: 3 5 2 1 5
Bacanje 30: 2 4 1 6 3
Bacanje 31: 5 6 1 2 1
Bacanje 32: 6 3 2 2 6
Bacanje 33: 6 4 4 3 1
Bacanje 34: 6 5 1 5 6
Bacanje 35: 1 4 1 2 6
Bacanje 36: 5 2 3 3 1
Bacanje 37: 5 5 3 4 4
Bacanje 38: 6 1 1 1 4
Bacanje 39: 4 1 3 2 1
Bacanje 40: 4 6 5 5 6
Bacanje 41: 2 2 1 1 1
Ukupan broj bacanja: 41
Posljednje izvucene vrijednosti: 2 2 1 1 1
```

# [Zadatak 02](./Grupa-C/Zadatak-02.cpp)

Napisati program koji omogućuje korisniku unos jedne od 3 opcije:
- 1 - Odabir ove opcije primorava korisnika na unos dvije cjelobrojne vrijednosti m i n.
Program treba ispisati sve parne brojeve u intervalu m i n.
- 2 - Odabir ove opcije primorava korisnika na unos dvije cjelobrojne varijable m i n. Program
treba da ispiše sve proste brojeve koji se nalaze između m i n.
- 3 - Odabir ove opcije označava izlaz iz programa.
Ukoliko korisnik odabere opciju koja nije niti jedna od tri navedene, program se mora nastaviti
izvršavati.

<b>Primjer koristenja:</b>
```
Odaberite opciju:
1 - Ispis parnih brojeva u intervalu [m, n]
2 - Ispis prostih brojeva u intervalu [m, n]
3 - Izlaz iz programa
Unos opcije: 1
Unesite dva cijela broj m i n: 10 50
10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50
Odaberite opciju:
1 - Ispis parnih brojeva u intervalu [m, n]
2 - Ispis prostih brojeva u intervalu [m, n]
3 - Izlaz iz programa
Unos opcije: 2
Unesite dva cijela broj m i n: 10 50
11 13 17 19 23 29 31 37 41 43 47
Odaberite opciju:
1 - Ispis parnih brojeva u intervalu [m, n]
2 - Ispis prostih brojeva u intervalu [m, n]
3 - Izlaz iz programa
Unos opcije: 3
Izlazak iz programa...
```

# [Zadatak 03](./Grupa-C/Zadatak-03.cpp)

Napišite program u kojem je potrebno unijeti veličinu dinamičkog niza cjelobrojnih vrijednosti.
Nakon unosa veličine niza, program treba da uradi dinamičku alokaciju niza. Zatim je potrebno da
se elementi niza popune sa slučajnim vrijednostima u opsegu od 0 do 99999 [uključujući i granične
vrijednosti] i to isključivo pomoću rekurzivne funkcije. Zatim, definirati rekurzivnu funkciju za
prebrojavanje broja cifara u broju, te zatim pronaći (nerekurzivno) broj sa najvećim brojem cifara
i broj sa najmanjim brojem cifara te ispisati ih oba. Ukoliko više brojeva ima isti broj cifara, vratiti
onaj broj koji je prvi po redoslijedu.

<b>Obavezno uraditi sve neophodne dealokacije.</b><br>
<b>U zadatku obavezno koristiti operator '*' umjesto '[]' prilikom dereferenciranja
adresa/pokazivača. Također, ne smije se koristiti logaritamska funkcija za prebrojavanje
broja cifara.</b>

<b>Primjer koristenja:</b>
```
Unesite velicinu niza: 20
Generisani niz: 10775 10348 23021 2329 5372 14292 950 11003 23516 16093 14300 7684 4754 12425 20909 29530 23673 24154 27118 30906
Broj sa najvise cifara: 10775
Broj sa najmanje cifara: 950
```

# [Zadatak 04](./Grupa-C/Zadatak-04.cpp)

Neka je dat sljedeći prototip strukture Glumac:
```
struct Glumac {
 char* ime = nullptr;
 char* prezime = nullptr;
 char drzava[40] = "";
 int brojFilmova = 0; // označava broj redova u dinamičkoj matrici
 int brojKorisnika = 0; // označava broj kolonu u dinamičkoj matrici
 int** ocjene = nullptr; // matrica dimenzija (brojFilmova × brojKorisnika)

 void unos(); // funkcija clanica za alokaciju i unos vrijednosti
 float* getAveragesByUsers();
 void ispis();
 void dealokacije();
};
```
Uraditi implementaciju zadanih funkcija članica i po potrebi definirati i implementirati pomoćne
globalne funkcije. Zatim, u main funkciji dodati sljedeće stavke:
- Kreiranje dinamičkog objekta tipa Glumac
- Poziv funkcije članice unos:
	- <b>Napomena: Obavezno postaviti vrijednosti matrice „ocjene“ na slučajne
vrijednosti [opseg od 1 do 10]. Ocjene se ne unose ručno.</b>
	- Sve ostale atribute [ime, prezime, ...] je potrebno ručno unijeti preko tastature.
- Poziv funkcije članice ispis
- Dohvaćanje niza prosječnih ocjena glumca za svakog od korisnika (<b>koristiti dinamičku
memoriju</b>).
- Poziv funkcije za dealokaciju objekta.
- Dealokacija niza prosječnih ocjena.

<b>Obavezno uraditi sve neophodne dealokacije.</b>
<b>U zadatku obavezno koristiti operator '*' umjesto '[]' prilikom dereferenciranja
adresa/pokazivača</b>

<b>Primjer koristenja:</b>
```
Unesite ime:
Ryan
Unesite prezime:
Gosling
Unesite drzavu:
Kanada
Unesite broj filmova:
13
Unesite broj korisnika:
4
Ime i prezime: Ryan Gosling
Drzava: Kanada
Broj filmova: 13
Broj korisnika: 4
-------------------------------------------
 2  8  5  1
10  5  9  9
 3  5  6  6
 2  8  2  2
 6  3  8  7
 2  5  3  4
 3  3  2  7
 9  6  8  7
 2  9 10  3
 8 10  6  5
 4  2  3  4
 4  5  2  2
 4  9  8  5
-------------------------------------------
Ispis prosjecnih ocjena glumca po svakom korisniku:
4.53846 6 5.53846 4.76923
```