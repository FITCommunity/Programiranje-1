#include <iostream>
#include <string.h>

using namespace std;

struct vozilo
{
    char* markaVozila;
    char* nazivVozila;
    char* tipVozila; // omogućiti unos samo 'A', 'B','C'
    float* potrosnja_goriva_po_km;

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

    char tempNazivVozila[50];

    cout << "Unesite naziv vozila (max 50): ";
    cin.ignore();
    cin.getline(tempNazivVozila, sizeof tempNazivVozila);

    int velicinaNV = strlen(tempNazivVozila) + 1;
    nazivVozila = new char[velicinaNV];
    strcpy_s(nazivVozila, velicinaNV, tempNazivVozila);

    tipVozila = new char;
    while (true)
    {
        cout << "Unesite tip vozila (A, B ili C): ";
        cin >> *tipVozila;

        if (*tipVozila == 'A' || *tipVozila == 'B' || *tipVozila == 'C')
            break;
    }


    potrosnja_goriva_po_km = new float;
    cout << "Unesite potrosnju goriva po km: ";
    cin >> *potrosnja_goriva_po_km;
}

void vozilo::Ispis()
{
    cout << "Marka vozila: " << markaVozila << endl
        << "Naziv vozila: " << nazivVozila << endl
        << "Tip vozila: " << tipVozila << endl
        << "Potrosnja goriva po km: " << *potrosnja_goriva_po_km << endl;
}

void vozilo::Dealociraj()
{
    delete[] markaVozila;
    delete[] nazivVozila;
    delete tipVozila;
    delete potrosnja_goriva_po_km;
}

int FirmaNajvecaPotrosnjaGoriva(vozilo** m, int brFirmi, int brVozila)
{
    float* suma = new float[brFirmi] {0};
    for (int i = 0; i < brFirmi; i++)
        for (int j = 0; j < brVozila; j++)
            *(suma + i) += *(*(m + i) + j)->potrosnja_goriva_po_km;


    int max = 0;
    for (int i = 1; i < brFirmi; i++)
        if (*(suma + i) > * (suma + max))
            max = i;

    delete[] suma;
    return max;
}

float ProsjecnaPotrosnjaPoTipu(vozilo** m, int brFirmi, int brVozila, char Tip)
{
    float suma = 0;
    int brojac = 0;
    for (int i = 0; i < brFirmi; i++)
        for (int j = 0; j < brVozila; j++)
            if (*(*(m + i) + j)->tipVozila == Tip)
            {
                suma += *(*(m + i) + j)->potrosnja_goriva_po_km;
                brojac++;
            }

    return brojac > 0 ? suma / brojac : 0;
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
        << FirmaNajvecaPotrosnjaGoriva(matrica, visina, sirina) << endl;

    cout << "Prosjek potrošnje goriva po km u vozilima tipa C "
        << ProsjecnaPotrosnjaPoTipu(matrica, visina, sirina, 'C') << endl;

    for (int i = 0; i < visina; i++)
    {
        for (int j = 0; j < sirina; j++)
            (*(*(matrica + i) + j)).Dealociraj();
        delete[] * (matrica + i);
    }
    delete[] matrica;

    return 0;
}