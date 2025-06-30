#include<iostream>

int getRandomBroj() {
	return std::rand() % 100'000;
}

void fillArrayWithRandomValues(int* const niz, const int size, const int index = 0) {
	if (index == size) {
		return;
	}

	*(niz + index) = getRandomBroj();

	fillArrayWithRandomValues(niz, size, index + 1);
}

void printArray(const int* const niz, const int size) {
	std::cout << "Generisani niz: ";
	for (int i = 0; i < size; ++i) {
		std::cout << *(niz + i) << ' ';
	}
	std::cout << '\n';
}

// This does not work for negative numbers but oh well
int brojCifara(const int broj) {
	if (broj < 10) {
		return 1;
	}

	return 1 + brojCifara(broj / 10);
}

void printBrojSaNajviseINajmanjeCifara(const int* const niz, const int size) {
	int brojSaNajviseCifara = *niz;
	int brojSaNajmanjeCifara = *niz;

	for (int i = 1; i < size; ++i) {
		const int trenutniBroj = *(niz + i);
		const int brojCifaraTrenutnogBroja = brojCifara(trenutniBroj);

		if (brojCifara(brojSaNajviseCifara) < brojCifaraTrenutnogBroja) {
			brojSaNajviseCifara = trenutniBroj;
		}
		if (brojCifara(brojSaNajmanjeCifara) > brojCifaraTrenutnogBroja) {
			brojSaNajmanjeCifara = trenutniBroj;
		}
	}

	std::cout << "Broj sa najvise cifara: " << brojSaNajviseCifara << '\n';
	std::cout << "Broj sa najmanje cifara: " << brojSaNajmanjeCifara << '\n';
}

int main() {
	std::srand(std::time(nullptr));

	int size;

	std::cout << "Unesite velicinu niza: ";
	std::cin >> size;

	int* niz = new int[size];

	fillArrayWithRandomValues(niz, size);
	printArray(niz, size);
	printBrojSaNajviseINajmanjeCifara(niz, size);

	delete[] niz;

	return 0;
}