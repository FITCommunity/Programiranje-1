#include <iostream>

using namespace std;

int daniUMjesecu[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


bool isPrestupna(int godina)
{
  return (godina % 4 == 0 && godina % 100 != 0) || godina % 400 == 0;
}

bool isDatum(int d, int m, int g)
{
   if(isPrestupna(g)) daniUMjesecu[1]++;

   return d <= daniUMjesecu[m - 1];
}

int main()
{
	int d, m, g;


	do
	{
		cout << "Unesite datum: ";
		cin >> d >> m >> g;

	}while(!isDatum(d, m, g));
	
	int suma = d;
	for (int i = 0; i < m - 1; i++)
        suma += daniUMjesecu[i];

	cout << "Uneseni dan je " << suma << ". u " << g << " godini" << endl;

	system("pause>0");
	return 0;
}