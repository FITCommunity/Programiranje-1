#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n = 0;
	while (n < 1)
	{
		cout << "Unestie prirodan broj: ";
		cin >> n;
	}

	float x;
	cout << "Unesite realan broj: ";
	cin >> x;

	float suma = 0;
	for (int i = 1; i <= n; i++)
		suma += cos(pow(x, i));

	cout << suma << endl;

	system("pause>0");
	return 0;
}