#include<iostream>


using namespace std;

void Umnozak(long long int* niz, int vel, int i = 0)
{
	if (i < 0 || i >= vel)
		return;

	long long int temp;
	if (i == 0)*(niz + i) = 1;
	else if (i == 1)*(niz + i) = 3;
	else
	{
		temp = *(niz + i - 1) * *(niz + i - 2);
		if (temp < 0)
			return;
		*(niz + i) = temp;
	}
	
	Umnozak(niz, vel, i + 1);
}
void Ispis(long long int* niz, int vel)
{
	for (int i = 0; i < vel; i++)
	{
		cout << *(niz+i) << endl;
	}
}
long long int Suma(long long int* niz, int vel, long long int suma=0)
{
	if (vel == 0)
		return suma;
	return Suma(niz, vel - 1, suma + *(niz + vel - 1));
}

int main()
{
	int vel;
	cout << "Unesite velicinu: " << endl;
	cin >> vel;

	long long int* niz = new long long int[vel] {};
	Umnozak(niz, vel);
	Ispis(niz, vel);

	cout << "Suma je: " << Suma(niz, vel) << endl;
	delete [] niz;//dealokacija niza
	system("pause>0");
	return 0;
}

