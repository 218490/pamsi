#ifndef POJEMNIKK_HH
#define POJEMNIKK_HH

#include <iostream>
#include <cstring>
#include <Krawedz.hh>
using namespace std;

/*!
 *\file
 *\brief Pelni role pojedynczego elementu ADT (Kolejka, Stos)
 */

class PojemnikK{
  Krawedz zmienna;
public:
  PojemnikK *wsk=NULL;

  void Zmienpole(Krawedz pom){zmienna=pom;};
  Krawedz Wezzmienna(){return zmienna;};
  PojemnikK* Wskaznik(){return wsk;};
};

#endif
