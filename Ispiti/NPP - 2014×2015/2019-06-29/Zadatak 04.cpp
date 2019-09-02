#include <iostream>
#include <ctime>
 
using namespace std;
 
//Glavna Funkcija
void UnosTemperatura(float temperature[7][24], int dan)
{
  if(dan < 0 || dan > 6)
    return;
 
  for(int i = 0; i < 24; i++)
    cin >> temperature[dan][i];
 
  //Za testiranje
  // for(int i = 0; i < 24; i++)
  //   temperature[dan][i] = (rand() % 35) * (rand() % 2 == 0 ? 1 : -1);
}
 
//Glavna Funkcija
void IspisTemperatura(float temperature[7][24], int dan)
{
  if(dan < 0 || dan > 6)
    return;
 
  for(int i = 0; i < 24; i++)
    cout << i + 1 << "h : " << temperature[dan][i] << endl;
}
 
//Pomocna Funckija
void ProsjecneTemp(float temperature[7][24], float prosjek[7])
{
  for(int i = 0; i < 7; i++)
  {
    for(int j = 0; j < 24; j++)
      prosjek[i] += temperature[i][j];
    prosjek[i] /= 24;
  }
}
 
//Pomocna Funckija
int getNajnizaAvgTemp(float temperature[7][24])
{
  float prosjek[7]{};
  ProsjecneTemp(temperature, prosjek);
 
  int min = 0;
  for(int i = 1; i < 7; i++)
    if(prosjek[i] < prosjek[min])
      min = i;
 
  return min;
}
 
//Pomocna Funckija
int getNajvisaAvgTemp(float temperature[7][24])
{
  float prosjek[7]{};
  ProsjecneTemp(temperature, prosjek);
 
  int max = 0;
  for(int i = 1; i < 7; i++)
    if(prosjek[i] > prosjek[max])
      max = i;
 
  return max;
}
 
//Glavna Funckija
void DanNajnizomDanNajvisom(float temperature[7][24])
{
  int min = getNajnizaAvgTemp(temperature);
  int max = getNajvisaAvgTemp(temperature);
 
  cout << endl << "Dan sa najnizom prosjecnom temperaturom: " << endl;
  IspisTemperatura(temperature, min);
  cout << endl << "Dan sa najvisom prosjecnom temperaturom: " << endl;
  IspisTemperatura(temperature, max);
}
 
//Pomocna Funckija
int SatSaNajvisomTemperaturom(float temperature[7][24], int dan)
{
  int max = 0;
  for(int i = 0; i < 24; i++)
    if(temperature[dan][i] > temperature[dan][max])
      max = i;
  return max;
}
 
//Glavna Funckija
void SatiSaNajvisomTemperaturom(float temperature[7][24])
{
  for(int i = 0; i < 7; i++)
    cout << "Dan " << i + 1 << " Sat " << SatSaNajvisomTemperaturom(temperature, i) + 1 << endl;
}
 
//Glavna Funckija
void ProsjecnaTempPodne(float temperature[7][24])
{
  float prosjek = 0;
  for(int i = 0; i < 7; i++)
    prosjek += temperature[i][11];
  prosjek /= 7;
 
  cout << "Prosjecna temperatura za podne je " << prosjek << endl;
}
 
int main()
{
  float temperature[7][24];
 
  //Za testiranje
  // srand(time(0));
  for(int i = 0; i < 7; i++)
    UnosTemperatura(temperature, i);
 
  DanNajnizomDanNajvisom(temperature);
  SatiSaNajvisomTemperaturom(temperature);
  ProsjecnaTempPodne(temperature);
 
  return 0;
}