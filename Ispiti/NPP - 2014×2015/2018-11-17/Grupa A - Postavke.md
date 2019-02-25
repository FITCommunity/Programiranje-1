# Zadatak 01
___
Poštujući sve faze procesa programiranja, napisati program koji korisniku omogućava unos cijelog broja N, te izračunava vrijednost sume faktorijela neparnih brojeva u intervalu [1, N] koji nisu djeljivi sa brojem 7. Rezultat treba biti zaokruzen na dvije decimale. Suma faktorijela prikazana je sljedećom formulom S = 1! + 3! + 5! + ... + N!

# Zadatak 02
___
Napisati program u kojem je potrebno unijeti odabrani broj cifara počevši od cifre najveće težinske vrijednosti, pa od njih sastaviti i ispisati prirodni broj. Unos cifara se prekida kada se unese broj manji od 0 ili veći od 9. Ispis neka bude oblika:
```
Upisi cifru: 2
Upisi cifru: 8
Upisi cifru: -1
Broj sastavljen od zadanih cifara je 28.
```

# Zadatak 03
___
Napisati program koji korisniku omogućava unos realnog broja x, cijelog broja m i odabir funkcije za proračun datog izraza. Korisnik bira funkciju unosom sljedećih karaktera 's' (sin), 'c' (cos), 'q' (sqrt), 'p' (pow). U slučaju da korisnik unese karakter koji ne odgovara niti jednoj od predefinisanih vrijednosti ispisati odgovarajuću poruku i ponoviti odabir. Funkciji pow postavite broj 2 za drugi parametar:

Za odabranu funkciju sin izraz je:
![](https://latex.codecogs.com/gif.latex?f%28x%2C%20m%29%20%3D%201%20&plus;%20%5Cfrac%7B1%7D%7B%5Csin%28x%29%20&plus;%20x%7D%20&plus;%20%5Cfrac%7B2%7D%7B%5Csin%28%5Cfrac%7Bx%7D%7B2%7D%29%20&plus;%20x%7D%20&plus;%20...%20&plus;%20%5Cfrac%7Bm%7D%7B%5Csin%28%5Cfrac%7Bx%7D%7Bm%7D%29%20&plus;%20x%7D)
Broj faktora u izrazu odgovara unesenom broju m. U rješenju obavezno iskoristiti switch iskaz.