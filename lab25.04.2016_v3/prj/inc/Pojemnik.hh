#ifndef POJEMNIK_HH
#define POJEMNIK_HH

#include <iostream>
using namespace std;

/*!
 *\file
 *\brief Pelni role pojedynczego elementu ADT (Kolejka, Stos)
 */

class Pojemnik{
  int zmienna=0;
public:
  Pojemnik *wsk=NULL;

  void Zmienpole(double pom){zmienna=pom;};
  int Wezzmienna(){return zmienna;};
  Pojemnik* Wskaznik(){return wsk;};
};

#endif
