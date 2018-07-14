#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void unos(int goloviPoUtakmici[][12])
{
    srand(time(0));
    for(int i = 0; i < 11; i++)
        for(int j = 0; j < 12; j++)
            cin >> goloviPoUtakmici[i][j];
}
                    
double statistikaIgraca(int igrac[], bool ispis = false)
{
    int suma = 0;
    for(int i = 0; i < 12; i++)
    {
        suma += igrac[i];
        if(igrac[i] != 0 && ispis)
            cout  << "Utakmica " << i + 1 << " " << igrac[i] << endl;
    }
    
    return (double)suma / 12;
}


int najboljiUcinak(int goloviPoUtakmici[][12])
{
    int max = 0;
    for(int i = 1; i < 11; i++)
        if(statistikaIgraca(goloviPoUtakmici[max]) < statistikaIgraca(goloviPoUtakmici[i]))
            max = i;
     
    cout << "Najbolji igrac je igrac broj " << max + 1 << " sa " << statistikaIgraca(goloviPoUtakmici[max])
         << " golova po utakmici." << endl;
    return max;
    
}
int najuspjesnijaUtakmica(int goloviPoUtakmici[][12])
{
    int ucinak[12] = {0};
    
    for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < 11; j++)
        {
            ucinak[i] += goloviPoUtakmici[j][i];
        }
        
    }
    
    int max = 0;
    for(int i = 1; i < 12; i++)
        if(ucinak[max] / 11 < ucinak[i] / 11)
            max = i;
            
    int maxGolova = 0;
    for(int i = 1; i < 11; i++)
        if(goloviPoUtakmici[maxGolova][max] < goloviPoUtakmici[i][max])
            maxGolova = i;
    
    //Ispis
    cout << endl;
    int k = 0;
    while(k < 17)
    {
        cout << "-";
        k++;
    }
    cout << "Utakmica " << max + 1;
    while(k < 40)
    {
        cout << "-";
        k++;
    }
    cout << endl;
    cout << "Broj golova: " << ucinak[max] << endl;
    cout << "Procenat za tim - broj golova u odnosu na broj igraèa u timu: " << 100 * (ucinak[max] / 11) << "%" << endl;
    cout << "Najuspjesniji igrac: " << goloviPoUtakmici[maxGolova][max] << endl;
    
    
    return max;
    
}

int main()
{
    int goloviPoUtakmici[11][12];
    
    unos(goloviPoUtakmici);
    
    for(int i = 0; i < 11; i++)
    {
        statistikaIgraca(goloviPoUtakmici[i], true);
        cout << endl;
    }
        
    najboljiUcinak(goloviPoUtakmici);
    najuspjesnijaUtakmica(goloviPoUtakmici);
    

    return 0;
}