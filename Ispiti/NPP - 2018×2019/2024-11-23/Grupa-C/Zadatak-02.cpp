#include<iostream>

void printOptions() {
	std::cout << "1 - Odabir ove opcije primorava korisnika na unos dvije cjelobrojne vrijednosti m i n, pri cemu\n";
	std::cout << "    mora biti ispostovano ogranicenje(0 <= m <= n). Program treba ispisati sve brojeve u intervalu\n";
	std::cout << "    [m, n] koji su dio fibonaccijevog niza i koji su djeljivi sa brojem cifara od kojih se sastoje.\n";

	std::cout << "2 - Odabir ove opcije primorava korisnika na unos jedne cjelobrojne vrijednosti n, za koju vazi\n";
	std::cout << "    ogranicenje 1 < n <= 50. Program treba da ispise sumu cifara unesenog broja.\n";

	std::cout << "3 - Odabir ove opcije oznacava izlaz iz programa.\n";
}

void enterOption(short& option) {
	do {
		printOptions();
		std::cout << "Unesite jednu od opcija navedenih iznad: ";
		std::cin >> option;

		if (option < 1 || option > 3)
		{
			std::cout << "\nUnesena opcija ne postoji!\n\n";
		}
	} while (option < 1 || option > 3);
}

int numberOfDigits(int x) {
	if (x == 0) {
		return 1;
	}

	int counter = 0;

	while (x != 0) {
		++counter;
		x /= 10;
	}

	return counter;
}

int sumDigits(int x) {
	int sum = 0;

	while (x != 0) {
		int lastDigit = x % 10;
		sum += lastDigit;
		x /= 10;
	}

	return sum;
}

void printFibonacciSequence(int from, int to) {
	int a = 0;
	int b = 1;

	while (a <= to || b <= to) {
		if (a >= from && a <= to && a % numberOfDigits(a) == 0) {
			std::cout << a << ' ';
		}
		if (b >= from && b <= to && b % numberOfDigits(b) == 0) {
			std::cout << b << ' ';
		}

		a += b;
		b += a;
	}
}

void functionality1() {
	int m, n;

	do {
		std::cout << "Unesite m i n postujuci pravilo (0 <= m <= n): ";
		std::cin >> m >> n;

		if (m < 0) {
			std::cout << "m ne moze biti manje od 0\n";
		}
		else if (m > n) {
			std::cout << "m ne moze biti vece od n\n";
		}
	} while (m < 0 || m > n);

	std::cout << "Brojevi fibonaccijevog niza koji su u intervalu [" << m << ", " << n << "] i djeljivi su\n";
	std::cout << "sa svojim brojem cifara su: ";
	printFibonacciSequence(m, n);
	std::cout << '\n';
}

void Functionality2() {
	int userInput;

	do {
		std::cout << "Unesite broj u intervalu [2, 50]: ";
		std::cin >> userInput;
	} while (userInput <= 1 || userInput > 50);

	std::cout << "Suma cifara unesenog broja " << userInput << " je " << sumDigits(userInput) << '\n';
}

int main() {
	short option;

	do {
		enterOption(option);

		if (option == 1) {
			functionality1();
		}
		else if (option == 2) {
			Functionality2();
		}
	} while (option != 3);

	return 0;
}