#include<iostream>

bool daLiJeProstBroj(const int broj) {
	if (broj <= 1) {
		return false;
	}

	for (int i = 2; i * i <= broj; ++i) {
		if (broj % i == 0) {
			return false;
		}
	}

	return true;
}

void ispisiKProstihBrojevaManjihOdN(int n, const int k) {
	std::cout << k << " najblizih prostih brojeva manjih od " << n << ": ";

	int brojProstihPronadenih = 0;
	int* prostiBrojevi = new int[k] {};

	while (brojProstihPronadenih != k) {
		--n;
		if (daLiJeProstBroj(n)) {
			prostiBrojevi[brojProstihPronadenih] = n;
			++brojProstihPronadenih;
		}
	}

	for (int i = k - 1; i >= 0; --i) {
		std::cout << prostiBrojevi[i] << ' ';
	}
	std::cout << '\n';

	delete[] prostiBrojevi;
}

void ispisiKProstihBrojevaVeciOdN(int n, const int k) {
	std::cout << k << " najblizih prostih brojeva vecih od " << n << ": ";
	
	int brojProstihPronadenih = 0;
	while (brojProstihPronadenih != k) {
		++n;
		if (daLiJeProstBroj(n)) {
			std::cout << n << ' ';
			++brojProstihPronadenih;
		}
	}

	std::cout << '\n';
}

int main() {
	int n, k;

	do {
		std::cout << "Unesite broj n (10-1000, NE smije biti prost): ";
		std::cin >> n;
	} while (n < 10 || n > 1000 || daLiJeProstBroj(n));

	do {
		std::cout << "Unesite broj k (k < n): ";
		std::cin >> k;
	} while (n <= k);

	std::cout << '\n';

	ispisiKProstihBrojevaManjihOdN(n, k);
	std::cout << "Broj n: " << n << '\n';
	ispisiKProstihBrojevaVeciOdN(n, k);

	return 0;
}