#include <iostream>
 using namespace std;
 int main()
{
	int broj1 = 0, broj2 = 0;
 	while (broj1 < 1)
	{
		cout << "Unesite prvi broj: ";
		cin >> broj1;
	}
 	while (broj2 < 1)
	{
		cout << "Unesite drugi broj: ";
		cin >> broj2;
	}
 	for (int i = broj1 > broj2 ? broj2 : broj1; i > 0; i--)
		if (broj1 % i == 0 && broj2 % i == 0)
		{
			cout << "Najveci zajednicki djeljitelj za brojeve " << broj1 << " i " << broj2 << " je " << i << endl;
			break;
		}
 	system("pause>0");
	return 0;
} 