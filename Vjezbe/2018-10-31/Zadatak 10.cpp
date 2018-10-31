#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	for (int i = 1; i < 151; i++)
	{
		int broj = i;
		int duzina = 0;
		while (broj)
		{
			duzina++;
			broj /= 10;
		}

		int x = pow(10, duzina);
		if (i == i * i % x) cout << i << endl;
	}


	system("pause>0");
	return 0;
}