# Zadatak 01
___
Napisati program koji će za uneseni prirodni broj n računati:

![S = [1/(n+1)] - [1/(n+2!)] + [1/(n+3!)] - [1/(n+4!)] + ... + (-1)^(n-1) * [1/(n+n!)]](https://latex.codecogs.com/gif.latex?S%20%3D%20%5Cfrac%7B1%7D%7Bn%20&plus;%201%7D%20-%20%5Cfrac%7B1%7D%7Bn%20&plus;%202%21%7D%20&plus;%20%5Cfrac%7B1%7D%7Bn%20&plus;%203%21%7D%20-%20%5Cfrac%7B1%7D%7Bn%20&plus;%204%21%7D%20&plus;%20...%20&plus;%20%28-1%29%5E%7Bn-1%7D%20*%20%5Cfrac%7B1%7D%7Bn%20&plus;%20n%21%7D)
10 < n <= 100
  
Obavezno koristiti i ispravne tipove podataka i optimizirati kod.

# Zadatak 02
___
Napisati program koji će omogućiti korisniku unos dva minimalno trocifrena prirodna broja m i n (n > m, m > 100, n < 500). Zatim napraviti funkciju koja će vratiti aritmetičku sredinu svih srednjih cifara svih brojeva u rangu od m do n. Također ta funkcija treba ispisati najveću srednju cifru navedenog ranga.

# Zadatak 03
___
U main funkciji kreirati niz veličine 200 (char recenica[200]) sa sljedećim inicijaliziranim vrijednostima "Most u Mostaru je Stari most a pored njega je jos jedan most". Također, dat je niz karaktera veličine 4 (char rijec[4]) koji je inicijaliziran vrijednostima "most". (Nije potrebno praviti funkciju za unos. koja će primiti pomenute nizove kao argumente te pronaći i prebrojati koliko puta se ponavlja sekvenca karaktera iz niza rijec u nizu recenica. Voditi računa da se riječju smatra bilo koji niz karaktera odvojen spaceom sa obje strane. Program u main treba ispisati broj pronađenih riječi.

# Zadatak 04
___
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