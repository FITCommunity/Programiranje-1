#include<iostream>

int main() {
	std::srand(std::time(nullptr));

	int numberToGuess = std::rand() % 50 + 1;
	int points = 0;
	int userGuess;

	for (int i = 0; i < 3; ++i) {
		std::cout << "Pogodi broj (1 do 50), ili unesi -1 da zavrsis: ";
		std::cin >> userGuess;

		int diff = std::abs(userGuess - numberToGuess);

		if (userGuess == numberToGuess) {
			std::cout << "Tacan broj!\n";
			return 0;
		} 
		else if (userGuess == -1) {
			break;
		}
		else if (diff <= 3) {
			std::cout << "Razlika je manja ili jednaka 3! Dobili ste 3 boda!\n";
			points += 3;
		}
		else if (diff >= 4 && diff <= 7) {
			std::cout << "Razlika je izmedu 4 i 7! Dobili ste 2 boda!\n";
			points += 2;
		}
		else if (diff >= 8 && diff <= 10) {
			std::cout << "Razlika je izmedu 8 i 10! Dobili ste 1 bod!\n";
			++points;
		}
		else {
			std::cout << "Razlika je veca od 10! Dobili ste 0 bodova!\n";
		}
		
		if (i != 2) {
			std::cout << "Trenutni rezultat: " << points << " bodova.\n";
		}
	}

	if (userGuess == -1) {
		std::cout << "Zavrsili ste igru unosom -1! ";
	}
	else {
		std::cout << "Tri puta zaredom niste pogodili! Igra je zavrsena.";
	}

	std::cout << "Broj osvojenih bodova: " << points << '\n';

	return 0;
}