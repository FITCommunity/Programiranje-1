#include<iostream>

int generisiBroj(const int start, const int end) {
	return std::rand() % (end - start + 1) + start;
}

void ispisiCijeliBrojKaoBinarni(const int cijeliBroj) {
	const bool bit = cijeliBroj % 2;

	if (cijeliBroj == 0) {
		return;
	}

	ispisiCijeliBrojKaoBinarni(cijeliBroj / 2);

	std::cout << bit;
}

int main() {
	std::srand(std::time(nullptr));

	const int generisaniBroj = generisiBroj(50, 2000);

	std::cout << "Generisani broj: " << generisaniBroj << '\n';
	std::cout << "Binarna reprezentacija: ";
	ispisiCijeliBrojKaoBinarni(generisaniBroj);
	std::cout << '\n';

	// If you wanna make sure your results are correct just find a converter online like
	// https://www.rapidtables.com/convert/number/decimal-to-binary.html

	return 0;
}