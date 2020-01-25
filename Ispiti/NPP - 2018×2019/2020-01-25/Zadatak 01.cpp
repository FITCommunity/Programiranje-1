#include <iostream>

using namespace std;

int main()
{
    unsigned long int broj = 0;
    int temp;

    while (cout << "Upisi cifru: ", cin >> temp, temp >= 0 && temp <= 9) 
        broj = broj * 10 + temp;

    cout << "Broj sastavljen od zadanih cifara je: " << broj;

    system("pause>0");
    return 0;
}