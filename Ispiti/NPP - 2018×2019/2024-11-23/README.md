# Grupa A

Ovaj ispit je bio na 1. parcijali u 2023. godini takoder.

Pokusao sam naci [dijagrame toka](./DijagramiToka) koje sam koristio za ovaj zadatak (i mislim) da su priznati na ispitu, da se ima kao primjer.
Drzite samo na umu da nema 1 tacan dijagram, ako kako treba opisuje kod tjt.

# [Zadatak 01](./Grupa-A-Zadatak-01.cpp)

Napisite program u kojem korisnik unosi bazu brojnog sistema (vrijednost koja mora biti izmedu 2 i 10), nakon cega se unosi broj koji mora biti validan unutar navedene baze. Program treba prevesti uneseni broj iz zadane baze u dekadski brojni sistem. Potrebno je navesti kako uneseni broj ne smije biti negativan. Po mogucnosti mozete koristiti funkcije sa sljedecim protototipom:

| Funkcija  | Ulazi             | Izlaz | Definicija                                                                                                                                           |
|-----------|-------------------|-------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| isValid   | x: int, base: int | bool  | Provjerava da li je vrijednost x validan broj u brojnom<br>sistemu sa bazom base.                                                                    |
| toDecimal | x: int, base: int | int   | Konvertuje broj x iz bilo kojeg brojnog sistema (2, 3,<br>4, 5, 6, 7, 8, 9, 10) u decimalni (dekadski) sistem. <br>Ignorisati heksadecimalni sistem. |

Upotreba gore navedenih funkcija nije obavezna.<br>
<b>Obavezno kreirati dijagram toka za cijeli program. Ukoliko koristite funkcije, tada je potrebno kreirati dijagram toka za svaku funkciju potrebno (isValid, toDecimal, main, ...).</b>

# [Zadatak 02](./Grupa-A-Zadatak-02.cpp)

Napisati program koji omogucuje korisniku unos jedne od 3 numericke opcije:
1. Odabir ove opcije primorava korisnika na unos dvije cjelobrojne vrijednosti m i n, pri cemu mora biti ispostovano ogranicenje (0 < m <= n). Program treba ispisati sve brojeve u intervalu [m, n] koji imaju prvu parnu cifru.
2. Odabir ove opcije primorava korisnika na unos jedne cjelobrojne vrijednosti n, za koju vazi ogranicenje n >= 2. Program treba da ispise sve brojeve u intervalu [2, n] koji su prosti i cije su cifre sortirane silaznim redoslijedom.
3. Odabir ove opcije oznacava izlaz iz programa.

Ukoliko korisnik odabere opciju koja nije niti jedna od tri navedene, program se mora nastaviti izvrsavati.<br>
Za potpunu implementaciju navedenih funkcionalnosti dovoljne su 3 funkcije (ne racunajuci main).
Po mogucnosti mozete koristiti funkcije sa sljedecim prototipom:

| Funkcija         | Ulazi | Izlaz | Definicija                                                   |
|------------------|-------|-------|--------------------------------------------------------------|
| isFirstDigitEven | x:int | bool  | Provjerava da li je vrijednost x ima prvu parnu cifru        |
| isPrime          | x:int | bool  | Provjerava da li je vrijednost x prost broj                  |
| isSortedDesc     | x:int | bool  | Provjerava da li je vrijednost x ima silazno sortirane cifre |

# Grupa B
