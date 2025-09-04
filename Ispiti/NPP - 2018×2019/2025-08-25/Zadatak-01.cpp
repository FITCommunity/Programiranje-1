#include<iostream>

int generisiBroj() {
	return std::rand() % 501 + 100;
}

bool daLiBrojSadrziCifru6(int broj) {
	while (broj != 0) {
		const int zadnjaCifra = broj % 10;

		if (zadnjaCifra == 6) {
			return true;
		}

		broj /= 10;
	}

	return false;
}

int main() {
	std::srand(std::time(nullptr));

	int generisaniBroj;
	int brojac = 0;
	int suma = 0;

	do {
		generisaniBroj = generisiBroj();
		// Useful for debugging
		// std::cout << "DEBUG -> " << generisaniBroj << '\n';

		if (daLiBrojSadrziCifru6(generisaniBroj)) {
			++brojac;
			std::cout << "Broj sa cifrom 6: " << generisaniBroj << '\n';
		}
		else {
			suma += generisaniBroj;
		}
	} while (generisaniBroj >= 120);

	std::cout << "\nKRAJ PROGRAMA\n";
	std::cout << "Suma brojeva bez cifre 6: " << suma << '\n';
	std::cout << "Ukupno brojeva sa cifrom 6: " << brojac << '\n';

	return 0;
}