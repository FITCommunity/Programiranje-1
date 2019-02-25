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

int main()
{
	int brojElemenata;
	while (cin >> brojElemenata, brojElemenata <= 0);

	int *niz = new int[brojElemenata] {};
	Popuni(niz, brojElemenata);
	Ispis(niz, brojElemenata);

	delete[] niz;

	system("pause>0");
	return 0;
}