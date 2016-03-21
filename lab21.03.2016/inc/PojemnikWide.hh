#ifndef POJEMNIKWIDE_HH
#define POJEMNIKWIDE_HH

#include <iostream>
#include <string>
using namespace std;

/*!
 *\file
 *\brief Pelni role pojedynczego elementu ADT (Lista)
 */
class PojemnikWide{
  string zmienna;
  int indeks=0;
public:
  PojemnikWide *wsk=NULL;

  void Zmienpole(string pom){zmienna=pom;};
  int& Wezindeks(){return indeks;};
  string Wezzmienna(){return zmienna;};
  PojemnikWide* Wskaznik(){return wsk;};
};

#endif
