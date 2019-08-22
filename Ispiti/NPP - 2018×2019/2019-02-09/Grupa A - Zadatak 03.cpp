#include <iostream>
#include <climits>

using namespace std;

void Ispisi(int *niz, int velicina)
{
	for(int i = 0; i < velicina; i++)
    		cout << i << "! = " << *(niz + i) << endl;
}

void Popuni(int *niz, int velicina, int i = 0)
{
	if(i < 0 || i >= velicina || velicina < 0)
    		return;
	
	// Ako je INT_MAX / prethodnim_faktorijelom manji od broja_za_koji_trazimo_faktorijel
	// onda ce prethodni_faktorijel * broja_za_koji_trazimo_faktorijel btit vece od INT_MAX
	// sto ce dovesti do overflow-a
	// za int (32-bitni signed int) 12! ce biti maksimalni broj koji se moze izracunati
	if(i > 0 && INT_MAX / *(niz + i - 1) < i)
    		return;
  
	int temp = i == 0 ? 1 : *(niz + i - 1) * i;
	
	
  
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
