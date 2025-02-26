#include<iostream>

char baciNovcic() {
	int glavaIliPjesma = std::rand() % 2;

	return glavaIliPjesma == 0 ? 'G' : 'P';
}

void handleOptionInput(char& option) {
	do {
		std::cout << "Zelite li baciti novcic? (y/n): ";
		std::cin >> option;
	} while (option != 'n' && option != 'y');
}

int main() {
	std::srand(std::time(nullptr));

	int points = 3;
	char option;
	int glaveInARow = 0;
	int	pjesmeInARow = 0;

	std::cout << "Dobrodosli u igru bacanja novcica!\n";

	do {
		handleOptionInput(option);

		if (option == 'y') {
			char coin = baciNovcic();
			std::cout << "Novcic je pao na: " << coin << '\n';
			if (coin == 'G') {
				++points;
				++glaveInARow;
				pjesmeInARow = 0;
			}
			else {
				--points;
				++pjesmeInARow;
				glaveInARow = 0;
			}
			std::cout << "Vas trenutni rezultat: " << points << '\n';
		}
	} while (option != 'n' && glaveInARow != 3 && pjesmeInARow != 3 && (points >= 1 && points <= 9));

	if (option == 'n')
	{
		std::cout << "Igra je prekinuta.Izgubili ste.Vas rezultat: " << points << '\n';
	}
	else if (glaveInARow == 3)
	{
		std::cout << "Pobjedili ste!Dobijena su 3 Glave zaredom - automatska pobjeda!\n";
	}
	else if (pjesmeInARow == 3)
	{
		std::cout << "Izgubili ste!Dobijena su 3 Pisma zaredom - automatski poraz!\n";
	}
	else if (points == 0)
	{
		std::cout << "Izgubili ste!Vas rezultat je pao na 0.\n";
	}
	else if (points == 10)
	{
		std::cout << "Pobjedili ste!Vas rezultat je dosao do 10.\n";
	}

	return 0;
}