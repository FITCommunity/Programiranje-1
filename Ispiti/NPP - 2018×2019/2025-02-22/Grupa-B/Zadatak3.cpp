#include<iostream>
using namespace std;

bool jeProst(int broj, int d = 2){
    if(broj<=1)
        return false;
    if(broj==2)
        return true;
    if(d*d>broj)
        return true;
    if (broj%d==0)
        return false;
    return jeProst(broj,d+1);
}

void djelioc(int broj, int d=1){
    if (d>broj)
        return;
    if (broj%d==0)
        cout<<d<<" ";
    djelioc(broj, d+1);
}

// d oznacava djelitelja
int zbirDijeljitelja(int broj, int d=1){
    if(d>broj)
        return 0;
    if(broj%d==0)
        return d + zbirDijeljitelja(broj, d+1);
    else
        return zbirDijeljitelja(broj, d+1);
}

void obradiBroj(int broj){
    cout<<"Djelioci broja "<<broj<<": ";
    djelioc(broj);
    cout<<endl; 

    int zbir = zbirDijeljitelja(broj);
    cout<<"Zbir: "<<zbir<<"\n";

    if(jeProst(zbir)){
        cout<<"Djelitelji broja "<<zbir<<": ";
        djelioc(zbir);
        cout<<endl;
        cout<<"Broj "<<zbir<<" je prost! \n";
        return;
    }
    cout<<endl;
    obradiBroj(zbir);
}

int main(){
    int broj;

    do
    {
        cout<<"Unesite broj (6 do 100): ";
        cin>>broj;
    } while (broj<6 || broj>100);
    
    obradiBroj(broj);
    

    return 0;
}