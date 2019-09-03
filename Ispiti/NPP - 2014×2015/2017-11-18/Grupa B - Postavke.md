# Zadatak 01

Napišite program, u kojem ćete omogućiti unos dva prirodna broja manja od 500 koji predstavljaju granice intervala, te pronaći i ispisati kojom znamenkom završava najveći prosti broj u zadanom intervalu ne uključujući granične vrijednosti.

# Zadatak 02

Napisati program koji omogućava unos realnog broja x, cijelog broja m (m > 0) i odabir funkcije za proračun datog izraza. Korisnik bira funkciju unosom jednog od sljedećih karaktera: 's' (sabiranje), 'o' (oduzimanje), 'm' (množenje), 'd' (dijeljenje). U slučaju da korisnik unese karakter koji ne odgovara niti jednoj od predefinisanih vrijednosti ispisati odgovarajuću poruku i ponoviti odabir.
  
Za odabir funkcije s izraz je:
![f(x, m) = [(1 + x)/1] + [(2 + x)/2] + ... + [(m + x)/m]](https://latex.codecogs.com/gif.latex?f%28x%2C%20m%29%20%3D%20%5Cfrac%7B1%20&plus;%20x%7D%7B1%7D%20&plus;%20%5Cfrac%7B2%20&plus;%20x%7D%7B2%7D%20&plus;%20...%20&plus;%20%5Cfrac%7Bm%20&plus;%20x%7D%7Bm%7D)
Za odabir funkcije o izraz je:
![f(x, m) = [(1 + x)/1] - [(2 + x)/2] - ... - [(m + x)/m]](https://latex.codecogs.com/gif.latex?f%28x%2C%20m%29%20%3D%20%5Cfrac%7B1%20&plus;%20x%7D%7B1%7D%20-%20%5Cfrac%7B2%20&plus;%20x%7D%7B2%7D%20-%20...%20-%20%5Cfrac%7Bm%20&plus;%20x%7D%7Bm%7D)
itd.
  
Broj faktora u izrazu odgovara unesenom broju m. U rješenju obavezno iskoristiti switch iskaz.

# Zadatak 03

Napisati program koji omogućava unos pozitivnog broja n te pronalazi njegove neparne cifre i formira novi broj u kojem su neparne cifre zamijenjene cifrom '2'. Dodatno program treba ispisati razliku unesenog i broja koji se dobije nakon zamjene cifara.