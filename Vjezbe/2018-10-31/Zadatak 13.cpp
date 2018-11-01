#include <iostream>

using namespace std;

int main()
{
	int brUspjesno = 0, brNeuspjesno = 0;
	float bodovi[7], suma = 0;

	for (int i = 0; i < 7; i++)
	{
		do
		{
			cout << "Unesite bodove za " << i + 1 << ". studenta: ";
			cin >> bodovi[i];
		} while (bodovi[i] < 0 || bodovi[i] > 100);
		
		if (bodovi[i] < 60) brNeuspjesno++;
		else
		{
			suma += bodovi[i];
			brUspjesno++;
		}

	}

	cout << "Prosjek uspjesnih studenata: " << suma / brUspjesno << endl;

	if (brUspjesno < brNeuspjesno) cout << "Potrebno vise sati instrukcija!" << endl;


	system("pause>0");
	return 0;
}