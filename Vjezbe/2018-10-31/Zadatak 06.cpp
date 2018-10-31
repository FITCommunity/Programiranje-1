#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int broj = 0;
	while (broj < 1)
	{
		cout << "Unesite prirodan broj: ";
		cin >> broj;
	}

	float suma = 0;
	for (int i = 1; i <= broj; i++)
		suma += 1 / pow(2 * i + 1, 2);

	cout << suma << endl;


	system("pause>0");
	return 0;
}