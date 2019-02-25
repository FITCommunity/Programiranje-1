#include <iostream>
 
using namespace std;
 
int main()
{
  const double g = 9.81;

  for(int i = 0, t = 3; i < 20; i++, t += 3)
    cout << "Situacija u " << t << "-oj sekundi je:" << endl
         << "Brzina: " << g * t << endl
         << "Predeni put: " << g / 2 * t * t << endl;

  system("pause>0");
  return 0;
}