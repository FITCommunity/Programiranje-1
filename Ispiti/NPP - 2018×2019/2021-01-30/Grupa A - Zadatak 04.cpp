#include<iostream>
using namespace std;

struct student
{
    char* ID;
    char* imePrezime;
    float* prosjek;

    void Unos();
    void Ispis();
    void Dealociraj();
};

void student::Unos()
{
    char tempID[20];

    cout << "Unesite ID (max 20): ";
    cin.ignore();
    cin.getline(tempID, sizeof tempID);

    int velicinaID = strlen(tempID) + 1;
    ID = new char[velicinaID];
    strcpy_s(ID, velicinaID, tempID);

    char tempImePrezime[50];

    cout << "Unesite ime i prezime studenta (max 50): ";
    cin.getline(tempImePrezime, sizeof tempImePrezime);

    int velicinaIP = strlen(tempImePrezime) + 1;
    imePrezime = new char[velicinaIP];
    strcpy_s(imePrezime, velicinaIP, tempImePrezime);

    prosjek = new float;
    cout << "Unesite prosjek: ";
    cin >> *prosjek;
}

void student::Ispis()
{
    cout << "ID: " << ID << endl
         << "Ime i prezime: " << imePrezime << endl
         << "Prosjek: " << *prosjek << endl;
}

void student::Dealociraj()
{
    delete[] ID;
    delete[] imePrezime;
    delete prosjek;
}

int FakultetSaNajvecimProsjekom(student** m, int brFakulteta, int brStudenata)
{
    float* prosjek = new float[brFakulteta];
    for (int i = 0; i < brFakulteta; i++)
    {
        *(prosjek + i) = 0;
        for (int j = 0; j < brStudenata; j++)
            *(prosjek + i) += *(*(m + i) + j)->prosjek;
        *(prosjek + i) /= brStudenata;
    }

    int max = 0;
    for (int i = 1; i < brFakulteta; i++)
        if (*(prosjek + i) > *(prosjek + max))
            max = i;

    delete[] prosjek;
    return max;
}

char* IDStudentaSaNajvecimProsjekom(student** m, int brFakulteta, int brStudenata)
{
    student studentNajveciProsjek = **m;
    for (int i = 0; i < brFakulteta; i++)
    {
        for (int j = 0; j < brStudenata; j++)
        {
            if (*(*(m + i) + j)->prosjek > *studentNajveciProsjek.prosjek)
            {
                studentNajveciProsjek = *(*(m + i) + j);
            }
        }
    }

    return studentNajveciProsjek.ID;
}

int main()
{
    int brStudenata, brFakulteta;
    while (cout << "Unesite broj fakulteta ", cin >> brFakulteta, brFakulteta <= 0);
    while (cout << "Unesite broj studenata: ", cin >> brStudenata, brStudenata <= 0);

    student** matrica = new student * [brFakulteta];
    for (int i = 0; i < brFakulteta; i++)
        matrica[i] = new student[brStudenata];

    for (int i = 0; i < brFakulteta; i++)
        for (int j = 0; j < brStudenata; j++)
            (*(matrica + i) + j)->Unos();

    cout << "Najveci prosjek ima fakultet broj: "
         << FakultetSaNajvecimProsjekom(matrica, brFakulteta, brStudenata) << endl;

    cout << "ID studenta sa najvecim prosjekom na cijelom univerzitetu je: "
         << IDStudentaSaNajvecimProsjekom(matrica, brFakulteta, brStudenata) << endl;

    for (int i = 0; i < brFakulteta; i++)
    {
        for (int j = 0; j < brStudenata; j++)
            (*(*(matrica + i) + j)).Dealociraj();
        delete[] * (matrica + i);
    }
    delete[] matrica;

    return 0;
}