#include<iostream>
#include<iomanip>

char* getNizKaraktera(const char* const text) {
	if (text == nullptr) {
		return nullptr;
	}

	const int size = std::strlen(text) + 1;
	char* const textCopy = new char[size];
	strcpy_s(textCopy, size, text);

	return textCopy;
}

struct Glumac {
	char* ime = nullptr;
	char* prezime = nullptr;
	char drzava[40] = "";
	int brojFilmova = 0; // označava broj redova u dinamičkoj matrici
	int brojKorisnika = 0; // označava broj kolonu u dinamičkoj matrici
	int** ocjene = nullptr; // matrica dimenzija (brojFilmova × brojKorisnika)

	void unos() {
		char buffer[200];

		std::cout << "Unesite ime:\n";
		std::cin.getline(buffer, std::size(buffer));
		ime = getNizKaraktera(buffer);

		std::cout << "Unesite prezime:\n";
		std::cin.getline(buffer, std::size(buffer));
		prezime = getNizKaraktera(buffer);

		std::cout << "Unesite drzavu:\n";
		std::cin.getline(drzava, std::size(drzava));

		std::cout << "Unesite broj filmova:\n";
		std::cin >> brojFilmova;

		std::cout << "Unesite broj korisnika:\n";
		std::cin >> brojKorisnika;

		ocjene = new int* [brojFilmova];

		for (int i = 0; i < brojFilmova; ++i) {
			*(ocjene + i) = new int[brojKorisnika];

			for (int j = 0; j < brojKorisnika; ++j) {
				*(*(ocjene + i) + j) = std::rand() % 10 + 1;
			}
		}
	}

	float* getAveragesByUsers() {
		float* averagesByUsers = new float[brojKorisnika] {};

		for (int i = 0; i < brojKorisnika; ++i) {
			for (int j = 0; j < brojFilmova; ++j) {
				*(averagesByUsers + i) += *(*(ocjene + j) + i);
			}
			*(averagesByUsers + i) /= brojFilmova;
		}

		return averagesByUsers;
	}

	void ispis() {
		std::cout << "Ime i prezime: " << ime << ' ' << prezime << '\n';
		std::cout << "Drzava: " << drzava << '\n';
		std::cout << "Broj filmova: " << brojFilmova << '\n';
		std::cout << "Broj korisnika: " << brojKorisnika << '\n';
		std::cout << "-------------------------------------------\n";
		for (int i = 0; i < brojFilmova; ++i) {
			for (int j = 0; j < brojKorisnika; ++j) {
				std::cout << std::setw(3) << *(*(ocjene + i) + j) << ' ';
			}
			std::cout << '\n';
		}
		std::cout << "-------------------------------------------\n";
	}

	void dealokacije() {
		delete[] ime; 
		ime = nullptr;

		delete[] prezime;
		prezime = nullptr;
		
		for (int i = 0; i < brojFilmova; ++i) {
			delete[] * (ocjene + i);
		}
		delete[] ocjene;
		ocjene = nullptr;
	}
};

int main() {
	std::srand(std::time(nullptr));

	Glumac* glumac = new Glumac;

	glumac->unos();
	glumac->ispis();

	float* averagesByUsers = glumac->getAveragesByUsers();

	std::cout << "Ispis prosjecnih ocjena glumca po svakom korisniku:\n";
	for (int i = 0; i < glumac->brojKorisnika; ++i) {
		std::cout << *(averagesByUsers + i) << ' ';
	}
	std::cout << '\n';

	delete[] averagesByUsers;

	glumac->dealokacije();
	delete glumac;

	return 0;
}