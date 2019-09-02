#include <iostream>
 
using namespace std;
 
bool isProst(int broj)
{
  for(int i = 2; i < broj / 2; i++)
    if(broj % i == 0)
      return false;
  return true;
}
 
long int faktorijel(int broj)
{
  long int proizvod = 1;
  for(int i = 2; i <= broj; i++)
    proizvod *= i;
  return proizvod;
}
 
int generisiFibonacci(int pozicija)
{
  if(pozicija == 0)
    return 0;
 
  if(pozicija == 1)
    return 1;
 
  //alternativno
  //if(pozicija == 0 || pozicija == 1)
  //  return pozicija;
 
  int prethodnik1 = 0;
  int prethodnik2 = 1;
 
  int fibonacci = 0;
  for(int i = 0; i < pozicija; i++)
  {
    fibonacci = prethodnik1 + prethodnik2;
    if(fibonacci < prethodnik2) return 0;
   
    prethodnik1 = prethodnik2;
    prethodnik2 = fibonacci;
  }
 
 
  return fibonacci;
}
 
void dodajFaktorijal(long int &suma, int pozicija)
{
  int broj = generisiFibonacci(pozicija);
  if(isProst(broj))
      suma += faktorijel(broj);
}
 
int main()
{
  long int suma = 0;
 
 
  for(int i = 0; i < 100; i++)
    dodajFaktorijal(suma, i);
 
 
  cout << "Suma = " << suma;
  return 0;
}