#include<iostream>
using namespace std;

int izvuciKartu(){
    // u zadatku je trazeno random brojevi u opsegu od 1 do 14, medjutim prilikom bodovanja, karta sa brojem 14 nikad nije naglasena
    // stoga, stavio sam stavio random brojeve za opseg od 1 do 13
    return rand() % 13 + 1;
}

int main(){
    srand(time(0));
    char znak;
    int bodovi = 10;
    int brojKraljeva = 0;
    while (bodovi >= 5 && bodovi < 20)
    {
        cout<<"Trenutni rezultat: "<<bodovi<<" bodova \n";
        int karta = izvuciKartu();

        if(karta==13)
            brojKraljeva++;
        else
            brojKraljeva = 0;
        
        if(karta<=10)
            bodovi+=karta;
        else if(karta>=11 && karta<=13)
            bodovi-=1;

        cout<<"Izvucena karta "<<karta<<" (Bodovi: "<<bodovi<<") \n";

        if(brojKraljeva == 4){
            cout<<"Automatski gubitak! 4 Kralja zaredom \n";
            break;
        }

        if(bodovi>23 || bodovi<5){
            cout<<"Igra je gotova, izgubili ste! \n";
            break;
        }
        if(bodovi>=20 && bodovi<=23){
            cout<<"Pobijedili ste! Cestitamo \n";
            break;
        }
        
        cout<<"Zelite li nastaviti (y/n)? -> ";

        cin>>znak;
        if(znak == 'y')
            continue;
        if(znak == 'n')
            break;
    }
    if(bodovi<20){
        cout<<"Igra je gotova, izgubili ste! \n";
    }
    cout<<"Zavrsili ste igru! Bodovi -> "<<bodovi<<"\n";

    return 0;
}