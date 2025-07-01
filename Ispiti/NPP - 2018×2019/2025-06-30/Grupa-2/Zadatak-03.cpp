#include<iostream>

int getRandomBroj() {
	return std::rand() % 90 + 10;
}

void ispisiNiz(const int* const niz, const int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << *(niz + i) << ' ';
	}
	std::cout << '\n';
}

void popuniNizSaRandomVrijednostima(int* const niz, const int size, const int index = 0) {
	if (index == size) {
		return;
	}

	*(niz + index) = getRandomBroj();

	popuniNizSaRandomVrijednostima(niz, size, index + 1);
}

void obrniNiz(int* const niz, const int size, const int index = 0) {
	if (index >= size / 2) {
		return;
	}

	std::swap(*(niz + index), *(niz + size - 1 - index));

	obrniNiz(niz, size, index + 1);
}

int sumaElemenataNiza(const int* const niz, const int size, const int index = 0) {
	if (index == size) {
		return 0;
	}

	return *(niz + index) + sumaElemenataNiza(niz, size, index + 1);
}

int main() {
	std::srand(std::time(nullptr));

	int size;

	do {
		std::cout << "Unesite velicinu niza: ";
		std::cin >> size;
	} while (size <= 0);

	int* niz = new int[size];

	popuniNizSaRandomVrijednostima(niz, size);

	std::cout << "Niz nakon generisanja nasumicnih vrijednosti: ";
	ispisiNiz(niz, size);

	obrniNiz(niz, size);
	
	std::cout << "Niz nakon sto se obrne: ";
	ispisiNiz(niz, size);

	std::cout << "Suma elemenata niza: " << sumaElemenataNiza(niz, size) << '\n';

	delete[] niz;

	return 0;
}