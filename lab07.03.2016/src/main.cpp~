#include <iostream>
#include "Tablica.hh"
#include <ctime>
#include <iomanip> 

using namespace std;

int main(){
  int MAX=10;
  tabdyn tabd;
  int pom;
  srand(time(NULL));

  tabd.zainicjalizuj();  
    do{
    pom=rand()%100+1;
    //  tabd.dodaj_liczby(pom);
    //	tabd.dodaj_liczby_dwa(pom);
    tabd.dodaj_liczby_dek(pom);
    }while(tabd.ile_elementow()<MAX);
  tabd.usun();

  double czas=static_cast <double>(clock()) /CLOCKS_PER_SEC;
  cout<<"Czas trwania algorytmu: "<<setprecision(8)<<czas<<endl;
}
