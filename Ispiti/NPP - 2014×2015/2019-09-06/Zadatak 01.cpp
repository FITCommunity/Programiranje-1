#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int n;
    while(cout << "Unesite prirodan broj: ", cin >> n, n <= 0);
    double x;
    cout << "Unesite realan broj x: ";
    cin >> x;

    
    double suma = 0;
    for(int i = 1; i <= n; i++)
        suma += cos(pow(x, i));

    cout << "Suma je " << suma;
    return 0;
}