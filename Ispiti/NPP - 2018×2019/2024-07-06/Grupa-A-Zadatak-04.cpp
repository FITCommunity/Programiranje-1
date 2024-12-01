#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstddef>
#include<cstring>

char* getDynamicStrCopy(const char* const str) {
	if (str == nullptr) {
		return nullptr;
	}

	const std::size_t size{ strlen(str) + 1 };
	char* const copiedStr{ new char[size] {} };
	strcpy(copiedStr, str);

	return copiedStr;
}

struct Igrica {
	char* imeIgrice = nullptr;
	char* imePublishera = nullptr;
	char Publika[40] = "";

	int brojRemeka = 0;
	int brojRecenzenta = 0;
	int** ocjene = nullptr; // matrica dimenzija (brojRemeka * brojRecenzenata)

	void unos() {
		if (imeIgrice != nullptr) {
			dealokacija();
		}

		char temp[200];

		std::cout << "Unesite ime igrice:\n";
		std::cin.getline(temp, 200);
		imeIgrice = getDynamicStrCopy(temp);

		std::cout << "Unesite ime publishera igrice:\n";
		std::cin.getline(temp, 200);
		imePublishera = getDynamicStrCopy(temp);

		std::cout << "Unesite publiku za koga je igrica namjenjena npr. odrasli, mladi, djeca, itd:\n";
		std::cin.getline(Publika, std::size(Publika));

		std::cout << "Unesite broj remake-a:\n";
		std::cin >> brojRemeka;

		std::cout << "Unesite broj recenzenata:\n";
		std::cin >> brojRecenzenta;

		ocjene = new int* [brojRemeka] {};
		for (int i = 0; i < brojRemeka; ++i) {
			*(ocjene + i) = new int[brojRecenzenta] {};

			for (int ii = 0; ii < brojRecenzenta; ++ii) {
				std::cout << "Unesite ocjenu igrice za remake broj " << i << " od strane ";
				std::cout << "recenzenta broj " << ii << ": ";
				std::cin >> *(*(ocjene + i) + ii);
			}
		}
	}

	void ispis() {
		std::cout << "Ime igrice -> " << imeIgrice << '\n';
		std::cout << "Ime publishera -> " << imePublishera << '\n';
		std::cout << "Publika -> " << Publika << '\n';
		std::cout << "Broj remeka -> " << brojRemeka << '\n';
		std::cout << "Broj recenzenta -> " << brojRecenzenta << '\n';
		std::cout << "Ocjene (remeki su redovi, recenzenti su kolone):\n";

		for (int i = 0; i < brojRemeka; ++i) {
			for (int ii = 0; ii < brojRecenzenta; ++ii) {
				std::cout << *(*(ocjene + i) + ii) << ' ';
			}
			std::cout << '\n';
		}
	}

	void dealokacija() {
		delete[] imeIgrice;
		imeIgrice = nullptr;

		delete[] imePublishera;
		imePublishera = nullptr;

		for (int i = 0; i < brojRemeka; ++i) {
			delete[] *(ocjene + i);
		}
		delete[] ocjene;
		ocjene = nullptr;

		brojRemeka = 0;
		brojRecenzenta = 0;
	}
};

int main() {
	Igrica igrica{};

	igrica.unos();
	igrica.ispis();

	igrica.dealokacija();

	return 0;
}
