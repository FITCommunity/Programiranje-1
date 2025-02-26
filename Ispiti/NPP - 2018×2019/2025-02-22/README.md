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