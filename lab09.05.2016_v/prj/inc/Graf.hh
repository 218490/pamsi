#ifndef GRAF_HH
#define GRAF_HH

#include <iostream>
#include "TablicaW.hh"
#include "IGraf.hh"
using namespace std;

/*!
 *\file
 *\brief
 *Implementacja grafu za pomoca listy sasiedztwa
 */

class Graf: public IGraf{
  TablicaW obiekt;

public:
  void DodajW(string pozycja);
  bool DodajK(string poczatek,string koniec, int waga=1);
  bool UsunK(string poczatek,string koniec);
  bool UsunW(string pozycja);

  Wierzcholek& WezW(int indeks){return obiekt.WezW(indeks);};
  int WyszukajW(string pozycja);
  void Wyswietl();
};


#endif