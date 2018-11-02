#include <iostream>

using namespace std;

int Unos()
{
	int broj = 0;
  	while (broj < 1)
  	{
		cout << "Unesite prirodan broj: ";
		cin >> broj;
  	}

  	return broj;
  
}

int SumaDjeljitelja(int broj)
{
	int suma = 0;
  	for(int i = 1; i <= broj / 2; i++)
    		if(broj % i == 0)
      			suma += i;
  	return suma;
}

bool isPrijateljskiPar(int broj1, int broj2)
{
	return SumaDjeljitelja(broj1) == broj2 && SumaDjeljitelja(broj2) == broj1;
}

int main()
{
	int broj1 = Unos();
	int broj2 = Unos();

	if (isPrijateljskiPar(broj1, broj2)) 
		cout << "Brojevi " << broj1 << " i " << broj2 << " su prijateljski par" << endl;

	system("pause>0");
	return 0;
}