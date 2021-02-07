#include <iostream>
#include <string.h>

using namespace std;

struct vozilo
{
    char* markaVozila;
    char* brojSasije;
    char* tipVozila; //dozvoliti unos samo vrijednosti "A", "B", ili "C"
    int* kubnihCM;

    void Unos();
    void Ispis();
    void Dealociraj();
};

void vozilo::Unos()
{
    char tempMarkaVozila[50];

    cout << "Unesite marku vozila (max 50): ";
    cin.ignore();
    cin.getline(tempMarkaVozila, sizeof tempMarkaVozila);

    int velicinaMV = strlen(tempMarkaVozila) + 1;
    markaVozila = new char[velicinaMV];
    strcpy_s(markaVozila, velicinaMV, tempMarkaVozila);

    char tempBrojSasije[20];

    cout << "Unesite broj sasije (max 20): ";
    cin.ignore();
    cin.getline(tempBrojSasije, sizeof tempBrojSasije);

    int velicinaBS = strlen(tempBrojSasije) + 1;
    brojSasije = new char[velicinaBS];
    strcpy_s(brojSasije, velicinaBS, tempBrojSasije);

    tipVozila = new char;
    while (true)
    {
        cout << "Unesite tip vozila (A, B ili C): ";
        cin >> *tipVozila;

        if (*tipVozila == 'A' || *tipVozila == 'B' || *tipVozila == 'C')
            break;
    }

    int tepKubikaza;
    cout << "Unesite kubikazu vozila: ";
    cin >> tepKubikaza;
    kubnihCM = new int(tepKubikaza);
}

void vozilo::Ispis()
{
    cout << "Marka vozila: " << markaVozila << endl
        << "Broj sasije: " << brojSasije << endl
        << "Tip vozila: " << tipVozila << endl
        << "Kubikaza vozila: " << *kubnihCM << endl;
}

void vozilo::Dealociraj()
{
    delete[] markaVozila;
    delete[] brojSasije;
    delete tipVozila;
    delete kubnihCM;
}

int FirmaNajvecaProsjecnaKubikaza(vozilo** m, int brFirmi, int brVozila)
{
    float* prosjek = new float[brFirmi] {0};
    for (int i = 0; i < brFirmi; i++)
    {
        for (int j = 0; j < brVozila; j++)
            *(prosjek + i) += *(*(m + i) + j)->kubnihCM;
        *(prosjek + i) /= brVozila;
    }


    int max = 0;
    for (int i = 1; i < brFirmi; i++)
        if (*(prosjek + i) > * (prosjek + max))
            max = i;

    delete[] prosjek;
    return max;
}

void ProsjecnaKubikazaPoTipu(vozilo** m, int brFirmi, int brVozila)
{
    float sumaA = 0, sumaB = 0;
    int brojacA = 0, brojacB = 0;
    for (int i = 0; i < brFirmi; i++)
        for (int j = 0; j < brVozila; j++)
            if (*(*(m + i) + j)->tipVozila == 'A')
            {
                sumaA += *(*(m + i) + j)->kubnihCM;
                brojacA++;
            }
            else if (*(*(m + i) + j)->tipVozila == 'B')
            {
                sumaB += *(*(m + i) + j)->kubnihCM;
                brojacB++;
            }

    if (brojacA > 0)
        cout << "Prosjecna kubikaza vozila tipa A: " << sumaA / brojacA;
    if (brojacB > 0)
        cout << "Prosjecna kubikaza vozila tipa B: " << sumaB / brojacB;
}

int main()
{
    int sirina, visina;
    while (cout << "Unesite broj firmi: ", cin >> visina, visina <= 0);
    while (cout << "Unesite broj vozila: ", cin >> sirina, sirina <= 0);

    vozilo** matrica = new vozilo * [visina];
    for (int i = 0; i < visina; i++)
        matrica[i] = new vozilo[sirina];

    for (int i = 0; i < visina; i++)
        for (int j = 0; j < sirina; j++)
            (*(matrica + i) + j)->Unos();

    cout << "Najveca potrosnja goriva po kilometru ima firma broj: "
        << FirmaNajvecaProsjecnaKubikaza(matrica, visina, sirina) << endl;

    ProsjecnaKubikazaPoTipu(matrica, visina, sirina);

    for (int i = 0; i < visina; i++)
    {
        for (int j = 0; j < sirina; j++)
            (*(*(matrica + i) + j)).Dealociraj();
        delete[] * (matrica + i);
    }
    delete[] matrica;

    cin.get();
    return 0;
}