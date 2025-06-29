#include<iostream>
using namespace std;

bool brojSveNeparneCifre(int broj){
    while (broj!=0)
    {
        int cifra = broj % 10;
        if(cifra%2==0)
            return false;
        broj /= 10;
    }
    return true;
}

bool brojSveParneCifre(int broj){
    while (broj!=0)
    {
        int cifra = broj % 10;
        if(cifra%2!=0)
            return false;
        broj /= 10;
    }
    return true;
}

int prvaCifra(int broj){
    while(broj>=10)
        broj/=10;
    return broj;
}

int posljednjaCifra(int broj){
    return broj % 10;
}

int main(){
    srand(time(0));
    int suma = 0, brojac = 0;
    int broj;
    while (true)
    {
        broj = rand() % 701 + 200;
        cout<<"Generisan broj: "<<broj;

        if(prvaCifra(broj) > posljednjaCifra(broj))
            brojac++;

        if (brojSveNeparneCifre(broj)) {
            cout << " - Prekid programa (broj sadrzi samo neparne cifre) \n";
            break;
        } 
        else if (brojSveParneCifre(broj)) {
            suma += broj;
            cout << " - Ulazi u sumu \n";
        }
        else {
            cout << " - Ne ulazi u sumu \n";
            continue;
        }
    }
    cout<<"Ukupna suma: "<<suma<<"\n";
    cout<<"Broj generisanih brojeva gdje je prva cifra veca od zadnje: "<<brojac<<"\n";

    return 0;
}