#include<iostream>

void ispisiOpcije() {
	std::cout << "1 - Ispis parnih brojeva u intervalu [m, n]\n";
	std::cout << "2 - Ispis prostih brojeva u intervalu [m, n]\n";
	std::cout << "3 - Izlaz iz programa\n";
}

int unesiValidnuOpciju() {
	int opcija;
	
	do {
		std::cout << "Odaberite opciju:\n";
		ispisiOpcije();
		std::cout << "Unos opcije: ";
		std::cin >> opcija;

		if (opcija < 1 || opcija > 3) {
			std::cout << "Unesena nevalidna opcija!\n";
		}
	} while (opcija < 1 || opcija > 3);

	return opcija;
}

void unesiInterval(int& m, int &n) {
	std::cout << "Unesite dva cijela broj m i n: ";
	std::cin >> m >> n;
}

void izvrsiOpciju1() {
	int m;
	int n;
	
	unesiInterval(m, n);
	
	for (int i = m; i <= n; ++i) {
		if (i % 2 == 0) {
			std::cout << i << ' ';
		}
	}
	std::cout << '\n';
}

bool daLiJeProstBroj(const int broj) {
	if (broj <= 1) {
		return false;
	}

	for (int i = 2; i * i <= broj; ++i) {
		if (broj % i == 0) {
			return false;
		}
	}

	return true;
}

void izvrsiOpciju2() {
	int m;
	int n;
	
	unesiInterval(m, n);

	for (int i = m; i <= n; ++i) {
		if (daLiJeProstBroj(i)) {
			std::cout << i << ' ';
		}
	}
	std::cout << '\n';
}

int main() {
	int opcija;

	do {
		opcija = unesiValidnuOpciju();

		if (opcija == 1) {
			izvrsiOpciju1();
		}
		else if (opcija == 2) {
			izvrsiOpciju2();
		}
		else {
			std::cout << "Izlazak iz programa...";
		}
	} while (opcija != 3);

	return 0;
}