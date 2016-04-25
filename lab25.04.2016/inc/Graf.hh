#ifndef GRAF_HH
#define GRAF_HH

#include <iostream>
#include "Lista.hh"
#include "Wierzcholek.hh"
using namespace std;

/*!
 *\file
 *\brief
 *Implementacja grafu za pomoca listy sasiedztwa
 */

class Graf{
  Lista<Wierzcholek> obiekt;

public:
  void DodajW(int pozycja);
  void DodajK(int poczatek,int koniec);
};


#endif
