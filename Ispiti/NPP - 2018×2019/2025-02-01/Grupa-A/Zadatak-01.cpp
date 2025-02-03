#include<iostream>

int getFirstDigit(int num) {
	while (num / 10 != 0) {
		num /= 10;
	}
	return num;
}

bool doesTheNumberContainDigit(int num, const int digit) {
	while (num != 0) {
		if (num % 10 == digit) {
			return true;
		}

		num /= 10;
	}
	return false;
}

int main() {
	std::srand(std::time(nullptr));

	int broj;
	int prvaCifra;
	float suma = 0;
	int brojac = 0;

	do {
		std::cout << "Unesite broj:\n";
		
		// Comment 2 lines below and uncomment the line with std::cin to test with manual input
		broj = std::rand();
		std::cout << broj << '\n';

		// std::cin >> broj;

		if (doesTheNumberContainDigit(broj, 3) || doesTheNumberContainDigit(broj, 5)) {
			std::cout << "Uneseni broj se ne racuna\n";
		}
		else
		{
			prvaCifra = getFirstDigit(broj);
			std::cout << "Prva cifra unesenog broja je: " << prvaCifra << '\n';
			suma += prvaCifra;
			++brojac;
		}
	} while (!doesTheNumberContainDigit(broj, 5));

	if (brojac != 0) {
		suma /= brojac;
	}

	std::cout << "==============================\n";
	std::cout << "Ukupni prosjek prvih cifri je: " << suma << '\n';

	return 0;
}