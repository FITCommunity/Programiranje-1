#include <iostream>

using namespace std;

int main()
{

	int minute = 0;
	while (minute < 1)
	{
		cout << "Unesite minute: ";
		cin >> minute;
	}

	int sati = minute / 60;
	minute -= sati * 60;
	int dani = sati / 24;
	sati -= dani * 24;

	cout << dani << " " << sati << ":" << minute << endl;

	system("pause>0");
	return 0;
}