# Grupa A

# [Zadatak 01](./Grupa%20A%20-%20Zadatak%2001.cpp)

Napisati program koji rješava sljedeći problem.
Date su firma A, B i C sa godišnjim prihodima:
   A - prihod 10M eura
   B - prihod 7M eura
   C - prihod 5M eura
sa sljedećim stabilnim fiksnim godišnjim rastom prihoda za koji pretpostavljamo da se neće mijenjati
   A - 2.05%
   B - 2.80%
   C - 4.30%
Potrebno je pronaći koja firma će prva prestići firmu A u godišnjem prihodu i za koliko godina će se to desit. Također potrebno je ispisati koliko će sve tri firme imati godišnji prihod u toj godini.

# [Zadatak 02](./Grupa%20A%20-%20Zadatak%2002.cpp)

Svaki paran broj se može prikazati kao suma dva prosta broja (tkz. Goldbachovo pravilo). Napisati program koji će najprije učitati dva prirodna broja n1 i n2 (n2 > n1). Zatim prikazati sve parne brojeve u intervalu od n1 do n2 kao sumu dva prosta broja. U glavnom programu samo unijeti navedena dva prirodna broja i pozvati funkciju koja obavlja zadani posao.

# [Zadatak 03](./Grupa%20A%20-%20Zadatak%2003.cpp)

Napisati program koji će učitati niz od 50 integer vrijednosti. Napisati funkciju koja će provjeriti da li se u nizu nalazi sekvenca od minimalno 4 uzastopna broja. Funkcija treba da provjeri i prebroji koliko takvih sekvenci postoji u nizu i da ispise broj takvih sekvenci.
  
Npr. 100, 322, 453, 454, 455, 456, 355, 235, 235, 236, 237, 238, 239, 111...
453, 454, 455, 456 - 1. Sekvenca
235, 236, 237, 238, 239 - 2. Sekvenca

# [Zadatak 04](./Grupa%20A%20-%20Zadatak%2004.cpp)

Napisati program koji će učitati cijeli broj n (1 <= n <= 10), (ukoliko unesena vrijednost nije unutar intervala, učitavanje treba ponavljati sve dok se ne unese ispravna vrijednost) i elemente matrice dimenzije n x n te ispisati da li je matrica centralno simetrična s obrzirom na središnji element. Ako jeste, program treba ispisati 1, ako nije ispisati 0,a ako je broj redova paran (pa nema središnjeg elementa) ispisati -1. Koristite posebne funkcije za unos elemenata i provjeru simetričnosti.
  
Primjer centralno simetrične matrice:
  
  | *3* | *1* | *2* |
  | --- | --- | --- |
  | *__5__* | *__4__* | *__5__* |             
  | *__2__* | *__1__* | *__3__* |             
                    
  | *1* | 4 | *5* |  8 | *7* |
  | --- | --- | --- | --- | --- |
  | 3 | *__1__* | *__2__* | *__4__* | 6 |
  | *__7__* | *__5__* | *__3__* | *__5__* | *__7__* |
  | 6 | *__4__* | *__2__* | *__1__* | 3 |
  | *__7__* | 8 | *__5__* | 4 | *__1__* |
  
# Grupa B

# [Zadatak 01](./Grupa%20B%20-%20Zadatak%2001.cpp)

Napisati program koji će za uneseni prirodni broj n računati:  
![S = [1/(n+1)] - [1/(n+2!)] + [1/(n+3!)] - [1/(n+4!)] + ... + (-1)^(n-1) * [1/(n+n!)]](https://latex.codecogs.com/gif.latex?S%20%3D%20%5Cfrac%7B1%7D%7Bn%20&plus;%201%7D%20-%20%5Cfrac%7B1%7D%7Bn%20&plus;%202%21%7D%20&plus;%20%5Cfrac%7B1%7D%7Bn%20&plus;%203%21%7D%20-%20%5Cfrac%7B1%7D%7Bn%20&plus;%204%21%7D%20&plus;%20...%20&plus;%20%28-1%29%5E%7Bn-1%7D%20*%20%5Cfrac%7B1%7D%7Bn%20&plus;%20n%21%7D)  
10 < n <= 100
  
Obavezno koristiti i ispravne tipove podataka i optimizirati kod.

# [Zadatak 02](./Grupa%20B%20-%20Zadatak%2002.cpp)

Napisati program koji će omogućiti korisniku unos dva minimalno trocifrena prirodna broja m i n (n > m, m > 100, n < 500). Zatim napraviti funkciju koja će vratiti aritmetičku sredinu svih srednjih cifara svih brojeva u rangu od m do n. Također ta funkcija treba ispisati najveću srednju cifru navedenog ranga.

# [Zadatak 03](./Grupa%20B%20-%20Zadatak%2003.cpp)

U main funkciji kreirati niz veličine 200 (char recenica[200]) sa sljedećim inicijaliziranim vrijednostima "Most u Mostaru je Stari most a pored njega je jos jedan most". Također, dat je niz karaktera veličine 4 (char rijec[4]) koji je inicijaliziran vrijednostima "most". (Nije potrebno praviti funkciju za unos. koja će primiti pomenute nizove kao argumente te pronaći i prebrojati koliko puta se ponavlja sekvenca karaktera iz niza rijec u nizu recenica. Voditi računa da se riječju smatra bilo koji niz karaktera odvojen spaceom sa obje strane. Program u main treba ispisati broj pronađenih riječi.

# [Zadatak 04](./Grupa%20B%20-%20Zadatak%2004.cpp)

Napisati program koji će omogučiti:
* Unos 2D niza od 10x10 elemanata vodeći računa da su svi elementi dvocifreni (ukoliko unos nekog elementa ne zadovoljava uslov, ponavljati unos tog elementa dok se ne zadovolji uslov); Koristiti funkciju unos 
* Izvršiti transpoziciju niza tako što će se zamjeniti redovi i kolone - Koristiti funkciju transpose, a zatim na osnovu izmijenjenog 2D niza:
* Izračunati aritmetičku sredinu svih prostih brojeva ispod sporedne dijagonale - Koristiti dvije funkcije: aritmeticka i prost_broj (pozivati će se iz funkcije aritmeticka)
* Napisati funkciju simpatican koja će provjeriti da li su brojevi iznad sporedne dijagonale simpatični*.
  
Obavezno koristiti navedene funkcije, a parametre i eventualne povratne vrijednosti definisati prema potrebi. U main() funkciji napisati testni program koji će omogućiti izvršenje svih funkcija navedenim redoslijedom.
  ```
  [a][a][a][a][a]        [a][b][c][d][e]
  [b][b][b][b][b]        [a][b][c][d][e]
  [c][c][c][c][c]  --->  [a][b][c][d][e]
  [d][d][d][d][d]        [a][b][c][d][e]
  [e][e][e][e][e]        [a][b][c][d][e]
  ```
Pomoć: Broj je simpatičan ukoliko je zbir cifara njegovog kvadrata jednak kvadratu zbira njegovih cifara. Broj 21 je simpatičan jer je s(441) = s(21) * s(21)  pri čemu je s(n) zbir cifara prirodnog broja n.
