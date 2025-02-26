#include<iostream>

int getRandomNumInRange(int from, int to) {
	 return std::rand() % (to - from + 1) + from;

	// Comment line above and uncomment 3 lines below for some manual input
	//int temp;
	//std::cin >> temp;
	//return temp;
}

bool areDigitsUnique(int num) {
	if (num == 1000) {
		return true;
	}

	int lastDigit = num % 10;
	int middleDigit = (num / 10) % 10;
	int firstDigit = (num / 100) % 10;

	return firstDigit != middleDigit && firstDigit != lastDigit && middleDigit != lastDigit;
}

bool isMiddleDigitBiggerThanLast(int num) {
	int lastDigit = num % 10;
	int middleDigit = (num / 10) % 10;

	return middleDigit > lastDigit;
}

int main() {
	std::srand(std::time(nullptr));

	int sum = 0;
	int counter = 0;
	int num = getRandomNumInRange(100, 1000);

	while (areDigitsUnique(num)) {
		std::cout << num << ' ';
		sum += num;
		if (isMiddleDigitBiggerThanLast(num)) {
			++counter;
		}
		num = getRandomNumInRange(100, 1000);
	}

	if (sum != 0) {
		std::cout << '\n';
	}

	std::cout << "Program se je zavrsio sa brojem: " << num << " a ukupoan zbroj brojeva ";
	std::cout << "koji su imali srednju cifru vecu od posljednje cifre je: " << counter;
	std::cout << " dok je ukupna suma: " << sum << '\n';

	return 0;
}