# [Zadatak 01](./Zadatak%2001.cpp)

Napisati program u kojem je potrebno unijeti odabrani broj cifara počevši od cifre najveće težinske vrijednosti, pa od njih sastaviti i ispisati prirodni broj. Unos cifara se prekida kada se unese broj manji od 0 ili veći od 9. Ispis neka bude oblika:
```
Upisi cifru: 2
Upisi cifru: 8
Upisi cifru: -1
Broj sastavljen od zadanih cifara je 28.
```

# [Zadatak 02](./Zadatak%2002.cpp)

Svaki paran broj se može prikazati kao suma dva prosta broja (tkz. Goldbachovo pravilo). Napisati program koji će najprije učitati dva prirodna broja n1 i n2. Ako je n1 > n2 zamijeniti n1 sa n2. Zatim prikazati sve parne brojeve u intervalu od n1 do n2 kao sumu dva prosta broja. U glavnom programu samo unijeti navedena dva prirodna broja i pozvati funkciju koja obavlja zadani posao.


# [Zadatak 03](./Zadatak%2003.cpp)

Napisati program koji će omogućiti korisniku da unese veličinu jednodimenzionalnog dinamičkog niza integer vrijednosti. Napisati i testirati rekurzivnu funkciju koja će taj niz popuniti serijom Fibonacci brojevima. Rekurzija se prekida kada se popuni cijeli niz ili kada se desi overflow na integer varijabli. Zatim napisati i testirati drugu rekurzivnu funkciju koja će u tom nizu naći određenu vrijednost koju korisnik unese sa tastature. U ovom zadatku je zabranjeno indeksirati niz uglastim zagradama. Obavezno koristiti aritmetiku pokazivača.


# [Zadatak 04](./Zadatak%2004.cpp)

Kreirati dinamički dvodimenzionalni niz čiji su elementi objekti tipa `vremenska_prognoza` (prognoza je struktura čija su obilježja data u nastavku). Omogućiti korisniku da unese dimenzije niza.
```cpp
struct vremenska_prognoza
{
    char *padavine; //dozvoliti unos rijeci npr. "kisa" ili "snijeg"
    float *temperatura;
    float *vlaznost_vazduha;
}
```
Redovi dvodimenzionalnog niza predstavljaju različite meteorologe, a kolone različite dane. Omogućiti korisniku unos svih prognoza za sve meteorologe. Dodatno kreirati jednodimenzionalni dinamički niz čija će veličina biti uneseni broj dana u koji ćete omogućiti unos stvarnih izmjerenih vrijednosti za dane. Zatim napraviti funkciju koja će pronaći i ispisati index meteorologa čija je prognoza dnevnih temperatura bila najtačnija, odnosno koji je imao najmanju grešku u procjeni temperatura.  
Pomoć: suma svih razlika između prognozirane i stvarne temperature za jednog meteorologa predstavlja njegovu ukupnu grešku.  
U ovom zadatku je zabranjeno indeksirati elemente u niza uglastim zagradama. Obavezno koristiti aritmetiku pokazivača.

