# Zadatak 01
___
Napišite program, poštujuæi sve faze procesa programiranja, u kojem æete za uneseni prirodni broj n izrčunati sumu: S = 1! + 2! + … +n! 
Upotrijebite funkciju:
```cpp
float suma (int);
int faktorijel(int);
```

# Zadatak 02
___
Napišite program koji će omogućiti kreiranje matrice prirodnih brojeva 5x5. Uz pomoć funkcije:
* `void unos (int [][5]);` omogućite unos elemenata matrice; vodite računa da svi elementi matrice moraju biti prirodni brojevi;
* `bool pozicija(int[][5], int &);` pronaći prvi redak koji sadrži vrijednost 5; u slučaju da u matrici nema vrijednosti 5 funkcija treba vratiti vrijednost false, a program treba ispisati odgovarajuću poruku;
* `float prosjecna(int [][5], int);` izračunati prosječnu vrijednost u retku za koji ste prethodnom funkcijom utvrdili da sadrži vrijednost 5; u slučaju da ste prethodnom funkcijom ustanovili da u matrici nema broja 5 funkciju ne treba pozivati.

Ispis prvog retka koji sadrži vrijednost 5, prosječne vrijednosti u tom retku kao i zahtijevanih poruka vršite u funkciji main.


# Zadatal 03
___
Napišite program u kojem ćete omogućiti unos dva prirodna broja. Provjerite čine li uneseni brojevi prijateljski par. Prirodni brojevi a i b čine prijateljski par brojeva ako je zbir pravih djelitelja broja a (onih koji su manji od a) jednak broju b i istovremeno zbir pravih djelitelja broja b jednak je broju a.
Npr. Brojevi 220 i 284 su prijateljski brojevi.
Pravi djelitelji broja 220 su: 1, 2, 4, 5, 10, 11, 20, 22, 55, 110, a njihova suma iznosi 284;
Pravi djelitelji broja 284 su: 1, 2, 4, 71, 142 a njihova suma iznosi 220.
Upotrijebite funkcije:
```cpp
int suma_pravih_djelitelja (int);
bool provjera (int, int);
```

# Zadatak 04
___
Napišite program u kojem ćete :
* omoguæiti unos niza od 5  isključivo malih slova pomoæu funkcije: `void unos (char [], int);`
* definirati i upotrijebiti funkciju `void promijeni(char [], int [], int);` koja će unesene karaktere (slova) promijeniti u odgovarajuće cijele brojeve (prema ASCII kodnoj shemi) i smjestiti ih u zaseban niz.
* definirati i upotrijebiti funkciju `void binarni(int [], int);` u kojoj će niz prethodno dobivenih cijelih brojeva pretvoriti u ekvivalentne binarne brojeve (binarne brojeve smjestiti u isti niz u kojem su bile ASCII vrijednosti).
Upotrijebite funkciju bin (funkciju ne treba prepisivati) čija je zadaća da pretvara jedan cijeli broj u binarni i izgleda ovako:
```cpp
int bin(int broj)
{
    int binarni = 0, ostatak, brojac = 0;
    while(broj > 0)
    {
        ostatak = broj % 2;
        binarni = binarni + ostatak * pow(10.0, brojac);
        brojac++;
        broj /= 2;
    }
    return binarni;
}
```