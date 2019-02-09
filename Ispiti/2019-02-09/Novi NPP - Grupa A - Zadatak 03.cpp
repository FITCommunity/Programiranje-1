#include <iostream>

using namespace std;

void Ispisi(int *niz, int velicina)
{
  	for(int i = 0; i < velicina; i++)
    		cout << *(niz + i) << endl;
}

void Popuni(int *niz, int velicina, int i = 0)
{
  	if(i < 0 || i >= velicina || velicina < 0)
    		return;

 	int temp = i == 0 ? 1 : *(niz + i - 1) * (i + 1);
	
	if(temp < 0) return;
  
  	*(niz + i) = temp;
  	Popuni(niz, velicina, i + 1);
}

int main() 
{
  	int n;
  	while(cout << "Unesite velicinu niza:", cin >> n, n <= 0);

  	int *niz = new int[n];
  	Popuni(niz, n);
  	Ispisi(niz, n);

  	delete[] niz;
  	system("pause>0");
	return 0;
}