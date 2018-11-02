#include <iostream>
#include <cmath>

using namespace std;

bool isBinarni(int broj)
{
    while(broj)
    {
        int temp = broj % 10;
        if(temp != 0 && temp != 1) return false;
        broj /= 10;
    }
    
    return true;
}

int main()
{
	int broj;
	do
	{
	    cout << "Unesite binarni broj: ";
	    cin >> broj;
	    
	}while(broj < 1 || !isBinarni(broj));
	
	int temp = broj;
	int decimalniBroj = 0;
	int brojac = 0;
	while(temp)
	{
	    decimalniBroj += temp % 10 * pow(2, brojac);
	    brojac++;
	    temp /= 10;
	}
	
	cout << broj << " -> " << decimalniBroj << endl;
	

	system("pause>0");
	return 0;
}