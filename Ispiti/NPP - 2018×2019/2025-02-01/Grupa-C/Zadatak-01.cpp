#include<iostream>

constexpr std::size_t dycesToThrow{ 6 };

int throwDyce() {
	return std::rand() % 6 + 1;
}

void printArray(const int(&arr)[dycesToThrow]) {
	for (int num : arr) {
		std::cout << num << ' ';
	}
	std::cout << '\n';
}

void fillArrayWithDyceThrows(int(&arr)[dycesToThrow]) {
	for (int& num : arr) {
		num = throwDyce();
	}
}

bool hasTaskConditionBeenMet(const int(&dycesThrown)[dycesToThrow]) {
	int counter{ 0 };
	int dyceSidesCounter[6]{ 0 };

	for (int dyceThrown : dycesThrown) {
		++dyceSidesCounter[dyceThrown - 1];
	}

	for (int dyceSideCounter : dyceSidesCounter) {
		if (dyceSideCounter == 3) {
			++counter;
		}
	}

	return counter == 2;
}

int main() {
	std::srand(std::time(nullptr));

	int counter{ 0 };
	int dycesThrown[dycesToThrow]{};

	do {
		++counter;
		fillArrayWithDyceThrows(dycesThrown);

		std::cout << "Bacanje " << counter << ": ";
		printArray(dycesThrown);
	} while (!hasTaskConditionBeenMet(dycesThrown));

	std::cout << "Ukupan broj bacanja: " << counter << '\n';

	std::cout << "Posljednje izvucene vrijednosti: ";
	printArray(dycesThrown);

	return 0;
}