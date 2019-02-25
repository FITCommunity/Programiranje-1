#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x;
    cout << "Unesite realan broj x: ";
    cin >> x;

    char izbor;
    while (cout << "Izaberte funkciju s - sin, c - cos: ", cin >> izbor, izbor != 's' && izbor != 'c')
        cout << "Odabrali ste nepostojucu funkciju" << endl;

    float rezultat = 0;
    if (izbor == 's')
        for (int i = 1; i <= x; i++) rezultat += i / (sin(x / i) + x);
    else
        for (int i = 1; i <= x; i++) rezultat += i / (cos(x / i) + x);

    cout << rezultat << endl;

    system("pause>0");
    return 0;
}