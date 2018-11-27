# Zadatak 01
___
Napisati program kojim će se izračunati 20 uzastopnih vrijednosti brzine i pređenog puta objekta u slobodnom padu u razmaku od po 3 sec. Prilikom računanja potrebno je i ispisati na ekran uzastopno brzinu i pređeni put zajedno za svaki period od 3sec. Obratiti pažnju da se koriste ispravni tipovi podataka.
Formula za brzinu slobodnog pada je:
v = g * t; g=9.81
Formula za pređeni put pri slobodnom padu je:
![s=(g/2)*pow(t,2)](https://latex.codecogs.com/gif.latex?s%20%3D%20%5Cfrac%7Bg%7D%7B2%7D%20*%20t%20%5E%202)

Primjer izlaza:
```
Situacija u 3-oj sekundi je:
Brzina: 29.43
Predjeni put: 44.145
Situacija u 6-oj sekundi je:
Brzina: 58.86
Predjeni put: 176.58
Situacija u 9-oj sekundi je:
Brzina: 88.29
Predjeni put: 397.305
Situacija u 12-oj sekundi je:
Brzina: 117.72
Predjeni put: 706.32
```

# Zadatak 02
___
Svaki paran broj se može prikazati kao suma dva prosta broja (tkz. Goldbachovo pravilo). Napisati program koji će najprije učitati dva prirodna broja n1 i n2 (n2 > n1). Zatim prikazati sve parne brojeve u intervalu od n1 do n2 kao sumu dva prosta broja. U glavnom programu samo unijeti navedena dva prirodna broja i pozvati funkciju koja obavlja zadani posao.

# Zadatak 03
___
Napisati funkciju koja kao parametare prima dva niza char recenica[200] i char rijec[10] odnosno rečenicu (niz od najviše 200 karaktera) i riječ (niz od najviše 10 karaktera) te u nizu recenica[200] pretražuje i pronalazi sekvencu karaktera unesenih u niz rijec[10]. Radi jednostavnosti rješenja podrazumjeva se da i rečenica i riječ koja se pretražuje završavaju tačkom. Poslije pronalaska tražene riječi, pomenutu riječ treba zamijeniti karakterima "FIT".

(Pomoc: Treba voditi racuna koliko karaktera ima rijec koja je pronadjena i zamjenjena)
   
Npr. ako je data rečenica u nizu recenica[200]: "Ja studiram na fakultetu jer zelim biti expert." i rijec[10]: "fakultet",funkcija je treba pronaci rijec "fakultet" u rečenici i pretvoriti je u "FIT": "Ja studiram na FITu jer zelim biti expert." (ima ukupno manje slova a zadržan je samo po jedan space između riječi). 

Obavezno u main funkciji omogućiti unos rečenice, zatim tražene riječi i ispisati novu rečenicu poslije zamjene.