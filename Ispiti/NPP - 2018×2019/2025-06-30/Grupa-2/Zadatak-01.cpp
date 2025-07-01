#include<iostream>

int baciKocku() {
	return std::rand() % 6 + 1;
}

void popuniNizSaNulama(int(&arr)[6]) {
	for (int& num : arr) {
		num = 0;
	}
}

void baciKocke(int(&zadnjeDobivenaLicaKocke)[7], int(&pojavljivanjeLicaKocke)[6]) {
	popuniNizSaNulama(pojavljivanjeLicaKocke);

	for (int& liceKocke : zadnjeDobivenaLicaKocke) {
		liceKocke = baciKocku();
		++pojavljivanjeLicaKocke[liceKocke - 1];
	}
}

void ispisiNiz(const int(&arr)[7]) {
	for (const int num : arr) {
		std::cout << num << ' ';
	}
	std::cout << '\n';
}

bool daLiSeNastavljaBacanje(const int(&pojavljivanjeLicaKocke)[6]) {
	bool found3 = false;
	bool found4 = false;

	for (const int brojPojavljivanje : pojavljivanjeLicaKocke) {
		if (brojPojavljivanje == 3) {
			found3 = true;
		}
		else if (brojPojavljivanje == 4) {
			found4 = true;
		}
	}

	return !found3 || !found4;
}

int main() {
	std::srand(std::time(nullptr));

	int brojBacanja = 0;
	int zadnjeDobivenaLicaKocke[7]{};
	int pojavljivanjeLicaKocke[6]{};

	do {
		baciKocke(zadnjeDobivenaLicaKocke, pojavljivanjeLicaKocke);
		++brojBacanja;

		std::cout << "Bacanje #" << brojBacanja << ": ";
		ispisiNiz(zadnjeDobivenaLicaKocke);
	} while (daLiSeNastavljaBacanje(pojavljivanjeLicaKocke));

	std::cout << "Ukupan broj bacanja: " << brojBacanja << '\n';
	std::cout << "Posljednje izvucene vrijednosti: ";
	ispisiNiz(zadnjeDobivenaLicaKocke);

	return 0;
}