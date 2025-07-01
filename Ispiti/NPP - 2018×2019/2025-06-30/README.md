# Grupa 1

# Grupa 2

# [Zadatak 01](./Grupa-2/Zadatak-01.cpp)

Napisati program koji simulira bacanje 7 kockica, ali sa sljedecim pravilima:
1. Kockice imaju vrijednosti od 1 do 6.
2. Ponavljati bacanje kockica sve dok se ne dobiju tacno cetiri ponavljanja jedne vrijednosti i tri ponavljanja druge vrijednosti (npr. cetiri petice i tri jedinice). Redoslijed upisanih vrijednosti kockica nije bitan.
3. Ispisati svako bacanje kockica.
4. Na kraju ispisati ukupan broj bacanja, kao i posljednje izvucene vrijednosti kockica.

<b>Primjer koristenja:</b>
```
Bacanje #177: 1 6 2 5 4 5 4
Bacanje #178: 4 2 4 2 2 5 1
Bacanje #179: 5 4 2 1 4 4 5
Bacanje #180: 1 5 2 6 1 5 4
Bacanje #181: 3 4 4 4 5 1 2
Bacanje #182: 1 4 4 4 4 6 6
Bacanje #183: 4 2 3 5 2 4 3
Bacanje #184: 6 1 2 1 5 3 1
Bacanje #185: 3 2 2 6 2 4 3
Bacanje #186: 2 6 1 3 6 4 6
Bacanje #187: 6 5 1 6 3 2 5
Bacanje #188: 5 4 3 4 5 2 1
Bacanje #189: 5 2 1 3 3 5 6
Bacanje #190: 5 3 1 2 3 6 1
Bacanje #191: 3 3 1 3 3 5 6
Bacanje #192: 5 5 6 1 1 3 6
Bacanje #193: 3 3 1 4 4 2 6
Bacanje #194: 3 6 3 2 3 1 2
Bacanje #195: 2 2 1 3 1 1 5
Bacanje #196: 6 2 6 3 3 3 6
Bacanje #197: 5 1 4 5 4 2 5
Bacanje #198: 1 6 3 3 5 6 3
Bacanje #199: 6 5 2 4 2 6 3
Bacanje #200: 5 1 4 4 3 5 4
Bacanje #201: 2 2 6 6 6 5 2
Bacanje #202: 1 6 4 6 5 3 3
Bacanje #203: 5 6 5 6 5 6 5
Ukupan broj bacanja: 203
Posljednje izvucene vrijednosti: 5 6 5 6 5 6 5
```

Sve poslije ispisa bacanja #203 sam dodao sam na osnovu prijasnjeg roka.

# [Zadatak 02](./Grupa-2/Zadatak-02.cpp)

Napisite program koji omogucava korisniku unos dva broja:
- n (mora biti u opsegu izmedu 10 i 1000 i ne smije biti prost broj - unos treba biti ponovljen dok se ne ispuni ovaj uslov)
- k (broj prostih brojeva koje treba pronaci i mora biti manji od n)

Program treba prvo ispisati k najblizih prostih brojeva manjih od broja n, zatim ispisati broj n, i na kraju ispisati k najblizih prostih brojeva koji su veci od n.

<b>Primjer koristenja:</b>
```
Unesite broj n (10-1000, NE smije biti prost): 100
Unesite broj k (k < n): 3

3 najblizih prostih brojeva manjih od 100: 83 89 97
Broj n: 100
3 najblizih prostih brojeva vecih od 100: 101 103 107
```

# [Zadatak 03](./Grupa-2/Zadatak-03.cpp)

Napisite program u kojem je potrebno unijeti velicinu dinamickog niza cjelobrojnih vrijednosti.
Velicina niza mora biti veca od 0. Nakon unosa:
- Dinamicki se alocira niz zadane velicine
- Niz se popunjava rekurzivnom funkcijom slucajnim dvocifrenim brojevima (iz opsega od 10 do 99, ukljucujuci granice)
- Rekurzivnom funkcijom obrnuti redoslijed elemenata niza (npr. [1, 2, 3] postaje [3, 2, 1])
- Rekurzivnom funkcijom izracunati zbir svih elemenata niza

Posto nemam primjer ispisa ili ostatka zadatka uraden je samo dio sto se nalazi ovdje.

# [Zadatak 04]

Cuo sam da je bila klasa Igrac.