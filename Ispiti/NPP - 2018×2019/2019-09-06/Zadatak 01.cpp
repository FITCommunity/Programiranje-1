#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int n;
    while(cout << "Unesite prirodan broj:", cin >> n, n <= 0);

    double suma = 0;
    for(int i = 1; i <= n; i++)
        suma += 1 / pow(2 * i + 1, 2);

    cout << "Suma je " << suma;
    return 0;
}