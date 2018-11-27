# Zadatak 01
___
Poštujući sve faze procesa programiranja, napisati program koji korisniku omogućava unos cijelog broja N, te izračunava geometrijsku sredinu svih neparnih brojeva u intervalu [1, N] koji nisu djeljivi sa brojem 5. Rezultat treba biti zaokružen na dvije decimale.
Geometrijska sredina n brojeva se racuna po formuli:
![](https://latex.codecogs.com/gif.latex?%28a_1%20*%20a_2%20*%20...%20*%20a_n%29%20%5E%20%7B%5Cfrac%7B1%7D%7Bn%7D%7D)  ili ![](https://latex.codecogs.com/gif.latex?%5Csqrt%5Bn%5D%7Ba_1%20*%20a_2%20*%20...%20*%20a_n%7D)

Za uneseno n = 3, rezulat je: 1,817
# Zadatak 02
___
Napisati program koji omgogućava unos pozitivnog broja n te pronalazi njegovu najmanju cifru i formira novi broj u kojem je najmanja cifra zamijenjena cifrom '3'. Ukoliko uneseni broj n sadrži više istih cifara koje su najmanja, tada je potrebno zamijeniti svaku od njih. Dodatno program treba ispisati razliku unesenog broja koji se dobije nakon zamjene najmanje cifre.

Primjer izlata:
```
Unesite pozitivan broj: 5865
Broj nakon promjene najmanje cifre: 3863
Razlika brojeva iznosi: 2002
```

# Zadatak 03
___
Napisati program koji korisniku omogućava unos realnog broja x, cijelog broja m i odabir funkcije za proračun datog izraza. Korisnik bira funkciju unosom sljedećih karaktera 's' (sin), 'c' (cos), 'q' (sqrt), 'p' (pow). U slučaju da korisnik unese karakter koji ne odgovara niti jednoj od predefinisanih vrijednosti ispisati odgovarajuću poruku i ponoviti odabir. Za funkciju pow() drugi parametar treba biti 3.

Za odabranu funkciju sin izraz je:
![](https://latex.codecogs.com/gif.latex?f%28x%2C%20m%29%20%3D%20%28%5Csin%28x%29%20&plus;%201%29%20*%20%28%5Csin%28x%29%20&plus;%202%29%20*%20...%20*%20%28%5Csin%28x%29%20&plus;%20m%29)
Broj faktora u izrazu odgovara unesenom broju m. U rješenju obavezno iskoristiti switch iskaz.