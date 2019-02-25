#include <iostream>
#include <cmath>

using namespace std;

int duzina(int broj)
{
	int brojac = 0;
	while (broj)
	{
		brojac++;
		broj /= 10;
	}
	return brojac;
}
bool isProstPalindrom(int broj)
{
	for (int i = 2; i * i < broj; i++)
		if (broj % i == 0)
			return false;

	int d1 = 0;
	int d2 = duzina(broj);
	while (d1 != d2 / 2)
	{
		int c1 = int(broj / pow(10, d1)) % 10;
		int c2 = int(broj / pow(10, d2 - 1)) % 10;

		if (c1 != c2) 
			return false;
		d1++;
		d2--;
	}
	return true;
}
int main()
{
	
	int broj;
	while (cout << "Unesite broj: ", cin >> broj, broj > 100)
		if (isProstPalindrom(broj))
			cout << "Broj " << broj << " je i prost i palindrom" << endl;

	system("pause>0");
	return 0;
}