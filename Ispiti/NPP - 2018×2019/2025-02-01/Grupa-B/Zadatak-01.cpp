#include<iostream>

int getFirstDigit(int num) {
	while (num / 10 != 0) {
		num /= 10;
	}
	return num;
}

int sumDigits(int num) {
	int sum = 0;

	while (num != 0) {
		sum += (num % 10);
		num /= 10;
	}

	return sum;
}

int countDigits(int num) {
    if (num == 0) {
        return 1;
    }

	return std::log10(num) + 1;
}

float getAverageOfNum(const int num) {
	return (float)sumDigits(num) / countDigits(num);
}

int generateNum() {
	return std::rand() % 10'000;
}

int main() {
	std::srand(std::time(nullptr));

	int num;
	int firstDigit;
	float sum = 0;
	float avgOfNum;
	int counter = 0;

	do {
		do {
			num = generateNum();
			firstDigit = getFirstDigit(num);
			avgOfNum = getAverageOfNum(num);

			if (firstDigit == 5) {
				break;
			}
			else if (avgOfNum > 4) {
				std::cout << "Preskacemo broj: " << num /* << " -> " << avgOfNum */ << '\n';
			}
		} while (avgOfNum > 4);

		// The avgOfNum in the comments might be useful for debugging
		std::cout << "Generisani broj: " << num /* << " -> " << avgOfNum */ << '\n';
		std::cout << "===================================\n";
		
		if (firstDigit != 5) {
			sum += (num % 10);
			++counter;
		}
	} while (firstDigit != 5);

	if (counter != 0) {
		sum /= counter;
	}

	std::cout << "Ukupni prosjek zadnjih cifri je: " << sum << '\n';

	return 0;
}
