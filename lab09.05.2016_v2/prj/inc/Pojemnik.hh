#ifndef POJEMNIK_HH
#define POJEMNIK_HH

#include <iostream>
#include <cstring>
using namespace std;

/*!
 *\file
 *\brief Pelni role pojedynczego elementu ADT (Kolejka, Stos)
 */

class Pojemnik{
  string zmienna;
public:
  Pojemnik *wsk=NULL;

  void Zmienpole(string pom){zmienna=pom;};
  string Wezzmienna(){return zmienna;};
  Pojemnik* Wskaznik(){return wsk;};
};

#endif
