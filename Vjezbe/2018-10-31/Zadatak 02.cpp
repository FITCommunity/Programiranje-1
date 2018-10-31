#include <iostream>

using namespace std;

int main()
{
	char znak;

	while (1)
	{
		cout << "Unesite malo slovo ili \".\" za izlaz: ";
		cin >> znak;

		if (znak == '.') break;
		else if (znak < 'a' || znak > 'z') cout << "Znak nije malo slovo." << endl;
		else
		{
			if (znak != 'a') cout << "Prethodnik: " << char(znak - 1) << endl;
			cout << "Slovo: " << znak << endl;
			if (znak != 'z') cout << "Sljedbenik: " << char(znak + 1) << endl;
		}
	}


	system("pause>0");
	return 0;
}