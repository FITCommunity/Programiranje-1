#include <iostream>
#include <cmath>

using namespace std;

void Ispis(int *niz, int velicina)
{
	for (int i = 0; i < velicina; i++)
		cout << niz[i] << endl;
}

void Popuni(int *niz, int velicina, int i = 0)
{
	if (i < 0 || i >= velicina)
		return;

	if (i == 0)
	{
		*(niz + 0) = 1;
		*(niz + 1) = 1;
		i++;
	}
	else
	{
		int temp = *(niz + i - 1) + *(niz + i - 2);
		if (temp < 0) return;

		*(niz + i) = temp;
	}
	
	Popuni(niz, velicina, i + 1);
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