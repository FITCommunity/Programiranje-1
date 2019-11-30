# [Zadatak 01](./Zadatak%2001.cpp)

Poštujući sve faze procesa programiranja, napišite program, koji za uneseni prirodni broj n i realni broj x izračunava: 
![S = cos(x) + cos(x^2 + cos(x^3) + ... + cos(x^n))](https://latex.codecogs.com/gif.latex?S&space;=&space;\con(x)&space;&plus;&space;\cos(x^2)&space;&plus;&space;\cos(x^3)&space;&plus;&space;...&space;&plus;&space;\cos(x^n))


# [Zadatak 02](./Zadatak%2002.cpp)

Napisati program koji izračunava ukupan zbir faktorijela od svih prostih brojeva koji su članovi prvih 100 elemenata Fibonacci niza (tzv. fibonacci prime).
Napomena: Pazljivo pročitajte zadatak. Obavezno voditi računa da se uradi tačno ono što je trazeno u zadatku i da zadatak bude logicki ispravan. Obavezno koristiti bar jednu funkciju kojoj ćete proslijediti parametar po referenci.


# [Zadatak 03](./Zadatak%2003.cpp)

Napisati funkciju (i testirati u main funkciji) koja kao parametar prima rečenicu (niz od najviše 200 karaktera) i iz nje uklanja svaku riječ koja počinje velikim slovom.  
Npr. ako je data rečenica:  
	"Stari most u Mostaru spaja obale rijeke Neretve."  
funkcija je treba pretvoriti u:  
	"most u spaja obale rijeke" 
Funkcija vraća broj riječi u polaznoj rečenici (prije odsijecanja ostalih riječi). Radi jednostavnosti rješenja, pretpostavite da je riječ bilo koji niz znakova razdvojen znakom razmak.


# [Zadatak 04](./Zadatak%2004.cpp)

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