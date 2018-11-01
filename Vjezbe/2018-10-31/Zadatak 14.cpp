#include <iostream>

using namespace std;

int main()
{
	bool polozenIM = false,
             polozenPR = false,
	     polozenAR = false,
	     polozenIT = false,
      	     polozenEJ = false;

	while (!polozenIM || !polozenEJ || !polozenIT || !polozenAR || !polozenPR)
	{
		bool prijavljen = false;
		char izbor;
		
		while (!prijavljen)
		{
			cout << "Koji ispit zelite prijaviti? " << endl
				<< "M -> IM" << endl
				<< "P -> PR" << endl
				<< "A -> AR" << endl
				<< "I -> IT" << endl
				<< "E -> EJ" << endl;
			cin >> izbor;

			switch (izbor)
			{
				case 'M':
					polozenIM ? cout << "IM se ne moze prijaviti" << endl
					          : cout << "Uspjesno prijavljen predmet iz IM" << endl;
					break;
				case 'P':
					polozenPR ? cout << "PR se ne moze prijaviti" << endl
					          : cout << "Uspjesno prijavljen predmet iz PR" << endl;
					break;
				case 'A':
					polozenAR ? cout << "AR se ne moze prijaviti" << endl
						  : cout << "Uspjesno prijavljen predmet iz AR" << endl;
					break;
				case 'I':
					polozenIT ? cout << "IT se ne moze prijaviti" << endl
						  : cout << "Uspjesno prijavljen predmet iz IT" << endl;
					break;
				case 'E':
					polozenEJ ? cout << "EJ se ne moze prijaviti" << endl
						  : cout << "Uspjesno prijavljen predmet iz EJ" << endl;
					break;
				default:
					cout << "Greska!" << endl;
					break;
			}

			prijavljen = (!polozenIM && izbor == 'M') ||
				     (!polozenPR && izbor == 'P') ||
				     (!polozenAR && izbor == 'A') ||
				     (!polozenIT && izbor == 'I') ||
				     (!polozenEJ && izbor == 'E');
		}

		int ocjena = 0;
		while (ocjena < 5 || ocjena > 10)
		{
			cout << "Unesite ocjenu: ";
			cin >> ocjena;
		}

		if (!polozenIM) polozenIM = ocjena > 5 && izbor == 'M';
		if (!polozenPR) polozenPR = ocjena > 5 && izbor == 'P';
		if (!polozenAR) polozenAR = ocjena > 5 && izbor == 'A';
		if (!polozenIT) polozenIT = ocjena > 5 && izbor == 'I';
		if (!polozenEJ) polozenEJ = ocjena > 5 && izbor == 'E';
		
	}

	system("pause>0");
	return 0;
}
