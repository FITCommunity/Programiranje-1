#include <iostream>

using namespace std;

bool isProst(int broj)
{
    for (int i = 2; i <= broj / 2; i++)
        if (broj % i == 0)
            return false;
    return true;
}

void ispis(int broj)
{
    int i = 2;
    
    cout << broj << " = ";
    while (broj != 1) //na zadnjem dijeljenju ce se uvijek dobiti 1
    {
        if (isProst(i) && broj % i == 0)
        {
            if (i != broj)
                cout << i << " * ";
            else
                cout << i;

            broj /= i;
        }
        else i++;
    }
       
}

int main()
{
    int broj;
    while (cout << "Unesite prirodan broj: ", cin >> broj, broj < 1);


    if (isProst(broj))
        cout << broj << " je isProst broj" << endl;
    else
        ispis(broj);
    

    return 0;
    system("pause>0");
}