# Grupa A

# [Zadatak 01](./Grupa-A/Zadatak-01.cpp)

Napisite program gdje se uzastopno generiraju brojevi (koristeci <b>rand()</b> funkciju) koji nemaju unutar sebe cifre 5 i 3. Ako se dobije broj koji u sebi sadrzi cifru 5, program prestaje sa izvrsavanjem. Ako se dobije broj koji sadrzi unutar sebe cifru 3, taj broj se ne treba uzeti u razmatranje, ali se izvrsavanje programa nastavlja. Nakon sto se dobije broj koji sadrzi cifru 5, program treba izracunati prosjek za sve prve cifre prethodno generiranih brojeva (broj sa kojim se zavrsava program ne uzeti u razmatranje pri racunanju prosjeka).

Output aplikacije:

```
Unesite broj:
1247
Prva cifra unesenog broja je: 1
Unesite broj:
226
Prva cifra unesenog broja je: 2
Unesite broj:
872
Prva cifra unesenog broja je: 8
Unesite broj:
1234789
Uneseni broj se ne racuna
Unesite broj:
899
Prva cifra unesenog broja je: 8
Unesite broj:
1509
Uneseni broj se ne racuna
==============================
Ukupni prosjek prvih cifri je: 4.75
```

# [Zadatak 02](./Grupa-A/Zadatak-02.cpp)

Napisite program koji treba da simulira igru sa kockom za bacanje. Pravila igre su:

- Kocka moze da stane na broj od 1 do 6 (koristiti <b>rand()</b> funkciju)
- Igrac na pocetku ima rezultat od 0
- Ako igrac pritisne 'n' igra se prekida i ukupni rezultat igraca se prikazuje 
- Ako igrac pritisne 'y' igra se nastavlja i igrac opet baca kocku
- Sa svakim bacanjem kocke, rezultat bacanja se dodaje na rezultat od igraca
- Igra se nastavlja dok igrac ne pritisne 'n' ili dok njegov rezultat ne prekoraci 30
- Ako je nakon sto korisnik pritisne 'y' ukupni rezultat igraca iznad 30 igra se automatski prekida i <b>igrac je izgubio</b>
- Ako igrac uspije da ima rezultat u rangu od 28 do 30 <b>igrac je pobijedio</b>
- Ako igrac pritisne 'n' i njegov rezultat je manji od 28 <b>igrac je izgubio</b>
- Ako igrac tri puta za redom na bacanju dobije broj <i>6</i> <b>igrac je pobijedio</b> neovisno o njegovom rezultatu
- Ako igrac tri puta za redom na bacanju dobije broj <i>1</i> <b>igrac je izgubio</b> neovisno o njegovom rezultatu

Output pobjede zbog rezultata u rangu 28 do 30:

```
Unesite y ako zelite igrati ili n ako ne zelite!
k
Ups, unjeli ste pogresan znak!
Unesite y ako zelite igrati ili n ako ne zelite!
y
Kocka je bacena... Kockica je pala na: 1
Vas novi rezultat je: 1
Unesite y ako zelite igrati ili n ako ne zelite!
y
Kocka je bacena... Kockica je pala na: 2
Vas novi rezultat je: 3
Unesite y ako zelite igrati ili n ako ne zelite!
y
Kocka je bacena... Kockica je pala na: 2
Vas novi rezultat je: 5
Unesite y ako zelite igrati ili n ako ne zelite!
y
Kocka je bacena... Kockica je pala na: 4
Vas novi rezultat je: 9
Unesite y ako zelite igrati ili n ako ne zelite!
y
Kocka je bacena... Kockica je pala na: 6
Vas novi rezultat je: 15
Unesite y ako zelite igrati ili n ako ne zelite!
y
Kocka je bacena... Kockica je pala na: 5
Vas novi rezultat je: 20
Unesite y ako zelite igrati ili n ako ne zelite!
y
Kocka je bacena... Kockica je pala na: 3
Vas novi rezultat je: 23
Unesite y ako zelite igrati ili n ako ne zelite!
y
Kocka je bacena... Kockica je pala na: 1
Vas novi rezultat je: 24
Unesite y ako zelite igrati ili n ako ne zelite!
```
Nazalost nemam sliku kako je zavrsio primjer output-a pa sam ovdje stavio samo sta je na slici.

# [Zadatak 03](./Grupa-A/Zadatak-03.cpp)

Napisite program koji trazi da kreirate dinamicki niz velicine koju korisnik odredi (od 1 do 50). Nakon sto korisnik unese velicinu, rekurzivno unesite elemente u niz (koristite <b>radn()</b> funkciju). Potom rekurzivnom funkcijom pronadite najveci broj u nizu, najmanji broj u nizu i ispisite prosjek niza (mozete koristiti vise rekurzivnih funkcija).

<b>ZABRANJENO JE KORISTITI UGLASTE ZAGRADE. OBAVEZNO KORISTITI ARITMETIKU POKAZIVACA. OBAVEZNO KORISTITI REKURZIVNE FUNKCIJE</b>

Output aplikacije:

```
Unesite velicinu niza:
7
Unesite element na indexu: 0
8
Unesite element na indexu: 1
-5
Unesite element na indexu: 2
99
Unesite element na indexu: 3
3
Unesite element na indexu: 4
32
Unesite element na indexu: 5
0
Unesite element na indexu: 6
12
Najmanji broj u nizu je: -5
Najveci broj u nizu je: 99
Prosjek niza je: 21.2857
```

# [Zadatak 04](./Grupa-A/Zadatak-04.cpp)

Neka je dat sljedeci prototip strukture Serija:

```
struct Serija {
	char* imeSerije = nullptr;
	char* zanrSerije = nullptr; // dozvoliti unos samo "Crime", "Romance", "Comedy"
	char drzavaSnimanja[40] = "";
	int brojEpizoda = 0;
	int brojSezona = 0;
	int** ocjene = nullptr; // matrica dimenzija (brojSezona x brojEpizoda)

	void unos();
	float* getAverageBySesons();
	void ispis();
	void dealokacija();
};
```

Uraditi implementaciju zadanih funkcija clanica i po potrebi definirati i implementirati pomocne globalne funkcije. Zatim, u main funkciji dodati sljedece stavke:
- Kreiranje dinamickog niza objekta tipa Serija, velicine koju korisnik unese
- Poziv funkcije clanice unos (funkcije koja radi alokaciju i konzolni unos, paziti na unos zanra serije) za sve elemente niza
- Poziv funkcije clanice ispis za sve elemente niza
- Kreiranje i dohvacanje niza prosjecnih ocjena svih serija za svaku sezonu (koristiti dinamicku memoriju)
- Ispis dinamickog niza prosjecnih ocjena za sezone
- Dealokacija niza prosjecnih ocjena
- Poziv funkcije za dealokaciju
- Dealokacija dinamickog niza Serija

<b>ZABRANJENO JE KORISTITI UGLASTE ZAGRADE. OBAVEZNO KORISTITI ARITMETIKU POKAZIVACA. PRIMJERI OUTPUTA SU ISPOD.</b>

Ja nemam slike tog primjer-a output-a pa sam radio na svoju ruku sta mislim da je bilo na osnovu struktura koje su prije dolazile.

```
Unesite broj serija: 1
Ime serije: Serija 1
Zanr serije: Comedy
Drzava snimanja serije: BiH
Unesite broj sezona serije: 2
Unesite broj epizoda serije: 3
Unesite ocjenu za sezonu 1 epizodu 1: 1
Unesite ocjenu za sezonu 1 epizodu 2: 2
Unesite ocjenu za sezonu 1 epizodu 3: 3

Unesite ocjenu za sezonu 2 epizodu 1: 4
Unesite ocjenu za sezonu 2 epizodu 2: 5
Unesite ocjenu za sezonu 2 epizodu 3: 6

Ime serije: Serija 1
Zanr serije: Comedy
Drzava snimanja serije: BiH
Broj sezona serije: 2
Broj epizoda serije: 3
--------------------------------------
1 2 3
4 5 6
--------------------------------------
Prosjek ocjena za svaku sezonu: 2 5
```

# Grupa B

# [Zadatak 01](./Grupa-B/Zadatak-01.cpp)

Napisite program koji nasumicno generise brojeve koristeci rand() u rasponu od 0 do 9999. Pravila su sljedeca:
- Ako je prva cifra 5, program prestaje s izvrsavanjem.
- Ako je prosjek zbroja cifara (primjer prosjeka zbroja cifara: broj 22 = 2 + 2 = 4 / (broj cifara = 2) = 2) veci od 4, taj broj se preskace i generise se novi broj.
- Svi ostali brojevi se uzimaju u obzir.

Kada program zavrsi izracunava se prosjek svih posljednjih cifara ranije prihvacenih brojeva (broj koji zavrsava program ne uzima se u obzir).

<b>Primjer koristenja:</b>

```
Preskacemo broj: 9856
Generisani broj: 1038
===================================
Preskacemo broj: 744
Generisani broj: 6712
===================================
Generisani broj: 4028
===================================
Generisani broj: 1921
===================================
Preskacemo broj: 3826
Preskacemo broj: 6417
Generisani broj: 1256
===================================
Generisani broj: 4220
===================================
Preskacemo broj: 2195
Preskacemo broj: 9290
Preskacemo broj: 4492
Preskacemo broj: 4646
Preskacemo broj: 3366
Preskacemo broj: 4724
Preskacemo broj: 2764
Generisani broj: 5771
===================================
Ukupni prosjek zadnjih cifri je: 4.16667
```

# [Zadatak 02](./Grupa-B/Zadatak-02.cpp)

Napisite program koji simulira igru pogadanja broja prema sljedecim pravilima:
- Racunar nasumicno generise broj izmedu 1 i 50 (koristit rand()).
- Igrac zapocinje sa 0 bodova.
- Igrac unosi broj i pokusava pogoditi nasumicno generisani broj.
- Ako je uneseni broj tacan, igrac pobjeduje i prikazuje se poruka: "Pogodili ste broj!".
- Ako igrac promasi broj, dobija sljedece bodove: 
- - 3 boda ako je razlika izmedu brojeva manja ili jednaka 3.
- - 2 boda ako je razlika izmedu 4 i 7.
- - 1 bod ako je razlika izmedu 8 i 10.
- - 0 bodova ako je razlika veca od 10.

Ako igrac nakon tri pokusaja ne pogodi broj, igra zavrsava i igrac dobija prikaz bodova. Ako igrac unese 1, igra se prekida i igrac dobija prikaz osvojenih bodova.

<b>Primjer koristenja:</b>
```
Pogodi broj (1 do 50), ili unesi -1 da zavrsis: 38
Razlika je izmedu 4 i 7! Dobili ste 2 boda!
Trenutni rezultat: 2 bodova.
Pogodi broj (1 do 50), ili unesi -1 da zavrsis: 48
Razlika je izmedu 4 i 7! Dobili ste 2 boda!
Trenutni rezultat: 4 bodova.
Pogodi broj (1 do 50), ili unesi -1 da zavrsis: 46
Razlika je manja ili jednaka 3! Dobili ste 3 boda!
Tri puta zaredom niste pogodili! Igra je zavrsena.Broj osvojenih bodova: 7
```

```
Pogodi broj (1 do 50), ili unesi -1 da zavrsis: 35
Razlika je izmedu 8 i 10! Dobili ste 1 bod!
Trenutni rezultat: 1 bodova.
Pogodi broj (1 do 50), ili unesi -1 da zavrsis: 38
Razlika je izmedu 4 i 7! Dobili ste 2 boda!
Trenutni rezultat: 3 bodova.
Pogodi broj (1 do 50), ili unesi -1 da zavrsis: 43
Tacan broj!
```

# [Zadatak 03](./Grupa-B/Zadatak-03.cpp)

Napisite program u kojem je potrebno unijeti velicinu dinamickog niza cjelobrojnih vrijednosti. Nakon unosa velicine niza, program treba da uradi dinamicku alokaciju niza. Zatim je potrebno da se elementi niza popune sa slucajnim vrijednostima u opsegu od 1 do 40 [ukljucujuci i granicne vrijednosti] <b>i to iskljucivo pomocu rekurzivne funkcije.</b> Zatim, rekurzivnom funkcijom pronadite najveci neparni broj u nizu i broj neparnih brojeva u nizu (koristite vise rekurzivnih funkcija).

<b>Obavezno uraditi sve neophodne dealokacije.</b><br>
<b> U zadatku obavezno koristiti operator '*' umjesto '[]' prilikom dereferenciranja adresa/pokazivaca.</b>

<b>Primjer koristenja:</b>
```
Unesite velicinu niza (izmedju 5 i 100): 10
Elementi niza su: 62 5 52 76 7 37 57 91 3 87
Najveci neparni broj u nizu je: 91
Broj parnih brojeva u nizu je: 3
```

# [Zadatak 04](./Grupa-B/Zadatak-04.cpp)

Neka je dat sljedeci prototip strukture Student:

```
struct Student {
	char* ime = nullptr;
	char* prezime = nullptr;
	int brojIndeksa = 0;
	char skola[40] = "";
	int brojSemestra = 0; // oznacava broj redova u dinamickoj matrici
	int brojUplata = 0; // oznacava broj kolona u dinamickoj matrici
	int** uplate = nullptr; // matrica dimenzija (brojSemestra x brojUplata)

	void unos();
	void ispis();
	void dealokacija();
	float* izracunajProsjekPoSemestrima();
};
```

Uraditi implementaciju zadanih funkcija clanica i po potrebi definirati i implementirati pomocne globalne funkcije. Zatim, u main funkciju dodati sljedece stavke:
- Kreiranje dinamickog objekta tipa <i>Student</i>
- Poziv funkcije clanice unos:
- - <b>Napomena: Obavezno postaviti vrijednost matrice "uplate" na slucajne vrijednosti [opseg od 100 do 1000]. uplate se ne unose rucno.</b>
  - Sve ostale atribute [ime, prezime, ...] je potrebno runco unijeti preko tastature
- Poziv funkcije clanice ispis
- Dohvacanje niza prosjecnih uplata student za svaki od semestara (<b>koristiti dinamicku memoriju</b>).
- Poziv funkcije za dealokaciju objekta.
- Dealokacija niza prosjecnih uplata.

<b>Obavezno uraditi sve neophodne dealokacije.</b><br>
<b> U zadatku obavezno koristiti operator '*' umjesto '[]' prilikom dereferenciranja adresa/pokazivaca.</b>

Ja nemam slike tog primjer-a output-a pa sam radio na svoju ruku sta mislim da je bilo na osnovu struktura koje su prije dolazile.

```
Unesite ime: Ime
Unesite prezime: Prezime
Unesite broj indeksa: 240001
Unesite skola: FIT
Unesite broj semestra: 3
Unesite broj uplata: 4
Ime studenta: Ime
Prezime studenta: Prezime
Broj indeksa studenta: 240001
Skola studenta: FIT
Broj semestra studenta: 3
Broj uplata studenta: 4
----------------------
488 810 813 757
472 169 447 380
641 830 750 583
----------------------
Prosjek uplata po semestru: 717 367 701
```

# Grupa C

# [Zadatak 01](./Grupa-C/Zadatak-01.cpp)

Napisati program koji simulira bacanje 6 kockica, ali sa sljedecim pravilima:
1. Kockice imaju vrijednosti od 1 do 6.
2. Ponavljati bacanje kockica sve dok se ne dobiju tacno tri ponavljanja jedne vrijednosti i tri ponavljanja druge vrijednosti (npr. tri petice i tri trojke). Redoslijed ispisanih vrijednosti kockica nije bitan.
3. Ispisati svako bacanje kockica.
4. Na kraju ispisati ukupan broj bacanja, kao i posljednje izvucene vrijednosti kockica.

<b>Primjer koristenja:</b>

Primjer nije kao slika sa ispita, posto je ona bila samo polovicna.

```
Bacanje 1: 3 5 4 3 6 6
Bacanje 2: 1 6 1 5 3 1
Bacanje 3: 6 2 2 4 2 1
Bacanje 4: 4 3 4 6 6 6
Bacanje 5: 1 1 5 2 4 6
Bacanje 6: 6 5 3 6 2 4
Bacanje 7: 2 1 5 4 2 5
Bacanje 8: 2 6 1 4 1 6
Bacanje 9: 3 5 3 1 1 6
Bacanje 10: 5 1 4 3 6 6
Bacanje 11: 3 6 3 2 4 4
Bacanje 12: 4 4 3 5 4 1
Bacanje 13: 2 3 3 2 2 3
Ukupan broj bacanja: 13
Posljednje izvucene vrijednosti: 2 3 3 2 2 3
```

Small side note, ovaj zadatak je veoma slican 1. zadatku sa roka 26.08.2024.

# Zadatak 02
Nemam slike za ovaj zadatak, cuo sam da je bila matrica gdje se trazilo nesto u vezi reda, kolone i prosjeka na dijagonali.

# Zadatak 03
Nemam slike za ovaj zadatak, cuo sam da je veoma slican rekurziji iz grupe A i B, samo sto je trebalo naci najveci i najmanji prost broj u nizu rekurzivno.

# Zadatak 04
Nemam slike za ovaj zadatak, cuo sam da je veoma slican ostalim strukturama. 
Struktura glumac sa ime, prezime, broj filmova, broj gledaoca i opet matrica ocjena.
