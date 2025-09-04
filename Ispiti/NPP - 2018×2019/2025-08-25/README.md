# Grupa 1

# [Zadatak 01](./Zadatak-01.cpp)

Napisite program koji generise nasumicne brojeve od 100 do 500. 
**Za generisanje brojeva obavezno koristiti rand() funkciju**. 
Ako broj sadrzi cifru 6, ispisite ga, ali ga ne dodajete na sumu.
Ako broj ne sadrzi cifru 6, broj dodati u sumu ali nemojte ga ispisati.
Program zavrsava kada se pojavi broj manji od 120.
Na kraju ispisite sumu i broj generisanih brojeva sa cifrom 6.

Output aplikacije:
```
Broj sa cifrom 6: 496
Broj sa cifrom 6: 336
Broj sa cifrom 6: 436
Broj sa cifrom 6: 226

KRAJ PROGRAMA
Suma brojeva bez cifre 6: 4693
Ukupno brojeva sa cifrom 6: 4
```

# [Zadatak 02](./Zadatak-02.cpp)

Napisite program koji treba da simulira igru kamen-papir-makaze. Pravila igre su:
- Igrac unosi kamen (K), Papir (P) ili Makaze (M).
- Racunar pomocu rand funkcije takoder bira jedan od 3 znaka.
- Igrac pocinje sa 3 bodva.
- Postuje se standardna pravila: kamen > makaze; makaze > papir; papair > kamen.
- Ako igrac pobijedi dobije bod.
- Ako igrac izgubi oduzima mu se bod.
- Ako su isti znak kod igraca i racunara ne dobiva se niti se oduzima bod, samo se ispisuje poruka.
- Postuje se standardna pravila: kamen > makaze; makaze > papir; papair > kamen.
- Igra se zavrsava ako igrac dosegne 5 bodova -> **Pobjeda**!
- Igra se zavrsava ako igrac dosegne 0 bodova -> **Poraz**!
- Igra se zavrsava ako igrac pritisne "Q" tipku -> **Poraz**!

Output automatske pobjede zbog dostignutog broja bodova 5:
```
=== Igra Kamen-Papir-Makaze ===
Unesi K (kamen), P (papir), M (makaze), Q (prekid igre)
Pocetni bodovi: 3

Unesi potez: m
Kompjuter je izabrao: P
Pobjedio si! (+1)
Trenutni bodovi: 4
```

Nazalost nemam sliku kako je zavrsio primjer output-a pa sam ovdje stavio samo sta je na slici.

# [Zadatak 03](./Zadatak-03.cpp)

Napisite program koji rekurzivno kreira birnarni broj od dekadskog broja. 
**Unos od korisnika se simulira koristenjem rand() funkcije.**
Broj treba biti izmedu 50 i 2000, a program ispisuje njegov binarni ekvivalent npr. broj 1883 postaje 11101011011.

**OBAVEZNO KORISTITI REKURZIVNE FUNKCIJE**

Output aplikacije:
```
Generisani broj: 608
Binarna reprezentacija: 1001100000
```

# [Zadatak 04](./Zadatak-04.cpp)

Neka je dat sljedeci prototip strukture Jelo:

```cpp
struct Jelo {
	char* imeJela = nullptr;
	char* kategorijaJela = nullptr; // dozvoliti unos samo "Tjestenina", "Tradicionalna", "Fast Food"
	char imeKuhara[40] = "";
	int brojVarijacija = 0;
	int brojKriticara = 0;
	int** ocjene = nullptr;
};

float* getAverageByCategory(Jelo* niz, int velNiza);
```

Uraditi implementaciju zadanih funkcija clanica kao i globalne funkcije *"getAverageByCategory"* i po potrebi
definirati i implementirati pomocne globalne funckije.

Zatim, u main funkciji dodati sljedece stavke:
- Kreiranje dinamickog niza objekta tipa Jelo, velicine koju korisnik unese
- Poziv funkcije clanice unos (funkcije koja radi alokaciju i konzolni unos, paziti na unos kategorije jela) za sve elemente niza, **UNOS OCJENA MORA BITI RANDOM U VRIJEDNOSTIMA 1 DO 10**
- Poziv funkcije clanice ispis za sve elemente niza
- Kreiranje i dohvacanje niza prosjecnih ocjena za sve 3 kategorija jela
- Ispis dinamickog niza prosjecnih ocjena za kategorije jela
- Dealokacija niza prosjecnih ocjena kategorija
- Poziv funkcije za dealokaciju
- Dealokacija dinamickog niza Jela

**ZABRANJENO JE KORISTITI UGLASTE ZAGRADE. OBAVEZNO KORISTITI ARITMETIKU POKAZIVACA. PRIMJERI OUTPUT SU ISPID.**

Primjer outputa za unos:
```
Unesite broj Jela:
3
Unesite ime Jela:
Sphageti
Unesite kategoriju Jela:
Italijansko
Pogresna kategorija! Kategorija moze biti samo Tjestenina, Tradicionalna ili Fast Food
Tjestenina
Unesite ime kuhara:
Berun
Unesite broj varijacija jela:
2
Unesite broj recenzenata za jelo:
3
Unesite ime Jela:
Begova Corba
Unesite kategoriju jela:
Tradicionalna
Unesite ime kuhara:
Elmir
```

Nazalost nemam sliku kako je zavrsio primjer output-a pa sam ovdje stavio samo sta je na slici.