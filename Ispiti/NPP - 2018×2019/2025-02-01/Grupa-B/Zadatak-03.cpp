#include<iostream>

void recursiveArrInput(int* arr, const int size, const int i = 0) {
	if (i >= size) {
		return;
	}

	// Comment line below and uncomment the line with std::cin to test with manual input
	*(arr + i) = std::rand() % 40 + 1;

	// std::cin >> *(arr + i);

	recursiveArrInput(arr, size, i + 1);
}

void recursiveArrOutput(int* arr, const int size, const int i = 0) {
	if (i == 0) {
		std::cout << "Elementi niza su: ";
	}
	if (i >= size) {
		std::cout << '\n';
		return;
	}

	std::cout << *(arr + i) << ' ';

	recursiveArrOutput(arr, size, i + 1);
}

int largestOddNumberInArr(int* arr, const int size, const int i = 0, int largestOddIndex = -1) {
	if (i >= size) {
		return (largestOddIndex == -1) ? 2 : *(arr + largestOddIndex);
	}

	if (*(arr + i) % 2 != 0 && (largestOddIndex == -1 || *(arr + i) > *(arr + largestOddIndex))) {
		largestOddIndex = i;
	}

	return largestOddNumberInArr(arr, size, i + 1, largestOddIndex);
}

int countEvenNumsInArr(int* arr, const int size, const int i = 0) {
	if (i >= size) {
		return 0;
	}

	return (*(arr + i) % 2 == 0) + countEvenNumsInArr(arr, size, i + 1);
}

int main() {
	std::srand(std::time(nullptr));

	int size;

	do {
		std::cout << "Unesite velicinu niza (izmedju 5 i 100): ";
		std::cin >> size;

		if (size < 5 || size > 100) {
			std::cout << "Duzina mora biti u intervalu [5, 100]\n";
		}
	} while (size < 5 || size > 100);

	int* arr = new int[size];

	recursiveArrInput(arr, size);
	recursiveArrOutput(arr, size);

	int largestOddNumInArr = largestOddNumberInArr(arr, size);

	if (largestOddNumInArr == 2) {
		std::cout << "Nema najveceg neparnog broja u nizu, jer niz nema parnih brojeva\n";
	}
	else {
		std::cout << "Najveci neparni broj u nizu je: " << largestOddNumInArr << '\n';
	}
	std::cout << "Broj parnih brojeva u nizu je: " << countEvenNumsInArr(arr, size) << '\n';

	delete[] arr;
	arr = nullptr;

	return 0;
}