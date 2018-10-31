#include <iostream>

using namespace std;

int main()
{
	int brojMalihSlova = 0, brojVelikihSlova = 0, brojOstalih = 0;
	char znak;

	cout << "Unesite znak: ";
	cin >> znak;
	while (znak != '0')
	{

		if (znak >= 'A' && znak <= 'Z') brojVelikihSlova++;
		else if (znak >= 'a' && znak <= 'z') brojMalihSlova++;
		else brojOstalih++;

		cin >> znak;

	}

	cout << "Velika slova: " << brojVelikihSlova << endl;
	cout << "Mala slova: " << brojMalihSlova << endl;
	cout << "Ostali: " << brojOstalih << endl;


	system("pause>0");
	return 0;
}