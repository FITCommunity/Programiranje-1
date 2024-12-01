# Grupa A

Zadatak 1 i 3 sa ovog roka nisam mogao pronaci kao sliku, cuo sam par razlicitih sjecanja, pa sam
uzeo 2 od kojih sam mogao naci. Za 1. sam cuo da je bilo nesto sa izvlacenje karti / bacanjem kockica,
a da je 3. bio nesto sa palindromima i rekurzijom.

# [Zadatak 02](./Grupa-A-Zadatak-02.cpp)

Napisite program koji treba da simulira igru sa kartama. Pravila igre su:

- Karte su u opsegu od 1 do 14
- Dodjeljivanje karti **morate randomizirati.**(mozete koristiti funkciju:
```cpp
int getRandomValue(int from, int to) {
	return std::rand() % (to - from + 1) + from;
}
```
gdje from treba biti 1, i to treba biti 14)
- Maksimalni broj karti koju igrac moze da ima je 7, a minimalni je 2
- Igrac na pocetku dobije 2 karte
- Ako igrac pritisne 'n' igra se prekida i ukupna suma karti se broji
- Ako igrac pritisne 'y' igra se nastavlja i igrac dobiva jos jednu kartu
- Igra se nastavlja dok igrac ne pritisne 'n', prekoraci 21 ili skupi svih 7 karti
- Ako je nakon sto korisnik pritisne 'y' ukupna suma svih karti iznad 21 igra se automatski prekida i **igrac je izgubio**
- Ako igrac uspije da sakupi svih 7 karti **igrac je pobjedio neovisno o sumi**
- Ako igrac pritisne 'n' i suma svih karti je manja od 15 **igrac je izgubio**
- Ako igrac pritisne 'n' i suma svih karti je veca od 21 **igrac je izgubio**
- Ako igrac pritisne 'n' i suma svih karti je >= 15 i <= 21 **igrac je pobjedio**

Ovdje bi inace isli primjeri ispisa, medutim nemam ih za sve slucaje, samo jedan, to moze se vidjeti u folderu
sa slikom ovog zadatka sa ispita.

# [Zadatak 04](./Grupa-A-Zadatak-04.cpp)

Neka je dat sljedeci prototip strukture Igrica:

```cpp
struct Igrica {
	char* imeIgrice = nullptr;
	char* imePublishera = nullptr;
	char Publika[40] = "";

	int brojRemeka = 0;
	int brojRecenzenta = 0;
	int** ocjene = nullptr; // matrica dimenzija (brojRemeka * brojRecenzenata)

	void unos();
	void ispis();
	void dealokacija();
};
```

Uraditi implementaciju zadanih funkcija clanica i po potrebi definirati i implementirati pomocne globalne funkcije. Zatim, u main funkciji dodati sljedece stavke:

- Kreiranje obicnog, ne dinamickog objekta tipa Igrica
- Poziv funkcije clanice unos (funkcije koja radi alokaciju i konzolni unos)
- Poziv funkcije clanice ispis
- Poziv funkcije za dealokaciju objekta

**ZABRANJENO JE KORISTITI UGLASTE ZAGRADE. OBAVEZNO KORISTITI ARITMETIKU POKAZIVACA.**

Nemam citav primjer ispisa pa sam u izradi uradio nesto svoje, svakako nije glavni dio zadatka, makar po meni.
Na slici zadatka sa ispita se moze vidjeti dio ispisa koji se ocekuje na konzoli.

# Grupa B
