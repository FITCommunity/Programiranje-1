#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

struct vremenska_prognoza
{
    char* padavine; //dozvoliti unos rijeci npr. "kisa" ili "snijeg"
    float* temperatura;
    float* vlaznost_vazduha;

    void Unos();
    void Ispis();
    void Dealociraj();
};

void vremenska_prognoza::Unos()
{
    char tempPadavine[10];

    cout << "Unesite padavine (max 10): ";
    cin.ignore();
    cin.getline(tempPadavine, sizeof tempPadavine);

    int velicinaP = strlen(tempPadavine) + 1;
    padavine = new char[velicinaP];
    strcpy_s(padavine, velicinaP, tempPadavine);

    temperatura = new float;
    cout << "Unesite temperaturu: ";
    cin >> *temperatura;

    vlaznost_vazduha = new float;
    cout << "Unesite vlaznost vazduha: ";
    cin >> *vlaznost_vazduha;
}

void vremenska_prognoza::Ispis()
{
    cout << "Padavine: " << padavine << endl
        << "Temperatura: " << *temperatura << endl
        << "Vlaznost vazduha: " << *vlaznost_vazduha << endl;
}

void vremenska_prognoza::Dealociraj()
{
    delete[] padavine;
    delete temperatura;
    delete vlaznost_vazduha;
}

int najtacniji_meteorolog(vremenska_prognoza** m, float* stvarne_izmjerene_vrijednosti, int brMeteorologa, int brDana)
{
    float* odstupanja = new float[brMeteorologa] {0};
    for (int i = 0; i < brMeteorologa; i++)
        for (int j = 0; j < brDana; j++)
        {
            *(odstupanja + i) += abs(*(*(m + i) + j)->temperatura - *(stvarne_izmjerene_vrijednosti + i));
        }

    int min = 0;
    for (int i = 1; i < brMeteorologa; i++)
        if (*(odstupanja + i) < *(odstupanja + min))
            min = i;

    delete[] odstupanja;
    return min;
}

int main()
{
    int brMeteorologa, brDana;
    while (cout << "Unesite broj meteorologa: ", cin >> brMeteorologa, brMeteorologa <= 0);
    while (cout << "Unesite broj dana: ", cin >> brDana, brDana <= 0);

    vremenska_prognoza** matrica = new vremenska_prognoza * [brMeteorologa];
    for (int i = 0; i < brMeteorologa; i++)
        matrica[i] = new vremenska_prognoza[brDana];

    float* stvarne_izmjerene_vrijednosti = new float[brDana];
    cout << "Unesite stvarne izmjerene vrijednosti: " << endl;
    for (int i = 0; i < brDana; i++)
        cin >> *(stvarne_izmjerene_vrijednosti + i);

    for (int i = 0; i < brMeteorologa; i++)
        for (int j = 0; j < brDana; j++)
            (*(matrica + i) + j)->Unos();


    cout << "Najtacniji meteorolog je: "
        << najtacniji_meteorolog(matrica, stvarne_izmjerene_vrijednosti, brMeteorologa, brDana)
        << endl;


    for (int i = 0; i < brMeteorologa; i++)
    {
        for (int j = 0; j < brDana; j++)
            (*(*(matrica + i) + j)).Dealociraj();
        delete[] * (matrica + i);
    }

    delete[] matrica;
    delete[] stvarne_izmjerene_vrijednosti;

    cin.get();
    return 0;
}