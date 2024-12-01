#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstddef>
#include<ctime>
#include<cstring>

constexpr std::size_t cardDeckSize{ 52 };

char* getDynamicStrCopy(const char* const str) {
	if (str == nullptr) {
		return nullptr;
	}

	const std::size_t size{ strlen(str) + 1 };
	char* const copiedStr{ new char[size] {} };
	strcpy(copiedStr, str);

	return copiedStr;
}

int getRandomValueInRange(const int from, const int to) {
	return rand() % (to - from + 1) + from;
}

const char* const possibleSigns[] = {
	"tref",
	"karo",
	"srce",
	"pik"
};

const char* const possibleValues[] = {
	"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"
};

struct Karta {
	char* vrijednost = nullptr;
	char* znak = nullptr;

	void unos() {
		const std::size_t valueIndex = getRandomValueInRange(0, std::size(possibleValues) - 1);
		vrijednost = getDynamicStrCopy(*(possibleValues + valueIndex));

		const std::size_t signIndex = getRandomValueInRange(0, std::size(possibleSigns) - 1);
		znak = getDynamicStrCopy(*(possibleSigns + signIndex));
	}

	void ispis() {
		std::cout << vrijednost << ' ' << znak << '\n';
	}

	void dealociraj() {
		delete[] vrijednost;
		vrijednost = nullptr;

		delete[] znak;
		znak = nullptr;
	}
};

void fillDeckOfCards(Karta* const cards, const std::size_t size) {
	std::size_t cardIndex{ 0 };
	for (std::size_t i = 0; i < std::size(possibleSigns); ++i) {
		for (std::size_t ii = 0; ii < std::size(possibleValues); ++ii) {
			(cards + cardIndex)->znak = getDynamicStrCopy(*(possibleSigns + i));
			(cards + cardIndex)->vrijednost = getDynamicStrCopy(*(possibleValues + ii));

			++cardIndex;
		}
	}
}

void deallocateCards(Karta*& cards, const std::size_t size) {
	for (std::size_t i = 0; i < size; ++i) {
		(cards + i)->dealociraj();
	}
	delete[] cards;
}

void printRandomlyDrawnCards(Karta* const karte, const std::size_t size) {
	std::size_t cardIndex{ 0 };
	bool* const cardsDrawn{ new bool[size] { false } };

	for (int i = 1; i <= 3; ++i) {
		std::cout << "Izvlacenje " << i << ":\n";
		for (int ii = 0; ii < 5; ++ii) {
			do {
				cardIndex = getRandomValueInRange(0, size - 1);
			} while (*(cardsDrawn + cardIndex));

			(karte + cardIndex)->ispis();
			*(cardsDrawn + cardIndex) = true;
		}
		std::cout << '\n';
	}

	delete[] cardsDrawn;
}

int main() {
	srand(time(nullptr));

	Karta* cards{ new Karta[cardDeckSize] {} };

	fillDeckOfCards(cards, cardDeckSize);
	printRandomlyDrawnCards(cards, cardDeckSize);
	deallocateCards(cards, cardDeckSize);
	
	return 0;
}
