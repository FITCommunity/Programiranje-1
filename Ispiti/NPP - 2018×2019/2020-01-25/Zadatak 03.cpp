#include <iostream>
#include <cmath>

using namespace std;

void Ispis(int *niz, int velicina)
{
	for (int i = 0; i < velicina; i++)
		cout << niz[i] << endl;
}

void Popuni(int *niz, int velicina, int i = 0, int e = 1)
{
	if (i < 0 || i >= velicina)
		return;

	int temp = pow(2, e);

	if (temp < 0) return;

	*(niz + i) = temp;
	Popuni(niz, velicina, i + 1, e + 1);
}

int Postoji(int *niz, int vel, int broj, int i = 0)
{
	if (i >= vel)
		return -1;
	if (*(niz + i) == broj)
		return i;
	return Postoji(niz, vel, broj, i + 1);
}

int main()
{
	int brojElemenata,broj;
	while (cout << "Unesite broj elemenata niza: ", cin >> brojElemenata, brojElemenata <= 0);

	int *niz = new int[brojElemenata] {};
	Popuni(niz, brojElemenata);
	Ispis(niz, brojElemenata);
	
	cout << "Koji broj u nizu trazite? ";
	cin >> broj;
	
	int broj2 = Postoji(niz, brojElemenata, broj);
	
	if (broj2 == -1)
		cout << "Trazeni broj ne postoji u nizu." << endl;
	else
		cout << "Trazeni broj je na lokaciji: " << broj2 + 1 << endl;

	delete[] niz;

	system("pause>0");
	return 0;
}