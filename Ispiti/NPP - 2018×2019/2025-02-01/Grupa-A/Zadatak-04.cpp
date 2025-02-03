#include<iostream>

// Nisam siguran da li se smiju dodavati metode strukturi posto u tekstu
// u jednom dijelu pise "po potrebi definirati i implementirati pomocne globalne funkcije",
// a metode bas ne ispunjavaju ovaj uslov, u slucaju da ok onda samo ovo stavit u strukturu 
// sa odgovarajucim promjenama
bool daLiJeZanrValidan(const char* zanrSerije) {
	return std::strcmp(zanrSerije, "Crime") == 0
		|| std::strcmp(zanrSerije, "Romance") == 0
		|| std::strcmp(zanrSerije, "Comedy") == 0;
}

struct Serija {
	char* imeSerije = nullptr;
	char* zanrSerije = nullptr; // dozvoliti unos samo "Crime", "Romance", "Comedy"
	char drzavaSnimanja[40] = "";
	int brojEpizoda = 0;
	int brojSezona = 0;
	int** ocjene = nullptr; // matrica dimenzija (brojSezona x brojEpizoda)

	void unos()
	{
		imeSerije = new char[100];
		zanrSerije = new char[100];

		std::cout << "Ime serije: ";
		std::cin.getline(imeSerije, 100);

		do {
			std::cout << "Zanr serije: ";
			std::cin.getline(zanrSerije, 100);

			if (!daLiJeZanrValidan(zanrSerije)) {
				std::cout << "Zanr moze biti samo \"Crime\", \"Romance\" ili \"Comedy\"\n";
			}
		} while (!daLiJeZanrValidan(zanrSerije));

		std::cout << "Drzava snimanja serije: ";
		std::cin.getline(drzavaSnimanja, std::size(drzavaSnimanja));

		std::cout << "Unesite broj sezona serije: ";
		std::cin >> brojSezona;
		std::cin.ignore();

		std::cout << "Unesite broj epizoda serije: ";
		std::cin >> brojEpizoda;
		std::cin.ignore();

		ocjene = new int* [brojSezona];
		for (int i = 0; i < brojSezona; ++i) {
			*(ocjene + i) = new int[brojEpizoda];

			for (int j = 0; j < brojEpizoda; ++j) {
				std::cout << "Unesite ocjenu za sezonu " << i + 1 << " epizodu " << j + 1 << ": ";
				std::cin >> *(*(ocjene + i) + j);
				std::cin.ignore();
			}
			std::cout << '\n';
		}
	}

	float* getAverageBySesons() {
		float* averageForSeasons = new float[brojSezona] { 0.0f };

		for (int i = 0; i < brojSezona; ++i) {
			for (int j = 0; j < brojEpizoda; ++j) {
				*(averageForSeasons + i) += *(*(ocjene + i) + j);
			}
			*(averageForSeasons + i) /= brojEpizoda;
		}

		return averageForSeasons;
	}

	void ispis() {
		std::cout << "Ime serije: " << imeSerije << '\n';
		std::cout << "Zanr serije: " << zanrSerije << '\n';
		std::cout << "Drzava snimanja serije: " << drzavaSnimanja << '\n';
		std::cout << "Broj sezona serije: " << brojSezona << '\n';
		std::cout << "Broj epizoda serije: " << brojEpizoda << '\n';

		std::cout << "--------------------------------------\n";
		for (int i = 0; i < brojSezona; ++i) {
			for (int j = 0; j < brojEpizoda; ++j) {
				std::cout << *(*(ocjene + i) + j) << ' ';
			}
			std::cout << '\n';
		}
		std::cout << "--------------------------------------\n";
	}

	void dealokacija() {
		delete[] imeSerije;
		imeSerije = nullptr;

		delete[] zanrSerije;
		zanrSerije = nullptr;

		for (int i = 0; i < brojSezona; ++i) {
			delete[] * (ocjene + i);
		}

		delete[] ocjene;
		ocjene = nullptr;
	}
};

int main() {
	int brojSerija;

	do {
		std::cout << "Unesite broj serija: ";
		std::cin >> brojSerija;
		std::cin.ignore();

		if (brojSerija < 1) {
			std::cout << "Broj serija treba biti broj jednak ili veci od 1\n";
		}
	} while (brojSerija < 1);

	Serija* serije = new Serija[brojSerija];

	for (int i = 0; i < brojSerija; ++i) {
		(serije + i)->unos();
	}

	for (int i = 0; i < brojSerija; ++i) {
		(serije + i)->ispis();

		float* averagesBySeasons = (serije + i)->getAverageBySesons();

		std::cout << "Prosjek ocjena za svaku sezonu: ";
		for (int j = 0; j < (serije + i)->brojSezona; ++j) {
			std::cout << *(averagesBySeasons + j) << ' ';
		}
		std::cout << '\n';

		delete[] averagesBySeasons;
	}

	for (int i = 0; i < brojSerija; ++i) {
		(serije + i)->dealokacija();
	}
	delete[] serije;
	serije = nullptr;

	return 0;
}