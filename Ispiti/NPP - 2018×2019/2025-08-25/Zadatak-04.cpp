#include<iostream>
#include<iomanip>

char* getTextCopy(const char* const src) {
	if (src == nullptr) {
		return nullptr;
	}

	const std::size_t size = std::strlen(src) + 1;
	char* const copy = new char[size];
	strcpy_s(copy, size, src);

	return copy;
}

// Nisam siguran da li se smiju dodavati metode strukturi posto u tekstu
// u jednom dijelu pise "po potrebi definirati i implementirati pomocne globalne funkcije",
// a metode bas ne ispunjavaju ovaj uslov, u slucaju da ok onda samo ovo stavit u strukturu 
// sa odgovarajucim promjenama
bool daLiJeKategorijaValidna(const char* const zanrSerije) {
	return std::strcmp(zanrSerije, "Tjestenina") == 0
		|| std::strcmp(zanrSerije, "Tradicionalna") == 0
		|| std::strcmp(zanrSerije, "Fast Food") == 0;
}

struct Jelo {
	char* imeJela = nullptr;
	char* kategorijaJela = nullptr; // dozvoliti unos samo "Tjestenina", "Tradicionalna", "Fast Food"
	char imeKuhara[40] = "";
	int brojVarijacija = 0;
	int brojKriticara = 0;
	int** ocjene = nullptr; // matrica brojVarijacija * brojKriticara

	void unos() {
		char temp[200];

		std::cout << "Unesite ime Jela:\n";
		std::cin.getline(temp, std::size(temp));
		imeJela = getTextCopy(temp);

		std::cout << "Unesite kategoriju Jela:\n";
		bool repeatLoop;
		do {
			repeatLoop = false;

			std::cin.getline(temp, std::size(temp));

			if (repeatLoop = !daLiJeKategorijaValidna(temp)) {
				std::cout << "Pogresna kategorija! Kategorija moze biti samo Tjestenina, Tradicionalna ili Fast Food\n";
			}
		} while (repeatLoop);
		kategorijaJela = getTextCopy(temp);

		std::cout << "Unesite ime kuhara:\n";
		std::cin.getline(imeKuhara, std::size(imeKuhara));

		std::cout << "Unesite broj varijacija jela:\n";
		std::cin >> brojVarijacija;

		std::cout << "Unesite broj recenzenata za jelo:\n";
		std::cin >> brojKriticara;
		std::cin.ignore();

		ocjene = new int* [brojVarijacija];
		for (int i = 0; i < brojVarijacija; ++i)
		{
			*(ocjene + i) = new int[brojKriticara];

			for (int ii = 0; ii < brojKriticara; ++ii)
			{
				*(*(ocjene + i) + ii) = std::rand() % 10 + 1;

				//In case manual testing is required comment line above and uncomment
				//the lines below
				//std::cin >> *(*(ocjene + i) + ii);
				//std::cin.ignore();
			}
		}
	}

	void ispis()
	{
		std::cout << "==============================================================================\n";
		std::cout << "Ime jela: " << imeJela << '\n';
		std::cout << "Kategorija jela: " << kategorijaJela << '\n';
		std::cout << "Ime kuhara: " << imeKuhara << '\n';
		std::cout << "Broj varijacija: " << brojVarijacija << '\n';
		std::cout << "Broj kriticara: " << brojKriticara << '\n';
		std::cout << "-----------------------------------------------------\n";
		for (int i = 0; i < brojVarijacija; ++i)
		{
			std::cout << "Varijacija " << i + 1 << " ->";
			for (int ii = 0; ii < brojKriticara; ++ii)
			{
				std::cout << " Kriticar " << ii + 1 << " ocjena: " << std::setw(3) << *(*(ocjene + i) + ii) << " |";
			}
			std::cout << '\n';
		}
		std::cout << "-----------------------------------------------------\n";
		std::cout << "==============================================================================\n";
	}

	void dealokacije()
	{
		delete[] imeJela;
		imeJela = nullptr;

		delete[] kategorijaJela;
		kategorijaJela = nullptr;

		for (int i = 0; i < brojVarijacija; ++i)
		{
			delete[] * (ocjene + i);
		}
		delete[] ocjene;
		ocjene = nullptr;
	}
};

float getAverageForVarijacija(Jelo* const jelo, int varijacijaIndex) {
	float averageForVarijacija{ 0.0f };

	for (int ii = 0; ii < jelo->brojKriticara; ++ii)
	{
		averageForVarijacija += *(*(jelo->ocjene + varijacijaIndex) + ii);
	}

	return averageForVarijacija / jelo->brojKriticara;
}


float getAverageForJelo(Jelo* const jelo) {
	float averageForJelo{ 0.0f };

	for (int i = 0; i < jelo->brojVarijacija; ++i)
	{
		averageForJelo += getAverageForVarijacija(jelo, i);
	}

	return averageForJelo / jelo->brojVarijacija;
}

float* getAverageByCategory(Jelo* niz, int velNiza) {
	float* averagesByCategory = new float[3] { 0.f };
	int counters[3]{ 0 };

	for (int i = 0; i < velNiza; ++i)
	{
		const char* const zanrJela = (niz + i)->kategorijaJela;
		float averageForJelo = getAverageForJelo(niz + i);

		if (std::strcmp(zanrJela, "Tjestenina") == 0)
		{
			*averagesByCategory += averageForJelo;
			++(*counters);
		}
		else if (std::strcmp(zanrJela, "Tradicionalna") == 0)
		{
			*(averagesByCategory + 1) += averageForJelo;
			++(*(counters + 1));
		}
		else
		{
			*(averagesByCategory + 2) += averageForJelo;
			++(*(counters + 2));
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		if (*(counters + i) != 0)
		{
			*(averagesByCategory + i) /= *(counters + i);
		}
	}

	return averagesByCategory;
}

int main() {
	std::srand(std::time(nullptr));

	int brojJela;

	std::cout << "Unesite broj jela: ";
	std::cin >> brojJela;
	std::cin.ignore();

	Jelo* jela = new Jelo[brojJela];

	for (int i = 0; i < brojJela; ++i) {
		(jela + i)->unos();
	}

	for (int i = 0; i < brojJela; ++i) {
		(jela + i)->ispis();
	}

	float* averagesByCategory = getAverageByCategory(jela, brojJela);

	std::cout << "============================================================\n";
	std::cout << "Prosjecne ocjene po kategorijama jela:\n";
	std::cout << "Tjestenina: " << *averagesByCategory << '\n';
	std::cout << "Tradicionalna: " << *(averagesByCategory + 1) << '\n';
	std::cout << "Fast Food: " << *(averagesByCategory + 2) << '\n';
	std::cout << "============================================================\n";

	delete[] averagesByCategory;
	averagesByCategory = nullptr;

	for (int i = 0; i < brojJela; ++i) {
		(jela + i)->dealokacije();
	}

	delete[] jela;
	jela = nullptr;

	return 0;
}