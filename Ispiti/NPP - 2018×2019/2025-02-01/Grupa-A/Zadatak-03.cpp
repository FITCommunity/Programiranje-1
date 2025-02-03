#include<iostream>

void recursiveArrInput(int* arr, const int size, const int i = 0) {
	if (i >= size) {
		return;
	}

	std::cout << "Unesite element na indexu: " << i << '\n';
	// Comment 2 lines below and uncomment the line with std::cin to test with manual input
	*(arr + i) = std::rand();
	std::cout << *(arr + i) << '\n';

	// std::cin >> *(arr + i);

	recursiveArrInput(arr, size, i + 1);
}

float averageOfArr(int* arr, const int size, const int i = 0) {
	if (i >= size) {
		return 0.0f;
	}

	return (float)*(arr + i) / size + averageOfArr(arr, size, i + 1);
}

int smallestNumInArr(int* arr, const int size, const int i = 0, int smallestNumIndex = 0) {
	if (i >= size) {
		return *(arr + smallestNumIndex);
	}

	if (*(arr + smallestNumIndex) > *(arr + i)) {
		smallestNumIndex = i;
	}

	return smallestNumInArr(arr, size, i + 1, smallestNumIndex);
}

int largestNumInArr(int* arr, const int size, const int i = 0, int largestNumIndex = 0) {
	if (i >= size) {
		return *(arr + largestNumIndex);
	}

	if (*(arr + largestNumIndex) < *(arr + i)) {
		largestNumIndex = i;
	}

	return largestNumInArr(arr, size, i + 1, largestNumIndex);
}

int main() {
	std::srand(std::time(nullptr));

	int size;

	do {
		std::cout << "Unesite velicinu niza:\n";
		std::cin >> size;

		if (size < 1 || size > 50) {
			std::cout << "Duzina mora biti u intervalu [1, 50]\n";
		}
	} while (size < 1 || size > 50);

	int* arr = new int[size];

	recursiveArrInput(arr, size);

	std::cout << "Najmanji broj u nizu je: " << smallestNumInArr(arr, size) << '\n';
	std::cout << "Najveci broj u nizu je: " << largestNumInArr(arr, size) << '\n';
	std::cout << "Prosjek niza je: " << averageOfArr(arr, size) << '\n';

	delete[] arr;
	arr = nullptr;

	return 0;
}