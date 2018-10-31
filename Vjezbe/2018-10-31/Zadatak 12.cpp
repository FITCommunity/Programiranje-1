#include <iostream>

using namespace std;

int main()
{
	int broj1 = 0;
	while (broj1 < 1)
	{
		cout << "Unesite prirodan broj: ";
		cin >> broj1;
	}

	int broj2 = 0;
	while (broj2 < 1)
	{
		cout << "Unesite prirodan broj: ";
		cin >> broj2;
	}

	int suma1 = 0;
	for (int i = 1; i <= broj1 / 2; i++)
		if (broj1 % i == 0)
			suma1 += i;

	int suma2 = 0;
	for (int i = 1; i <= broj2 / 2; i++)
		if (broj2 % i == 0)
			suma2 += i;

	if (suma1 == broj2 && suma2 == broj1) 
		cout << "Brojevi " << broj1 << " i " << broj2 << " su prijateljski par" << endl;

	system("pause>0");
	return 0;
}