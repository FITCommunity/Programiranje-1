#include <iostream>

using namespace std;

int main()
{
	int d, m, g;
	int suma = 0;

	bool datum = false;
	while (!datum)
	{
		cout << "Unesite datum: ";
		cin >> d >> m >> g;

		bool prestupna = (g % 4 == 0 && g % 100 != 0) || g % 400 == 0;

		if (d > 0 && d < 32 && m > 0 && m < 13 && g > 0)
		{
			if (m == 4 || m == 6 || m == 9 || m == 11)
			{
				if (d == 31) datum = true;
			}
			else if (m == 2)
			{
				if (prestupna)
				{
					if (d < 30) datum = true;
				}
				else if (d < 29) datum = true;
			}
			else datum = true;
		}
	

		if (datum)
		{
			suma = d;
			for (int i = 1; i < m; i++)
			{
				datum = true;
				switch (i)
				{
					case 1:
					case 3:
					case 5:
					case 7:
					case 8:
					case 10:
						suma += 31;
						break;
					case 4:
					case 6:
					case 9:
					case 11:
						suma += 30;
						break;
					case 2:
						if (prestupna) suma += 29;
						else suma += 28;
						break;
				}
			}

		}
	}

	cout << "Uneseni dan je " << suma << ". u " << g << " godini" << endl;

	system("pause>0");
	return 0;
}