#include<iostream>

struct Student {
	char* ime = nullptr;
	char* prezime = nullptr;
	int brojIndeksa = 0;
	char skola[40] = "";
	int brojSemestra = 0; // oznacava broj redova u dinamickoj matrici
	int brojUplata = 0; // oznacava broj kolona u dinamickoj matrici
	int** uplate = nullptr; // matrica dimenzija (brojSemestra x brojUplata)

	void unos() {
		ime = new char[100];
		prezime = new char[100];

		std::cout << "Unesite ime: ";
		std::cin.getline(ime, 100);

		std::cout << "Unesite prezime: ";
		std::cin.getline(prezime, 100);

		std::cout << "Unesite broj indeksa: ";
		std::cin >> brojIndeksa;
		std::cin.ignore();

		std::cout << "Unesite skola: ";
		std::cin.getline(skola, std::size(skola));

		std::cout << "Unesite broj semestra: ";
		std::cin >> brojSemestra;
		std::cin.ignore();

		std::cout << "Unesite broj uplata: ";
		std::cin >> brojUplata;
		std::cin.ignore();

		uplate = new int* [brojSemestra];
		for (int i = 0; i < brojSemestra; ++i) {
			*(uplate + i) = new int[brojUplata];

			for (int j = 0; j < brojUplata; ++j) {
				*(*(uplate + i) + j) = std::rand() % 901 + 100;
			}
		}
	}

	void ispis() {
		std::cout << "Ime studenta: " << ime << '\n';
		std::cout << "Prezime studenta: " << prezime << '\n';
		std::cout << "Broj indeksa studenta: " << brojIndeksa << '\n';
		std::cout << "Skola studenta: " << skola << '\n';
		std::cout << "Broj semestra studenta: " << brojSemestra << '\n';
		std::cout << "Broj uplata studenta: " << brojUplata << '\n';
		std::cout << "----------------------\n";
		for (int i = 0; i < brojSemestra; ++i) {
			for (int j = 0; j < brojUplata; ++j) {
				std::cout << *(*(uplate + i) + j) << ' ';
			}
			std::cout << '\n';
		}
		std::cout << "----------------------\n";
	}

	void dealokacija() {
		delete[] ime;
		ime = nullptr;

		delete[] prezime;
		prezime = nullptr;

		for (int i = 0; i < brojSemestra; ++i) {
			delete[] * (uplate + i);
		}
		delete[] uplate;
		uplate = nullptr;
	}

	float* izracunajProsjekPoSemestrima() {
		float* prosjek = new float[brojSemestra] { 0.0f };

		for (int i = 0; i < brojSemestra; ++i) {
			for (int j = 0; j < brojUplata; ++j) {
				*(prosjek + i) += *(*(uplate + i) + j);
			}
			*(prosjek + i) /= brojUplata;
		}

		return prosjek;
	}
};

int main() {
	std::srand(std::time(nullptr));

	Student* student = new Student;

	student->unos();
	student->ispis();

	float* prosjek = student->izracunajProsjekPoSemestrima();

	std::cout << "Prosjek uplata po semestru: ";
	for (int i = 0; i < student->brojSemestra; ++i) {
		std::cout << *(prosjek + i) << ' ';
	}
	std::cout << '\n';

	delete[] prosjek;
	prosjek = nullptr;

	student->dealokacija();
	
	delete student;
	student = nullptr;

	return 0;
}