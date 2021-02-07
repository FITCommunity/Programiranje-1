#include <iostream>

using namespace std;

/*
Napišite program, poštujući sve faze procesa programiranja, koji će ispisati sve troznamenkaste brojeve koji su jednaki sumi faktorijela svojih znamenki – ABC = (A + B)! + C! Upotrijebite funkcije:

bool provjera (int);
int faktorijel(int);
*/

bool provjera(int);
int faktorijel(int);

int main()
{
	for (int i = 100; i < 1000; i++) {
		if (provjera(i)) {
			cout << i << "\n";
		}
	}
}

bool provjera(int n) {
	int trecaCifra = n % 10;
	int drugaCifra = n / 10 % 10;
	int prvaCifra = n / 10 / 10 % 10;

	return (faktorijel(prvaCifra + drugaCifra) + faktorijel(trecaCifra)) == n;
}

int faktorijel(int n) {
	if (n == 1 || n == 0) {
		return 1;
	}
	return n * faktorijel(n - 1);
}
