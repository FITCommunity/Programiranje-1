#include<iostream>
#include<iomanip>

char* getTextCopy(const char* const src) {
	if (src == nullptr) {
		return nullptr;
	}

	std::size_t size = std::strlen(src) + 1;
	char* copy = new char[size];
	strcpy_s(copy, size, src);
	
	return copy;
}

// Nisam siguran da li se smiju dodavati metode strukturi posto u tekstu
// u jednom dijelu pise "po potrebi definirati i implementirati pomocne globalne funkcije",
// a metode bas ne ispunjavaju ovaj uslov, u slucaju da ok onda samo ovo stavit u strukturu 
// sa odgovarajucim promjenama
bool daLiJeZanrValidan(const char* zanrSerije) {
	return std::strcmp(zanrSerije, "War") == 0
		|| std::strcmp(zanrSerije, "Strategy") == 0
		|| std::strcmp(zanrSerije, "Open World") == 0;
}

struct Igrica {
	char* imeIgrice = nullptr;
	char* zanrIgrice = nullptr; // dozvoliti unos samo "War", "Strategy", "Open World"
	char izdavac[40] = "";
	int brojDijelova = 0;
	int brojKriticara = 0;
	int** ocjene = nullptr; // matrica brojDijelova * brojKriticara

	void unos()
	{
		char temp[200];

		std::cout << "Unesite ime igrice:\n";
		std::cin.getline(temp, std::size(temp));
		imeIgrice = getTextCopy(temp);

		bool repeatLoop;
		do {
			repeatLoop = false;

			std::cout << "Unesite zanr igrice:\n";
			std::cin.getline(temp, std::size(temp));

			if (repeatLoop = !daLiJeZanrValidan(temp)) {
				std::cout << "Unos zanra mora biti \"War\", \"Strategy\" ili \"Open World\"\n";
			}
		} while (repeatLoop);
		zanrIgrice = getTextCopy(temp);

		std::cout << "Unesite ime izdavaca:\n";
		std::cin.getline(izdavac, std::size(izdavac));

		std::cout << "Unesite broj dijelova igrice:\n";
		std::cin >> brojDijelova;

		std::cout << "Unesite broj recenzenata igrice:\n";
		std::cin >> brojKriticara;
		std::cin.ignore();

		ocjene = new int* [brojDijelova];
		for (int i = 0; i < brojDijelova; ++i)
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
		std::cout << "Ime igrice: " << imeIgrice << '\n';
		std::cout << "zanr igrice: " << zanrIgrice << '\n';
		std::cout << "Izdavac igrice: " << izdavac << '\n';
		std::cout << "Broj dijelova: " << brojDijelova << '\n';
		std::cout << "Broj kriticara: " << brojKriticara << '\n';
		std::cout << "-----------------------------------------------------\n";
		for (int i = 0; i < brojDijelova; ++i)
		{
			std::cout << "Dio " << i + 1 << " ->";
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
		delete[] imeIgrice;
		imeIgrice = nullptr;

		delete[] zanrIgrice;
		zanrIgrice = nullptr;

		for (int i = 0; i < brojDijelova; ++i)
		{
			delete[] *(ocjene + i);
		}
		delete[] ocjene;
		ocjene = nullptr;
	}
};

float getAverageForPart(Igrica* igrica, int partIndex) {
	float averageForPart{ 0.0f };

	for (int ii = 0; ii < igrica->brojKriticara; ++ii)
	{
		averageForPart += *(*(igrica->ocjene + partIndex) + ii);
	}

	return averageForPart / igrica->brojKriticara;
}

float getAverageForGame(Igrica* igrica) {
	float averageForGame{ 0.0f };

	for (int i = 0; i < igrica->brojDijelova; ++i)
	{
		averageForGame += getAverageForPart(igrica, i);
	}

	return averageForGame / igrica->brojDijelova;
}

float* getAverageByGenre(Igrica* niz, int velNiza) {
	float* averagesByGenre = new float[3] { 0.f };
	int counters[3]{ 0 };

	for (int i = 0; i < velNiza; ++i)
	{
		const char* zanrIgrice = (niz + i)->zanrIgrice;
		float averageForGame = getAverageForGame(niz + i);

		if (std::strcmp(zanrIgrice, "War") == 0)
		{
			*averagesByGenre += averageForGame;
			++(*counters);
		}
		else if (std::strcmp(zanrIgrice, "Strategy") == 0)
		{
			*(averagesByGenre + 1) += averageForGame;
			++(*(counters + 1));
		}
		else
		{
			*(averagesByGenre + 2) += averageForGame;
			++(*(counters + 2));
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		if (*(counters + i) != 0)
		{
			*(averagesByGenre + i) /= *(counters + i);
		}
	}

	return averagesByGenre;
}

int main() {
	std::srand(std::time(nullptr));

	int velNiza;

	std::cout << "Unesite broj Igrica:\n";
	std::cin >> velNiza;
	std::cin.ignore();

	Igrica* igrice = new Igrica[velNiza];

	for (int i = 0; i < velNiza; ++i)
	{
		(igrice + i)->unos();
	}

	for (int i = 0; i < velNiza; ++i)
	{
		(igrice + i)->ispis();
	}

	float* averagesByGenre = getAverageByGenre(igrice, velNiza);

	std::cout << "============================================================\n";
	std::cout << "Prosjecne ocjene po zanrovima:\n";
	std::cout << "War: " << *averagesByGenre << '\n';
	std::cout << "Strategy: " << *(averagesByGenre + 1)<< '\n';
	std::cout << "Open World: " << *(averagesByGenre + 2)<< '\n';
	std::cout << "============================================================\n";

	delete[] averagesByGenre;
	averagesByGenre = nullptr;

	for (int i = 0; i < velNiza; ++i)
	{
		(igrice + i)->dealokacije();
	}

	delete[] igrice;
	igrice = nullptr;

	return 0;
}