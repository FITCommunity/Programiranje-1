#include <iostream>

using namespace std;

int main()
{
	int broj = 0;
	while (broj < 1)
	{
		cout << "Unesite pozitivan broj: ";
		cin >> broj;
	}

	int binarniBroj = 0;
	int brojac = 0;
	int temp = broj;
	while (temp)
	{
		binarniBroj = binarniBroj + pow(10, brojac) * (temp % 2);
		brojac++;
		temp /= 2;
	}

	cout << broj << " -> " << binarniBroj << endl;

	system("pause>0");
	return 0;
}