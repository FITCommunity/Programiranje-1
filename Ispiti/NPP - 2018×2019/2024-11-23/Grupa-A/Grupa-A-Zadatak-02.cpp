#include<iostream>

void printOptions() {
	std::cout << "-----------------------------------------------------------------\n";
	std::cout << "               Option List\n";
	std::cout << "-----------------------------------------------------------------\n";
	std::cout << "1 -> Ispis brojeva u intervalu [m, n] koji imaju prvu parnu cifru\n";
	std::cout << "2 -> Ispis brojeva u intervalu [2, n] koji su prosti sa ciframa\n";
	std::cout << "     sortiranim silaznim redoslijedom\n";
	std::cout << "3 -> Izlazak iz programa\n";
	std::cout << "-----------------------------------------------------------------\n";
}

void enterOption(int& option) {
	do {
		printOptions();
		std::cout << "Unesi jednu od gore navedenih opcija: ";
		std::cin >> option;
		
		if (option < 1 || option > 3) {
			std::cout << "Nije odabrana validna opcija\n";
		}
	} while (option < 1 || option > 3);
}

bool isFirstDigitEven(int x) {
	while (x / 10 != 0) {
		x /= 10;
	}

	return x % 2 == 0;
}

void executeOption1() {
	int m{};
	int n{};

	do {
		std::cout << "Unesite interval [m, n]: ";
		std::cin >> m >> n;

		if (m <= 0) {
			std::cout << "Vrijednost za m(" << m << ") ne moze biti manja ili jednaka 0\n";
		} 
		else if (n < m) {
			std::cout << "Vrijednost za n(" << n << ") ne moze biti manja od vrijednosti za m(" << m << ")\n";
		}

	} while (m <= 0 || n < m);

	std::cout << "Brojevi u intervalu [" << m << ", " << n << "] sa prvom parnom cifrom:\n";
	for (int i = m; i <= n; ++i) {
		if (isFirstDigitEven(i)) {
			std::cout << i << ' ';
		}
	}
	std::cout << '\n';
}

bool isPrime(int x) {
	if (x <= 1) {
		return false;
	}
	
	for (int i = 2; i * i <= x; ++i) {
		if (x % i == 0) {
			return false;
		}
	}

	return true;
}

bool isSortedDesc(int x) {
	int digit{ x % 10 };
	x /= 10;

	while (x != 0) {
		int lastDigit{ x % 10 };

		if (lastDigit < digit) {
			return false;
		}

		digit = lastDigit;

		x /= 10;
	}

	return true;
}

void executeOption2() {
	int n{};

	std::cout << "Unesite broj n: ";
	std::cin >> n;

	std::cout << "Brojevi u intervalu [2, " << n << "] koji su prosti i ";
	std::wcout << "imaju cifre sortirane silaznim redoslijedom:\n";
	for (int i = 2; i <= n; ++i) {
		if (isPrime(i) && isSortedDesc(i)) {
			std::cout << i << ' ';
		}
	}
	std::cout << '\n';
}

int main() {
	int option{};

	do {
		enterOption(option);

		switch (option)
		{
		case 1:
			executeOption1();
			break;
		case 2:
			executeOption2();
			break;
		}
	} while (option != 3);

	return 0;
}
