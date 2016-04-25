#ifndef WIERZCHOLEK_HH
#define WIERZCHOLEK_HH

#include <iostream>
#include "Lista.hh"
#include "Krawedz.hh"
using namespace std;

class Wierzcholek{
  int numer=0;
  Lista<Krawedz> krawedzie;

public:
  void Pozycja(int pnumer){numer=pnumer;};
  void DodajKrawedz(int pocz, int kon);

};


#endif
