# Grupa A

# [Zadatak 01](./Grupa-A-Zadatak-01.cpp)

Postujuci sve faze procesa programiranja (dijagram toka), napisati program koji simulira bacanje 5 kockica, ali sa sljedecim pravilima:
1. Kockice imaju vrijednosti od 1 do 6.
2. Ponavljati bacanje kockica sve dok se ne dobiju tacno dva ponavljanja jedne vrijednosti i dva ponavljanja druge vrijednosti (npr. dvije petice i dvije trojke). Preostala peta kockica treba imaju drugaciju vrijednost (npr. cetiri).
3. Ispisati svako bacanje kockica.
4. Na kraju ispisati ukupan broj bacanja, kao i posljednje izvucene vrijednosti kockica.

Primjer koristenja:
```
Bacanje 1: 3 3 6 1 4
Bacanje 2: 3 4 5 2 1
Bacanje 3: 5 2 4 3 4
Bacanje 4: 5 3 2 1 5
Bacanje 5: 5 5 4 3 4
Ukupan broj bacanja: 5
Posljednje izvucene vrijednosti: 5 5 4 3 4
```

# [Zadatak 02](./Grupa-A-Zadatak-02.cpp)

Napisati program u kojem korisnik unosi broj redova i kolona matrice, pri cemu broj redova i kolona mora biti veci od 0. Dinamicki se alocira memorija za matricu odgovarajucih dimenzija, koja se zatim popunjava slucajnim vrijednostima iz opsega [0-9]. Zatum se formira druga matrica istih dimenzija, gdje se sve vrijednosti u svakom redu postavljaju na maksimalnu vrijednost odgovarajuceg reda iz prve matrice. Obavezno uraditi sve neophodne dealokacije.

Primjer koristenja:
```
Unesite broj redova: 5
Unesite broj kolona: 5
Prva matrica:
9 9 5 1 7
6 8 6 0 9
1 4 2 5 8
3 3 3 2 3
Druga matrica (popunjena maksimalnim vrijednostima iz redova prve matrice):
9 9 9 9 9
9 9 9 9 9
8 8 8 8 8
8 8 8 8 8
3 3 3 3 3
```

# [Zadatak 03](./Grupa-A-Zadatak-03.cpp)

Napisite program koji omogucava korisniku unos dimenzija matrice (broj redova i kolona) uz ogranicenje da broj redova i kolona mora biti veci od 0. Nakon unosa dimenzija, potrebno je unijeti poziciju ciljanog mjesta unutar matrice, te vrijednost target (mora biti veca od 0) koja ce biti pohranjena na ciljanom mjestu. Zatim je potrebno formirati matricu (dinamicka alokacija) datih dimenzija i popuniti je na sljedeci nacin:
- Vrijednost target pohraniti na ciljano mjesto u matrici.
- Svako susjedno mjesto u odnosu na ciljano mjesto mora imati vrijednost manju za 1.<span style="color:red">(ukljucujuci susjedna mjesta na dijagonali)</span>
- Sto se vise vise udaljavamo od ciljanog mjesta, to su vrijednosti elemenata manje [pogledati sliku ispod].
- Najmanja moguca vrijednost u matrici je 0.

Ispisati formiranu matricu i uraditi sve neophodne dealokacije.
Primjer koristenja:
```
Unesite broj redova: 10
Unesite broj kolona: 10
Unesite red ciljanog mjesta: 4
Unesite kolonu ciljanog mjesta: 4
Unesite vrijednost target (veca od 0): 5
Formirana matrica:
1 1 1 1 1 1 1 1 1 0
1 2 2 2 2 2 2 2 1 0
1 2 3 3 3 3 3 2 1 0
1 2 3 4 4 4 3 2 1 0
1 2 3 4 5 4 3 2 1 0
1 2 3 4 4 4 3 2 1 0
1 2 3 3 3 3 3 2 1 0
1 2 2 2 2 2 2 2 1 0
1 1 1 1 1 1 1 1 1 0
0 0 0 0 0 0 0 0 0 0
```

# [Zadatak 04](./Grupa-A-Zadatak-04.cpp)

Neka je dat sljedeci prototip strukture:

```cpp
struct Karta {
	char* vrijednost = nullptr; // 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K, A
	char* znak = nullptr; // tref, karo, srce, pik
	void unos();
	void ispis();
	void dealociraj();
};
```

Uraditi implementaciju zadanih funkcija clanica i po potrebi definirati i implementirati pomocne globalne funkcije. Zatim, u main funkciji dodati sljedece stavke:
- Kreiranje dinamickog niza objekata tipa <i>Karta</i> velicine 52 (za formiranje spila) i inicijalizacija svih vrijednosti objekata niza na odgovarajuce vrijednosti karata.
- Ponavljati postupak izvlacenja 5 karata iz spila ukupno 3 puta, <span style="color:red">na nacin da se vec izvucene karte ne smiju izvlaciti ponovo.
- Ispisati karte za svako izvlacenje.</span>
- Uraditi sve neophodne dealokacije.

<span style="color:red">U zadatku obavezno koristiti operator '*' umjesto '[]' prilikom dereferenciranja adresa / pokazivaca.</span>.

# Grupa B
