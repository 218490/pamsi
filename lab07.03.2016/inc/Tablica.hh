#ifndef TABLICA_HH
#define TABLICA_HH

#include <iostream>
using namespace std;

 class tabdyn{
  int *tablica=NULL;
  int licznik=0;
  int rozmiar=0;

 public:
   void usun(){if(tablica!=NULL){ delete []tablica; tablica=NULL;} };
   void wyswietl(){for(int i=0;i<rozmiar;i++) cout<<tablica[i]<<" ";  };
  int wez_rozmiar(){return rozmiar;};
  void zainicjalizuj();
  void dodaj_liczby(int pom);
  void dodaj_liczby_dwa(int pom);
   void dodaj_liczby_dek(int pom);
   /*!
    *Zwraca ilosc elementow przechowywanych w tablicy
    */
   int ile_elementow(){  return (rozmiar-licznik); };

 };

#endif
