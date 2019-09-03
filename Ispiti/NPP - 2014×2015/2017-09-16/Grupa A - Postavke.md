# Zadatak 01

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

# Zadatak 02

Napisati program koji na osnovu unesenog cijelog broja N pronalazi i ispisuje srednju cifru ako broj N ima neparan broj cifara, odnosno aritmeticku sredinu (tip float) srednje dvije cifre ako broj N ima parni broj cifara, a zatim pronaci najmanji broj tipa int sa kojim se srednja cifra ili aritmeticka sredina srednjih cifri treba pomnoziti da bi se dobio broj koji je veci od inicijalnog zadanog broja.
    
Npr. za broj 75631 srednja cifra je 6, najmanja integer vrijednost sa kojom treba pomnoziti broj 6 da bi se dobio broj veci od 75631 je 12606 jer je 12606 * 6 = 75636, 75636 > 75631ili za broj 984354 aritmeticka sredina srednje dvije cifre je 3.5, najmanja integer vrijednost sa kojom treba pomnoziti broj 3.5 da bi se dobio broj veci od 984354 je 281245 jer je 281245 * 3.5 = 984357.5, 984357.5 > 984354
    
(Napomena: Potrebno je voditi računa o tipovima podataka.)

# Zadatak 03

Napisati funkciju koja kao parametare prima dva niza char recenica[200] i char rijec[10] odnosno rečenicu (niz od najviše 200 karaktera) i riječ (niz od najviše 10 karaktera) te u nizu recenica[200] pretrazuje i pronalazi sekvencu karaktera unesenih u niz rijec[10]. Radi jednostavnosti rjesenja podrazumjeva se da i recenica i rijec koja se pretrazuje zavrsavaju tackom. Poslije pronalaska tražene riječi, pomenutu riječ treba zamijeniti karakterima "FIT".

(Pomoć: Treba voditi računa koliko karaktera ima riječ koja je pronađena i zamjenjena)
   
Npr. ako je data rečenica u nizu recenica[200]: "Ja studiram na fakultetu jer zelim biti expert." i rijec[10]: "fakultet",funkcija je treba pronaći riječ "fakultet" u rečenici i pretvoriti je u "FIT": "Ja studiram na FITu jer zelim biti expert." (ima ukupno manje slova a zadrzan je samo po jedan space između riječi). 
   
Obavezno u main funkciji omogučiti unos recenice, zatim tražene riječi i ispisati novu rečenicu poslije zamjene.

# Zadatak 04

Neka je dat 2D niz tipa int dimenzija 10x10. Kreirati, a potom u glavnom programu testirati, sljedeće funkcije:
* Funkciju koja za vrsi generisanje podataka u 2D nizu na nacin da se u elementu sa indexom [0][0] upise vrijednost 1 a svaki slijedeci element da ima vrijednost prethodnog elementa pomnozenog sa 2 kao na slici. Generisanje se prekida ako se desi overflow na varijabli int.
* Funkciju koja popunjenu matricu iz pod-zadatka a) transponuje tako sto joj zamjeni redove i kolone.
* Funkciju koja kao parametar prima pomenuti niz i index kolone te silazno sortira kompletan 2D niz po izabranoj koloni na nacin da se kompletni redovi zamjene prema vrijednosti u izabranoj koloni (princip sortiranja po koloni kao u MS Excel tabeli)

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