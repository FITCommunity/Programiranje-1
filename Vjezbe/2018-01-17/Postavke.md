# [Zadatak 01](./Zadatak%2001.cpp)
 

Poštujući sve faze procesa programiranje, napisati program će odrediti i ispisati 
zadnje tri cifre broja ![x^n](https://latex.codecogs.com/gif.latex?x%5En).Unos brojeva x i n vršiti u glavnoj funkciji uz uslov 10 < x < 100 i 2 < n < 10, a funkciju za određivanje zadnje tri cifre napraviti zasebno.
  
Primjer izlaza:
```
Unesite brojeve x i n: 64 5
Zadnje tri cifre broja su: 824
```

# [Zadatak 02](./Zadatak%2002.cpp)
 
Napisati program koji će učitati prirodni broj n <= 10, a zatim n prirodnih trocifrenih brojeva koje treba pospremiti u odgovarajući niz.Taj niz brojeva treba sortirati uzlazno po srednjoj cifri. Nakon sortiranja treba ispisati dobiveni niz. Za sortiranje koristiti zasebnu funkciju kojoj se proslijeđuje nesortiran niz.

# [Zadatak 03](./Zadatak%2003.cpp)
 
Napisati program koji će omogučiti:
* Unos 2D niza od 10 x 10 elemanata vodeći računa da su svi elementi dvocifreni (ukoliko unos nekog elementa ne zadovoljava uslov, ponavljati unos tog elementa dok se ne zadovolji uslov); Koristiti funkciju unos 
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

# [Zadatak 04](./Zadatak%2004.cpp)
 
Napisati program koji od korisnika zahtijeva unos niza od najviše 20 realnih brojeva u rasponu od -100 do 100. U slučaju da korisnik unese bilo koji broj izvan datog raspona korisnik ponavlja unos tog elementa niza. Također, unos je moguće prekinuti prije nego što se dostigne kapacitet niza unosom broja 0 koji ne treba da bude element niza i služi samo za prekid. Nakon toga, program računa aritmetičku sredinu unesenih brojeva, te iz niza izbacuje sve one elemente čija je udaljenost od aritmetičke sredine veća od 10, na način da se sačuva redoslijed dodavanja elemenata. Implementaciju uraditi upotrebom sljedećih funkcija:
* `void unos (double[], int, int&);` gdje je treći parametar stvarna veličina niza nakon unosa;
* `double aritmeticka_sredina(double[], int);`
* `void ukloni(double[], int, double, int&);` gdje je drugi parametar aritmetička sredina, a posljednji veličina niza nakon uklanjanja elemenata. 

U glavnom programu testirati dostupne funkcije, te obaviti ispis elemenata niza nakon uklanjanja vodeći se datim primjerom izlaza.
```
Unesite elemente niza: 2.5 -8.9 15.89 16.78 34 25 11 0
Aritmeticka sredina elemenata niza iznosi: 13.75
Sadrzaj niza nakon uklanjanja: 15.89 16.78 11.00
```

# [Zadatak 05](./Zadatak%2005.cpp)
 
Neka je data matrica kompetencija studenata dimenzija 10 x 5, gdje svaki red matrice predstavlja studenta, a svaka kolona matrice kompetenciju koju je potrebno evaluirati. Matrica sadrži podatke o studentima sa dva studijska programa, prvih 5 redova za jedan i drugih 5 redova za drugi program. Kompetencije se definišu putem sljedeće skale: 
* A (ekspert), 
* B (stručnjak), 
* C (zadovoljava), 
* D (djelimično zadovoljava) i 
* E (ne zadovoljava). 

Napisati program koji će implementirati i testirati sljedeće funkcije:
* evaluiraj - funkcija omogućava unos evaluacije za određenog (odabranog u glavnom programu) studenta (unosi se samo jedan red matrice), na način da su dozvoljene samo vrijednosti usvojene prethodnom skalom (A, B, C, D i E). U slučaju unosa bilo kojeg karaktera izvan ovog opsega, potrebno je ponoviti unos. Prilikom unosa ispisati poruku za svaku kompetenciju na sljedeći naćin: "Unesite evaluaciju za kompetenciju C1", i tako redom za svaku kolonu.
* najuspjesnija_kompetencija - funkcija pronalazi kompetenciju (u oba studijska programa) koja je najuspješnija, odnosno na kojoj su studenti ostvarili najbolji rezultat, te vraća i prosječnu ocjenu za tu kompetenciju. 
   Napomena: Pridružiti svakoj oznaci numeričku vrijednost, radi jednostavnosti kalkulacije i 
   poređenja uspjeha pojedinih kompetencija. Koristiti prosljeđivanje najmanje jednog parametra 
   po referenci, te ispis rezultata ne vršiti u funkciji.
* najuspjesniji_student - funkcija pronalazi najuspješnijeg studenta u odabranom studijskom programu (studijski program se bira u glavnom programu putem vrijednost 1 (prvih 5 redova) ili 2 (drugih 5 redova),te vraća i prosječnu ocjenu tog studenta. Vrijede iste napomene kao i za prethodnu funkciju.
  
U glavnom programu testirati implementirane funkcije na način da se uz uspjeh kompetencije ili studenta definiše opisna evaluacija (ekspert, stručnjak,...). Dodatno ispisati podatke o najuspješnijem studentu, posmatrajući oba studijska programa. Ispis najsupješnije kompetencije ili studenta izvršiti sa oznakama C ili S, uz redni broj kolone ili reda gdje se nalaze u matrici.

Npr. Najuspješniji student je S2 sa prosječnom ocjenom "stručnjak".

# [Zadatak 06](./Zadatak%2006.cpp)
 
Napisati program koji će korisniku omogućiti unos pozitivnih neparnih cijelih brojeva za koje će se ispitivati da li im je prva cifra parna (npr. 4993 ili 4999). Ukoliko je zadovoljen uslov broj se smješta u niz od 10 elemenata. Unos se ponavlja dok se ne popuni niz od 10 elemenata koji zadovoljavaju uslov unosa. Unos se prekida ukoliko korisnik unese vrijednost 0 te se i izvršenje program završava uz poruku "Forsirani prekid". Zatim se za sve elementi niza ispituje da li je broj prost i da li ima samo jednu parnu cifru. Ako broj nije prost iako ima više od jedne parne cifre, broj se izbacuje iz niza tako što se njegova vrijednost mijenja sa 0. Na kraju niz sortirati od najvećeg ka najmanjem broju te ga ispisati. Koristiti odvojene funkcije za provjeru da li je broj prost, za sortiranje i ispis niza. 

# [Zadatak 07](./Zadatak%2007.cpp)
 
Deklarisati kvadratnu matricu cijelih brojeva proizvoljnih dimenzija, te implementirati sljede�e funkcije:
* Funkciju za unos i formiranje elemenata matrice prema sljedećem obrascu: elemente neparnih redova matrice (1., 3., 5. itd.) ćine minimalno trocifreni brojevi koje unosi korisnik programa (u slučaju unosa bilo kojeg broja koji ne zadovoljava postavljeni uslov, ponoviti unos); elementi parnih redova matrice se formiraju na osnovu elemenata iz prethodnog reda u istoj koloni matrice i to na način da je svaki novokreirani element matrice zapravo element s obrnutim redoslijedom cifri elementa iznad njega. 
* Za određivanje broja s obrnutim redoslijedom cifri kreirati zasebnu funkciju obratno, te je pozvati u funkciji unos. 
* Takvu matricu proslijediti zasebnoj funkciji max koja će formirati novi jednodimenzionalni niz ćije članove čine najveći članovi matrice po redovima te ispisati ove članove.
* Formirati posebnu funkciju iznad_dijagonala koja će ispisati broj elemenata matrice koji se nalaze iznad glavne i sporedne dijagonale. Ove elemente unutar funkcije spremati u niz čija veličina zavisi od dimenzije matrice. Veličina niza treba biti fiksna i mora odgovarati tačnom broju elemenata. 

Kreirati kratki testni program koji demonstrira funcionalnost kreiranih funkcija.
Primjer matrice dimenzija 4 x 4 i očekivanih rezultata:
  
  |  2163  |  123  |  30425 |   671  |  
  | -------- | -------- | -------- | -------- |
  |  __3612__  |  __321__   |  __52403__ |   __176__  |  
  |  __7331__  |  __6113__  | __741232__ |   __798__  |  
  |  __1337__  |  __3116__  | __232147__ |   __897__  |  

  Elementi iznad obje dijagonale su: 123, 30452
  Funkcija max će ispisati sljedeće brojeve: 30452, 25403, 741232, 232147 jer su to najveći brojevi po redovima.

# [Zadatak 08](./Zadatak%2008.cpp)
 
Napisati funkciju koja niz od 10 cijelih brojeva sortira u opadajućem ili rastućem poretku. Unos elemenata niza se obavlja u glavnom programu, kao i odabir opcije koja određuje da li rezultirajući niz treba biti opadajući ili rastući. Obavezno testirati implementiranu funkciju vodeći se datim primjerom ispisa. 
  
(Pojašnjenje: Nema posebnog pojašnjenja jer se radi o najjednostavijem sortiranju uzlazno ili silazno u odnosu na korisnicki izbor.)
```
Unesite elemente niza: 12 2 3 0 45 6 98 -9 3 -10
  
Kako zelite sortirati niz (unesite 1 ili 2): 
    1. U opadajucem poretku
	2. U rastucem poretku
1
  
Rezultirajuci niz: 98 45 12 6 3 3 2 0 -9 -10
```

# [Zadatak 09](./Zadatak%2009.cpp)
 
Uz pomoć matrice realnih brojeva dimenzija 5x7 izraditi program za evidenciju i kalkulaciju uspješnosti vremenskih prognoza (prosječnih dnevnih temperatura) određenog grada. Redovi matrice predstavljaju meteorologe ćije se prognoze unose, dok se kolone odnose na vremenski period od 7 dana. Uz matricu je neophodno krerati globalni jednodimenzionalni niz od 7 elemenata koji će čuvati stvarna mjerenja temperatura za isti vremenski period, a na osnovu kojeg će se procijeniti uspješnost prognoza pojedinih meteorologa. Vrijednosti elemenata ovog niza prilikom deklaracije postaviti na: 25.5, 26.8, 21, 32, 35.6, 36, 33.5.
  
Implementaciju programa uraditi pomoću sljedećih funkcija:
* UnesiPrognoze - funkcija za unos prognoza određenog meteorologa za kompletan period od 7 dana. Vrijednosti prosječnih temperatura moraju biti unutar intervala [-20, 50]°C. (Pojašnjenje: unose se podaci za samo jedan izabrani red. Tako će se korisniku omogućiti da unese prognoze za jednog po jednog meteorologa.)
* IzracunajUspjesnost - funkciju koja vraća procentualnu vrijednost uspješnosti prognoza za željenog meteorologa. Prognoza, odnosno prosječna temperatura na određeni dan, smatra se uspješnom ako od stvarnog mjerenja ne odstupa više od 5°C. (Pojasnjenje: poredi se podaci iz jednog reda odnosno za jednog meteorologa sa podacima iz posebnog niza koji sadrži stvarne vrijednosti mjerenja, te ako je razlika manja od +/-5 taj podatak se smatra uspješnom prognozom. Na kraju treba podjeliti broj uspješnih prognoza sa 7 koliko ima dana u sedmici i vratiti procenat uspješnosti.)
* PronadjiNajuspjesnijegMeteorologa - funkciju koja pronalazi meteorologa sa najtačnijim vremenskim prognozama, odnosno najvećim procentom uspjeha. (Pojašnjenje: Red koji ima najveći procenat koji se dobije iz prethodno opisane funkcije IzracunajUspjesnost je u stvari red sa najuspješnijim meteorologom.)  
* PronadjiDanSaNajnizimPrognozama - funkciju koja pronalazi dan koji je imao u prosjeku najnize prognoze. (Pojašnjenje: Naći kolonu sa najnišom aritmetičkom sredinom svih svojih vrijednosti. Nije potrebno porediti sa nizom sa stvarnim temperaturama.)
   
Napisati i kratak testni program za provjeru ispravnosti implementiranih funkcija.

# [Zadatak 10](./Zadatak%2010.cpp)
 
Napisati funkciju koja kao parametare prima dva niza char recenica[200] i char rijec[10] odnosno rečenicu (niz od najviše 200 karaktera) i riječ (niz od najviše 10 karaktera) te u nizu recenica[200] pretrazuje i pronalazi sekvencu karaktera unesenih u niz rijec[10]. Radi jednostavnosti rješenja podrazumjeva se da i rečenica i riječ koja se pretrazuje završavaju tačkom. Poslije pronalaska tražene riječi, pomenutu riječ treba zamijeniti karakterima "FIT".

(Pomoć: Treba voditi racuna koliko karaktera ima riječ koja je pronadjena i zamjenjena)

Npr. ako je data rečenica u nizu recenica[200]: "Ja studiram na fakultetu jer zelim biti expert." i rijec[10]: "fakultet",funkcija je treba pronaci riječ "fakultet" u rečenici i pretvoriti je u "FIT": "Ja studiram na FITu jer želim biti expert." (ima ukupno manje slova a zadržan je samo po jedan space između riječi). 
   
Obavezno u main funkciji omogućiti unos rečenice, zatim tražene riječi i ispisati novu rečenicu poslije zamjene.

# [Zadatak 11](./Zadatak%2011.cpp)
 
Neka je dat 2D niz tipa int dimenzija 5x5. Kreirati, a potom u glavnom programu 
testirati, sljedeće funkcije:
* Funkciju koja vrši generisanje Fibonaccijevih brojeva u 2D nizu dok se niz ne popuni
* Funkcija koja ispisuje najveće zajedničke djelitelje brojeva na suprotnim indeksima matrice koristeći Euklidov algoritam, kad se indeksi izjednače petlja se treba prekinuti:
```
Euklidov algoritam(a,b):
    Dok(b>0)
        p=a;
        a=b;
        b = p mod b;
    NZD = a;
```
Gdje je 'p' pomoćna varijabla. Suprotni indeksi matrice su matrica[0,0] i matrica[5,5], zatim matrica[0,1] i matrica [5,4]itd.
     
Primjer: 
```
Najveći zajednički djelitelj za brojeve 610 i 34 je 2. 
```
```
Najveći zajednički djelitelj za brojeve 8 i 2584 je 8. 
```

# [Zadatak 12](./Zadatak%2012.cpp)
 
Neka je dat 2D niz tipa int dimenzija 10x10. Kreirati, a potom u glavnom programu testirati, sljedeće funkcije:
* Funkciju koja za vrsi generisanje podataka u 2D nizu na nacin da se u elementu sa indexom [0][0] upise vrijednost 1 a svaki slijedeci element da ima vrijednost prethodnog elementa pomnozenog sa 2 kao na slici. Generisanje se prekida ako se desi overflow na varijabli int.
* Funkciju koja popunjenu matricu iz pod-zadatka a) transponuje tako sto joj zamjeni redove i kolone.
* Funkciju koja kao parametar prima pomenuti niz i index kolone te silazno sortira
* kompletan 2D niz po izabranoj koloni na nacin da se kompletni redovi zamjene prema vrijednosti u izabranoj koloni (princip sortiranja po koloni kao u MS Excel tabeli)
     
```
     +------+------+------+------+------+------+------+------+------+------+
     |  1   |  2   |  4   |  8   |  16  |  32  |  64  | 128  | 256  | 512  |
     +------+------+------+------+------+------+------+------+------+------+
     | 1024 | 2048 | itd. | itd. | itd. | itd. | itd. | itd. | itd. | itd. |
     +------+------+------+------+------+------+------+------+------+------+
     |      |      |      |      |      |      |      |      |      |      |
     +------+------+------+------+------+------+------+------+------+------+
     |      |      |      |      |      |      |      |      |      |      |
     +------+------+------+------+------+------+------+------+------+------+
     |      |      |      |      |      |      |      |      |      |      |
     +------+------+------+------+------+------+------+------+------+------+
     |      |      |      |      |      |      |      |      |      |      |
     +------+------+------+------+------+------+------+------+------+------+
     |      |      |      |      |      |      |      |      |      |      |
     +------+------+------+------+------+------+------+------+------+------+
     |      |      |      |      |      |      |      |      |      |      |
     +------+------+------+------+------+------+------+------+------+------+
     |      |      |      |      |      |      |      |      |      |      |
     +------+------+------+------+------+------+------+------+------+------+
     |      |      |      |      |      |      |      |      |      |      |
     +------+------+------+------+------+------+------+------+------+------+
```
# [Zadatak 13](./Zadatak%2013.cpp)
 
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