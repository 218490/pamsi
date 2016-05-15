#ifndef GRAF_HH
#define GRAF_HH

#include <iostream>
#include "Lista.hh"
#include "Wierzcholek.hh"
#include "IGraf.hh"
using namespace std;

/*!
 *\file
 *\brief
 *Implementacja grafu za pomoca listy sasiedztwa
 */

class Graf: public IGraf{
  Lista<Wierzcholek> obiekt;

public:
  ~Graf();
  void DodajW(int pozycja);
  bool DodajK(int poczatek,int koniec, int waga=1);
  bool UsunK(int poczatek,int koniec);
  bool UsunW(int pozycja);

  Wierzcholek& WezW(int indeks){return obiekt.Wez(indeks);};
  int WyszukajW(int pozycja);
  void Wyswietl();
};


#endif
