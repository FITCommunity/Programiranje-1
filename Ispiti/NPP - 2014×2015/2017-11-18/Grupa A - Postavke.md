# [Zadatak 01](./Grupa%20A%20-%20Zadatak%2001.cpp)

Napišite program u kojem ćete omogućiti unos dva prirodna broja manja od 500 koji predstavljaju granice intervala, te pronaći i ispisati kojom cifrom/znamenkom završava umnožak svih prostih brojeva u zadanom intervalu uključujući granične vrijednosti.

# [Zadatak 02](./Grupa%20A%20-%20Zadatak%2002.cpp)

Napisati program koji omogućava unos realnog broja x, cijelog broja m (m > 0) i odabir funkcije za proračun datog izraza. Korisnik bira funkciju unosom jednog od sljedećih karaktera: 's' (sabiranje), 'o' (oduzimanje), 'm' (množenje), 'd' (dijeljenje). U slučaju da korisnik unese karakter koji ne odgovara niti jednoj od predefinisanih vrijednosti ispisati odgovarajuću poruku i ponoviti odabir.
  
Za odabir funkcije s izraz je:
![f(x, m) = (x - 1) * 1 + (x - 2) * 2 + ... + (x - m) * m](https://latex.codecogs.com/gif.latex?f%28x%2C%20m%29%20%3D%20%28x%20-%201%29%20*%201%20&plus;%20%28x%20-%202%29%20*%202%20&plus;%20...%20&plus;%20%28x%20-%20m%29%20*%20m)
Za odabir funkcije o izraz je:
![f(x, m) = (x - 1) * 1 - (x - 2) * 2 - ... - (x - m) * m](https://latex.codecogs.com/gif.latex?f%28x%2C%20m%29%20%3D%20%28x%20-%201%29%20*%201%20-%20%28x%20-%202%29%20*%202%20-%20...%20-%20%28x%20-%20m%29%20*%20m)
itd.
  
Broj faktora u izrazu odgovara unesenom broju m. U rješenju obavezno iskoristiti switch iskaz.

# [Zadatak 03](./Grupa%20A%20-%20Zadatak%2003.cpp)

Napisati program koji omogućava unos pozitivnog broja n te pronalazi njegove parne cifre i formira novi broj u kojem su parne cifra zamijenjena cifrom '5'. Dodatno program treba ispisati razliku unesenog i broja koji se dobije nakon zamjene cifara.