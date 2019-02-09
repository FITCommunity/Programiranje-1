#include <iostream>
#include <cmath>

using namespace std;

int obrniBroj(int broj)
{
	int noviBroj = 0;
	while (broj)
	{
		int cifra = broj % 10;
		noviBroj = noviBroj * 10 + cifra;
		broj /= 10;
	}

	return noviBroj;
}

int sumaCifri(int broj)
{
	int suma = 0;
	while (broj)
	{
		suma += broj % 10;
		broj /= 10;
	}
	return suma;
}

int main() 
{

	int x, y;
	while 
	(
		cout << "Definisite vrijednosti intervala [X, Y]: ", 
		cin >> x >> y, 
		x > 5000 || x < 10 || y > 5000 || y < 10
	);

	if (x > y)
	{
		int temp = x;
		x = y;
		y = temp;
	}

	cout << "Brojevi koji ispunjavaju uslov: ";
	for (int i = x; i <= y; i++)
		if(obrniBroj(i) % sumaCifri(i) == 0)
			cout << i << " ";


	system("pause>0");
	return 0;
}