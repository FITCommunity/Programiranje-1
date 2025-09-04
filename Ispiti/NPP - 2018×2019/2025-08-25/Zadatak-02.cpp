#include<iostream>

void ispisiValidneUnose() {
	std::cout << "Unesi K(kamen), P(papir), M(makaze), Q(prekid igre)\n";
}

char unosPotezaZaIgraca() {
	char potez;

	do {
		std::cout << "Unesi potez: ";
		std::cin >> potez;

		potez = std::toupper(potez);
		if (potez != 'K' && potez != 'P' && potez != 'M' && potez != 'Q') {
			std::cout << "Nevalidan unos!\n";
			ispisiValidneUnose();
		}
	} while (potez != 'K' && potez != 'P' && potez != 'M' && potez != 'Q');

	return potez;
}

char unosPotezaZaKompjuter() {
	const char potez[] = "KPM";

	const int index = std::rand() % (std::size(potez) - 1);

	std::cout << "Kompjuter je izabrao: " << potez[index] << '\n';

	return potez[index];
}

int main() {
	std::srand(std::time(nullptr));

	int bodovi = 3;
	char potezIgraca;
	char potezKompjutera;

	ispisiValidneUnose();
	std::cout << "Pocetni bodovi: " << bodovi << "\n\n";

	do {
		potezIgraca = unosPotezaZaIgraca();

		if (potezIgraca == 'Q') {
			std::cout << "Prekid igre\n";
		}
		else {
			potezKompjutera = unosPotezaZaKompjuter();

			if (potezIgraca == potezKompjutera) {
				std::cout << "Jednako (niko ne dobija bod)\n";
			}
			else if (potezIgraca == 'K' && potezKompjutera == 'M'
				|| potezIgraca == 'M' && potezKompjutera == 'P'
				|| potezIgraca == 'P' && potezKompjutera == 'K') {
				std::cout << "Pobjedio si! (+1)\n";
				++bodovi;
			}
			else {
				std::cout << "Izgubio si! (-1)\n";
				--bodovi;
			}
		}

		std::cout << "Trenutni bodovi: " << bodovi << '\n';
	} while (potezIgraca != 'Q' && bodovi > 0 && bodovi < 5);

	if (bodovi == 0 || potezIgraca == 'Q') {
		std::cout << "Poraz!\n";
	}
	else {
		std::cout << "Pobjeda!\n";
	}

	return 0;
}