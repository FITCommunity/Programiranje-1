#include<iostream>

int baciKocku() {
	return std::rand() % 6 + 1;
}

void unosOpcije(char& opcija) {
	do {
		std::cout << "Unesite y ako zelite igrati ili n ako ne zelite!\n";
		std::cin >> opcija;

		if (opcija != 'y' && opcija != 'n') {
			std::cout << "Ups, unjeli ste pogresan znak!\n";
		}
	} while (opcija != 'y' && opcija != 'n');
}

int main() {
	std::srand(std::time(nullptr));

	int rezultat = 0;
	int jedanZaRedom = 0;
	int sestZaRedom = 0;
	int kocka;
	char opcija;

	do {
		unosOpcije(opcija);

		if (opcija == 'n') {
			break;
		}
		
		std::cout << "Kocka je bacena... Kockica je pala na: ";

		// Comment 2 lines below and uncomment the line with std::cin to test with manual input
		kocka = baciKocku();
		std::cout << kocka << '\n';

		// std::cin >> kocka;

		rezultat += kocka;
		std::cout << "Vas novi rezultat je: " << rezultat << '\n';

		if (kocka == 1) {
			++jedanZaRedom;
		}
		else if (kocka == 6) {
			++sestZaRedom;
		}
		else {
			jedanZaRedom = 0;
			sestZaRedom = 0;
		}

		// Nisam siguran da li se igra automatski zavrsi kada igrac ima rezultat u intervalu [28, 30]
		// ili se treba ako pritisne 'n' prije to smatrati tako, ja sam uzeo former pa na ispitu
		// samo za svaki slucaj pitati sta i kako
		if (rezultat >= 28 && rezultat <= 30) {
			break;
		}
	} while (rezultat <= 30 && jedanZaRedom != 3 && sestZaRedom != 3);

	if (jedanZaRedom == 3) {
		std::cout << "Bacili ste kocku 1, 3 puta zaredom automatski ste izgubili\n";
	}
	else if (sestZaRedom == 3) {
		std::cout << "Bacili ste kocku 6, 3 puta zaredom automatski ste pobjedili\n";
	}
	else if (rezultat >= 28 && rezultat <= 30) {
		std::cout << "Suma bacenih kockica je u intervalu [28, 30] pobjedili ste\n";
	}
	else if (rezultat < 28) {
		std::cout << "Suma bacenih kockica je manja od 28, izgubili ste\n";
	}
	else if (rezultat > 30) {
		std::cout << "Suma bacenih kockica je veca od 30, izgubili ste\n";
	}

	return 0;
}