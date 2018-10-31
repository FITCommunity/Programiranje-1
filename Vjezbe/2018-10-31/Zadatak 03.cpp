#include <iostream>

using namespace std;

int main()
{
	for (int i = 1000; i < 10000; i++)
	{
		int broj = i;
		bool flag = true;
		while (broj)
		{
			if ((broj % 10) % 2 == 0)
			{
				flag = false;
				break;
			}

			broj /= 10;
		}

		if (flag) cout << i << endl;
		
	}

	system("pause>0");
	return 0;
}