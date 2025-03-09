# Grupa A

Ovaj ispit je bio na 1. parcijali u 2023. godini takoder.

Pokusao sam naci [dijagrame toka](./DijagramiToka) koje sam koristio za ovaj zadatak (i mislim) da su priznati na ispitu, da se ima kao primjer.
Drzite samo na umu da nema 1 tacan dijagram, ako kako treba opisuje kod tjt.

# [Zadatak 01](./Grupa-A/Zadatak-01.cpp)

Napisite program u kojem korisnik unosi bazu brojnog sistema (vrijednost koja mora biti izmedu 2 i 10), nakon cega se unosi broj koji mora biti validan unutar navedene baze. Program treba prevesti uneseni broj iz zadane baze u dekadski brojni sistem. Potrebno je navesti kako uneseni broj ne smije biti negativan. Po mogucnosti mozete koristiti funkcije sa sljedecim protototipom:

| Funkcija  | Ulazi             | Izlaz | Definicija                                                                                                                                           |
|-----------|-------------------|-------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| isValid   | x: int, base: int | bool  | Provjerava da li je vrijednost x validan broj u brojnom<br>sistemu sa bazom base.                                                                    |
| toDecimal | x: int, base: int | int   | Konvertuje broj x iz bilo kojeg brojnog sistema (2, 3,<br>4, 5, 6, 7, 8, 9, 10) u decimalni (dekadski) sistem. <br>Ignorisati heksadecimalni sistem. |

Upotreba gore navedenih funkcija nije obavezna.<br>
<b>Obavezno kreirati dijagram toka za cijeli program. Ukoliko koristite funkcije, tada je potrebno kreirati dijagram toka za svaku funkciju potrebno (isValid, toDecimal, main, ...).</b>

# [Zadatak 02](./Grupa-A/Zadatak-02.cpp)

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

# Grupa C

# [Zadatak 01](./Grupa-C/Zadatak-01.cpp)

Napisati program u kojem korisnik unosi broj n koji mora zadovoljiti pravilo (100<n≤999). Nakon što
korisnik unese broj, potrebno je ispitati da li je uneseni broj <b>Armstrongov broj</b>, ispisujući poruku: „Broj je
Armstrongov“.

<b>Armstrongov broj</b> (ili broj narcisa) je cijeli broj koji je jednak sumi svojih znamenki na treću potenciju.

Na primjer:
- 153 je Armstrongov broj jer 13+53+33=153
- 370 je Armstrongov broj jer je 33+73+03=370

Ukoliko je uneseni broj Armstrongov broj provjeriti da li je suma njegovih cifara paran broj. Ukoliko je
suma cifara Armstrongovog broja paran broj, ispisati poruku : „Suma cifara Armstrongovog broja je paran
broj“, a ukoliko nije ispisati poruku „Suma cifara Armstrongovog broja je neparan broj“.

Primjer:
- 370 je Armstrongov broj. Suma cifara 3+7+0=10, Armstrongov broj ima parnu sumu cifara pa ispis
programa treba biti: „Broj je Armstrongov“ i „Suma cifara Armstrongovog broja je paran broj“

Ukoliko uneseni broj nije Armstrongov broj program treba ispisati poruku: “Uneseni broj nije Armstrongov
broj“.

Po mogućnosti možete koristiti funkcije sa sljedećim prototipom:

| Funkcija        | Ulazi   | Izlaz | Definicija                                                                          |
|-----------------|---------|-------|-------------------------------------------------------------------------------------|
| armstrongNumber | num:int | int   | Vraća sumu cifara na treću potenciju broja za kog provjeravamo da li je Armstrongov |
| isParan         | num:int | bool  | Provjerava da li je suma cifara Armstrongovog broja paran broj                      |

<b>Upotreba gore navedenih funkcija nije obavezna.</b>

# [Zadatak 02](./Grupa-C/Zadatak-02.cpp)

Napisati program koji omogućuje korisniku unos jedne od 3 numeričke opcije:
- 1 - Odabir ove opcije primorava korisnika na unos dvije cjelobrojne vrijednosti 𝑚 i 𝑛, pri čemu
mora biti ispoštovano ograničenje (0 ≤ 𝑚 ≤ 𝑛). Program treba ispisati sve brojeve u intervalu
[𝑚, 𝑛] koji su dio fibonaccijevog niza i koji su djeljivi sa brojem cifara od kojih se sastoje: Primjer
takvog broja:<br><br>
34 broj je broj fibonaccijevog niza, sastoji se od dvije cifre, 34/2=17, djeljiv je sa brojem cifara od
kojih se sastoji.<br><br>
Fibonacci niz predstavlja niz brojeva u kome je naredni broj u nizu zbir prethodna dva broja, npr.:<br><br>
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610.<br><br>
- 2 - Odabir ove opcije primorava korisnika na unos jedne cjelobrojne vrijednosti 𝑛, za koju važi
ograničenje 1 < 𝑛 ≤ 50. Program treba da ispiše sumu cifara unesenog broja.<br><br>
- 3 - Odabir ove opcije označava izlaz iz programa.
Ukoliko korisnik odabere opciju koja nije niti jedna od tri navedene, program se mora nastaviti izvršavati.

Ukoliko korisnik odabere opciju koja nije niti jedna od tri navedene, program se mora nastaviti izvršavati.

Po mogućnosti možete koristiti funkcije sa sljedećim prototipom:

| Funkcija       | Ulazi | Izlaz | Definicija                            |
|----------------|-------|-------|---------------------------------------|
| functionality1 |       | void  | Izvršava opciju 1.                    |
| Functionality2 |       | void  | Izvršava opciju 2.                    |
| numberOfDigits | x:int | int   | Računa broj cifara prosljeđenog broja |
