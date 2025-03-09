#include<iostream>
#include<cmath>

int armstrongNumber(int num) {
	int sum = 0;

	while (num != 0)
	{
		int lastDigit = num % 10;
		sum += std::pow(lastDigit, 3);
		num /= 10;
	}

	return sum;
}

bool isParan(int num) {
	return num % 2 == 0;
}

int main() {
	int num;

	do {
		std::cout << "Unesite broj u intervalu [101, 999): ";
		std::cin >> num;
	} while (num <= 100 || num > 1000);

	int sum = armstrongNumber(num);

	if (sum == num)
	{
		std::cout << "Broj je Armstrongov\n";

		if (isParan(sum))
		{
			std::cout << "Suma cifara Armstrongovog broja je paran broj\n";
		}
		else
		{
			std::cout << "Suma cifara Armstrongovog broja je neparan broj\n";
		}
	}
	else
	{
		std::cout << "Uneseni broj nije Armstrongov broj\n";
	}

	return 0;
}