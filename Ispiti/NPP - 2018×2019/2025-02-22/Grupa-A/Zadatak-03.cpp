#include<iostream>

int sumDigits(int num) {
	if (num == 0) {
		return 0;
	}

	int lastDigit = num % 10;

	return lastDigit + sumDigits(num / 10);
}

void handleIntInput(int& num) {
	do {
		std::cout << "Unesite broj u opsegu od 100 do 100 000\n";
		std::cin >> num;
	} while (num < 100 || num > 100'000);
}

int main() {
	int input;

	handleIntInput(input);

	do {
		input = sumDigits(input);
		std::cout << "Rezultat sume znamenki je: ";
		std::cout << input << '\n';
	} while (input >= 10);

	std::cout << "Finalna suma znamenki je: " << input << '\n';

	return 0;
}