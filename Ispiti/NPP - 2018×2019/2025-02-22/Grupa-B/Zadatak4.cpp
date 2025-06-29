#include<iostream>
using namespace std;

struct Knjiga{
    char *imeKnjige = nullptr;
    char *kategorijaKnjige = nullptr; // dozvoliti unos samo "Fiction", "Non-Fiction", "Mystery"
    char izdavac[40] = ""; 
    int brojDijelova = 0;
    int brojCitatelja = 0;
    int **ocjene = nullptr; // matrica brojDijelova * brojCitatelja

    void unos(){
        cin.ignore();
        imeKnjige = new char[100];
        cout<<"Ime knjige: ";
        cin.getline(imeKnjige,100);

        do
        {
            kategorijaKnjige = new char[100];
            cout<<"Kategorija: ";
            cin.getline(kategorijaKnjige,100);
            if((strcmp(kategorijaKnjige,"Fiction")!=0) &&  (strcmp(kategorijaKnjige,"Non-Fiction")!=0) && (strcmp(kategorijaKnjige,"Mystery")!=0))
                cout<<"Pogresan unos!"<<std::endl;
        } while ((strcmp(kategorijaKnjige,"Fiction")!=0) &&  (strcmp(kategorijaKnjige,"Non-Fiction")!=0) && (strcmp(kategorijaKnjige,"Mystery")!=0));

        cout<<"Izdavac: ";
        cin.getline(izdavac,40);
        
        cout<<"Broj dijelova: ";
        cin>>brojDijelova;

        cout<<"Broj citatelja: ";
        cin>>brojCitatelja;

        ocjene = new int*[brojDijelova];
        for (int i = 0; i < brojDijelova; i++)
        {
            *(ocjene+i) = new int[brojCitatelja];
        }
        for (int i = 0; i < brojDijelova; i++)
        {
            for (int j = 0; j < brojCitatelja; j++)
            {
                int ocjena = rand() % 5 + 1;
                //cout<<"Unesi ocjenu za "<<i+1<<". dio "<<j+1<<". citatelja: "<<ocjena<<" "<<endl;
                //cin>>*(*(ocjene+i)+j);
                *(*(ocjene+i)+j) = ocjena;
            }
            //cout<<std::endl;
        }
    }
    void ispis(){
        cout<<"Ime knjige: "<<imeKnjige<<endl;
        cout<<"Kategorija: "<<kategorijaKnjige<<endl;
        cout<<"Izdavac: "<<izdavac<<endl;
        cout<<"Broj dijelova: "<<brojDijelova<<endl;
        cout<<"Broj citatelja: "<<brojCitatelja<<endl;
        cout<<"Ocjene: "<<endl;
        for (int i = 0; i < brojDijelova; i++)
        {
            for (int j = 0; j < brojCitatelja; j++)
            {
                cout<<"Dio "<<i+1<<" : Citatelj "<<j+1<<" -> "<<*(*(ocjene+i)+j)<<" | ";
            }
            cout<<std::endl;
        }
    }
    void dealokacija(){
        for (int i = 0; i < brojDijelova; i++)
        {
            delete[] *(ocjene+i);
        }
        delete [] ocjene;
        delete [] imeKnjige;
        delete [] kategorijaKnjige;
        imeKnjige = nullptr;
        kategorijaKnjige = nullptr;
    }
};

float *getAverageByCategory(Knjiga *knjige, int vel) {
    float *prosjeci = new float[3]{0.0f}; // Fiction, Non-Fiction, Mystery

    int countFiction = 0, countNonFiction = 0, countMystery = 0;

    for (int i = 0; i < vel; i++) {
        int sumaOcjena = 0;
        int ukupnoOcjena = (*(knjige + i)).brojDijelova * (*(knjige + i)).brojCitatelja;

        for (int j = 0; j < (*(knjige + i)).brojDijelova; j++) {
            for (int k = 0; k < (*(knjige + i)).brojCitatelja; k++) {
                sumaOcjena += *(*((*(knjige + i)).ocjene + j) + k);
            }
        }
        if (strcmp((*(knjige + i)).kategorijaKnjige, "Fiction") == 0) {
            *(prosjeci + 0) += sumaOcjena;
            countFiction += ukupnoOcjena;
        } else if (strcmp((*(knjige + i)).kategorijaKnjige, "Non-Fiction") == 0) {
            *(prosjeci + 1) += sumaOcjena;
            countNonFiction += ukupnoOcjena;
        } else if (strcmp((*(knjige + i)).kategorijaKnjige, "Mystery") == 0) {
            *(prosjeci + 2) += sumaOcjena;
            countMystery += ukupnoOcjena;
        }
    }

    if (countFiction > 0) 
        *(prosjeci + 0) /= countFiction;                

    if (countNonFiction > 0) 
        *(prosjeci + 1) /= countNonFiction;  

    if (countMystery > 0) 
        *(prosjeci + 2) /= countMystery; 

    return prosjeci; 
}

int main(){
    srand(time(0));
    int vel;
    cout<<"Unesite broj knjiga: ";
    cin>>vel;

    Knjiga *niz = new Knjiga[vel];
    for (int i = 0; i < vel; i++)
    {
        niz[i].unos();
    }

    cout<<"Podaci o knjigama: \n";
    for (int i = 0; i < vel; i++)
    {
        niz[i].ispis();
    }

    float *prosjeci = getAverageByCategory(niz, vel);

    cout << "Prosjecne ocjene po kategorijama:" << endl;
    cout << "Fiction: " << *(prosjeci + 0) << endl;
    cout << "Non-Fiction: " << *(prosjeci + 1) << endl;
    cout << "Mystery: " << *(prosjeci + 2) << endl;

    delete [] prosjeci;

    for (int i = 0; i < vel; i++) {
        niz[i].dealokacija(); 
    }

    delete[] niz;

    return 0;
}