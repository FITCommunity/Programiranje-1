# Zadatak 01
___
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
___
Svaki paran broj se može prikazati kao suma dva prosta broja (tkz. Goldbachovo pravilo). Napisati program koji će najprije učitati dva prirodna broja n1 i n2 (n2 > n1). Zatim prikazati sve parne brojeve u intervalu od n1 do n2 kao sumu dva prosta broja. U glavnom programu samo unijeti navedena dva prirodna broja i pozvati funkciju koja obavlja zadani posao.

# Zadatak 03
___
Napisati program koji će učitati niz od 50 integer vrijednosti. Napisati funkciju koja će provjeriti da li se u nizu nalazi sekvenca od minimalno 4 uzastopna broja. Funkcija treba da provjeri i prebroji koliko takvih sekvenci postoji u nizu i da ispise broj takvih sekvenci.
  
Npr. 100, 322, 453, 454, 455, 456, 355, 235, 235, 236, 237, 238, 239, 111...
453, 454, 455, 456 - 1. Sekvenca
235, 236, 237, 238, 239 - 2. Sekvenca

# Zadatak 04
___
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