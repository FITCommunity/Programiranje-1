# Zadatak 01

Napisati program koji korisniku omogućava unos realnog broja x i odabir funkcije za proračun datog izraza. Korisnik bira funkciju unosom jednog od sljedećih karaktera: 's' (sin), 'c' (cos). U slučaju da korisnik unese karakter koji ne odgovara niti jednoj od predefinisanih vrijednosti ispisati odgovarajuću poruku i ponoviti odabir. Za određenu funkciju sin() izraz je:

![f(x) = 1 + [1/(sin(x) + x)] + [2/(sin(x/2) + x)] + ... + [x/(sin(x/x) + x)]](https://latex.codecogs.com/gif.latex?f%28x%29%20%3D%201%20&plus;%20%5Cfrac%7B1%7D%7B%5Csin%28x%29%20&plus;%20x%7D%20&plus;%20%5Cfrac%7B2%7D%7B%5Csin%28%5Cfrac%7Bx%7D%7B2%7D%29%20&plus;%20x%7D%20&plus;%20...%20&plus;%20%5Cfrac%7Bn%7D%7B%5Csin%28%5Cfrac%7Bx%7D%7Bx%7D%29%20&plus;%20x%7D)

# Zadatak 02

Napisati program koji simulira bacanje 3 kockice (jedna kockica ima 6 strana i na tim stranama su brojevi 1 - 6). Simuliranje bacanja svake kockice ostvariti funkcijom rand() % 6 + 1. Simulirati konstantno bacanje sve tri kockice dok se u dva uzastopna bacanja ne desi da se dobiju isti brojevi na sve tri kockice (npr. u šestom bacanju se dobiju brojevi 2, 2, 2 a u sedmom 4, 4, 4 na sve tri kockice). Ispisati koliko je ukupno bilo bacanja dok se nije ispunio navedeni uslov. Nije potrebno tražiti bilo kakav unos od korisnika.

# Zadatak 03

Napisati program koji će omogućiti unos cijelobrojnih parnih vrijednosti sa neparnim brojem cifara u jednodimenzionalni niz od 20 elemenata. Zatim napraviti funkciju koja će primati kao argument taj niz. Funkcija treba da izbaci iz niza sve brojeve djeljive sa 6, a da ostavi u nizu sve ostale brojeve. Izbacivanje karaktera se treba napraviti tako da se ostatak niza pomjeri u lijevo da ne bi bilo praznih elemenata. To pomjeranje je potrebno uraditi prilikom izbacivanja svakog elementa a ne na kraju posto su svi elementi djeljivi sa 6.

Obavezno voditi računa o optimizaciji coda-a koja posebno utiče na broj bodova u ovom zadatku.

# Zadatak 04

Neka je data matrica dimenzija 10x12 u kojoj svaki red predstavlja uposlenika firme, a svaka kolona mjesec u godini. Elementi matrice predstavljaju evidentirane plate po mjesecima i uposlenicima (plata je iznos sa dvije decimalne cifre iza zareza). Kreirati a potom u glavnom programu testirati sljedeće funkcije:
* Funkciju za unos plata za sve uposlenike za odabrani mjesec. Omogućiti poziv funkcije iz main funkcije više puta kako bi se unijeli podaci za sve mjesece u godini.
* Funkciju koja za odabranog uposlenika vrši ispis plata po mjesecima. Ukoliko je za neki od mjeseci uposlenik bio na neplaćenom odsustvu, njegova plata će biti 0 i neće se ispisivati za taj mjesec. Pored toga, funkcija kao rezultat vraća prosjećnu platu za cijelu godinu za odabranog uposlenika uključujući i mjesece otsustva.
* Funkciju koja pronalazi uposlenika sa najvećom prosječnom platom i ispisuje iznos prosječne plate zaokruzen na dvije decimale, te vraća indeks tog uposlenika