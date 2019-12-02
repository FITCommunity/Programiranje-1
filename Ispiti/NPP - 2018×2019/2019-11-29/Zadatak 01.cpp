#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	int n, X;
	while(cout << "Unesite broj A: ", cin >> n, n <= 10);
	while(cout << "Unesite broj B: ", cin >> X, X < 1);

	double S = 0;
	for(int i = 0; i < n; i++)
	{
		S += pow(-1, i) * i / pow(X, i);
	}

	cout << S;
	return 0;
}