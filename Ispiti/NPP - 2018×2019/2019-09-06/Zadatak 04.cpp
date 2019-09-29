#include <iostream>
#include <ctime>

using namespace std;

struct fudbaler
{
    int *godRodjenja;
    int *brojIgraca;
    int *golovi;

    void Unos();
    void Generisi();
    void Dealociraj();
};

void fudbaler::Unos()
{
    int godR, brIgr, brGolova;
    cout << "Unesite godinu rodjenja: ";
    cin >> godR;
    cout << "Unesite broj igraca: ";
    cin >> brIgr;
    cout << "Unesite broj golova: ";
    cin >> brGolova;

    godRodjenja = new int(godR);
    brojIgraca = new int(brIgr);
    golovi = new int(brGolova);

}

void fudbaler::Generisi()
{
    godRodjenja = new int(1980 + rand() % ((2000 + 1) - 1980));
    brojIgraca = new int(rand() % 30 + 1);
    golovi = new int(rand() % 5);
}

void fudbaler::Dealociraj()
{
    delete godRodjenja;
    delete brojIgraca;
    delete golovi;
} 


void IspisGolova(fudbaler **m, int red, int kolona, double *prosjek)
{
    for(int i = 0; i < red; i++)
    {
        for(int j = 0; j < kolona; j++)
           cout << *(*(m + i) + j)->golovi << " ";
        cout << *(prosjek + i) << endl;
    }

}

double getProsjekTima(fudbaler **matrica, int sirina, int red)
{
    
    double suma = 0;
    for(int i = 0; i < sirina; i++)
        suma += *(*(matrica + red) + i)->golovi;
    return suma / sirina;
}


int najboljiTim(double *prosjek, int velicina)
{
    int max = 0;
    for(int i = 1; i < velicina; i++)
        if(*(prosjek + i) > *(prosjek + max))
            max = i;
    return max;
}


int najgoriTim(double *prosjek, int velicina)
{
    int min = 0;
    for(int i = 1; i < velicina; i++)
        if(*(prosjek + i) < *(prosjek + min))
            min = i;
    return min;
}

int najboljiIgracUTimu(fudbaler *tim, int velicina)
{
    int max = 0;
    for(int i = 1; i < velicina; i++)
        if(*(tim + i)->golovi > *(tim + max)->golovi)
            max = i;
    return max;
}

int main() 
{
    int n, m;
    while(cout << "Unesite broj redova: ", cin >> n, n <= 0);
    
    while(cout << "Unesite broj kolona: ", cin >> m, m <= 0);

    fudbaler **matrica = new fudbaler*[n];
    for(int i = 0; i < n; i++)
        *(matrica + i) = new fudbaler[m];
    
    srand(time(0));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            (*(matrica + i) + j)->Generisi(); // (*(*(matrica + i)+j)).Unos();

    
       

    double *prosjek = new double[n];
    for(int i = 0; i < n; i++)
        *(prosjek + i) = getProsjekTima(matrica, m, i);

    //Funkcija za procjeru
    
    IspisGolova(matrica, n, m, prosjek);
    
    cout << "Najbolji tim je: " << najboljiTim(prosjek, n) << endl;
     
    int najgori = najgoriTim(prosjek, n);
    cout << "Najbolji igrac u najgorem timu je: " << najboljiIgracUTimu(matrica[najgori], m);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            (*(matrica + i) + j)->Dealociraj();
        delete[] *(matrica + i);
    }

    delete[] matrica;
    delete[] prosjek;

    return 0;
}