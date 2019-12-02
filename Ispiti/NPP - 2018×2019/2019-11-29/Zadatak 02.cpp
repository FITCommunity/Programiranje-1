#include <iostream>

using namespace std;

bool cifra_u_broju(int cifra, int broj)
{
	while(broj)
	{
		if(cifra == broj % 10)
			return true;
		broj /= 10;
	}

	return false;
}


int noviBroj(int A, int B)
{
	int broj = 0;
	while(A)
	{
		int cifra = A % 10;
		if(!cifra_u_broju(cifra, B))
			broj = broj * 10 + cifra;

		A /= 10;
	}

	return broj;
}


int main() 
{
	int A, B, C;
	while(cout << "Unesite broj A: ", cin >> A, A < 100000);
	while(cout << "Unesite broj B: ", cin >> B, B < 50000);

	C = noviBroj(A, B);
	cout << "A: " << A << endl 
		 << "C: " << C << endl 
		 << "A - C: " << A - C;

	return 0;
}