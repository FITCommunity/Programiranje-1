#include <iostream>
#include <iomanip>

using namespace std;

void unos(int goloviPoUtakmici[][12], int utakmica)
{
    for (int i = 0; i < 11; i++)
        cin >> goloviPoUtakmici[i][utakmica];
        
}

double statistikaIgraca(int igrac[], bool ispis = false)
{
    int suma = 0;
    for (int i = 0; i < 12; i++)
    {
        suma += igrac[i];
        if (igrac[i] != 0 && ispis)
            cout << "Utakmica " << i + 1 << " " << igrac[i] << endl;
    }

    return (double)suma / 12;
}


int najboljiUcinak(int goloviPoUtakmici[][12])
{
    int max = 0;
    for (int i = 1; i < 11; i++)
        if (statistikaIgraca(goloviPoUtakmici[max]) < statistikaIgraca(goloviPoUtakmici[i]))
            max = i;

    cout << "Najbolji igrac je igrac broj " << max + 1 << " sa " << statistikaIgraca(goloviPoUtakmici[max])
        << " golova po utakmici." << endl;
    return max;

}

int main()
{
    int goloviPoUtakmici[11][12];

    int izbor = -1;
    do
    {
        cout << "Izaberi utakmicu: ";
        cin >> izbor;
        if (izbor >= 0 && izbor < 11) unos(goloviPoUtakmici, izbor);

    } while (izbor >= 0 || izbor < 11);

    for (int i = 0; i < 11; i++)
    {
        statistikaIgraca(goloviPoUtakmici[i], true);
        cout << endl;
    }

    najboljiUcinak(goloviPoUtakmici);

    return 0;
}