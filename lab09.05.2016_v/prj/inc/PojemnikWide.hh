#ifndef POJEMNIKWIDE_HH
#define POJEMNIKWIDE_HH

#include <iostream>
#include <string>
using namespace std;

/*!
 *\file
 *\brief Pelni role pojedynczego elementu ADT (Lista)
 */
template<typename typ>
class PojemnikWide{
  typ zmienna;
  int indeks=0;
public:
  PojemnikWide<typ> *wsk=NULL;

  void Zmienpole(typ pom){zmienna=pom;};
  int& Wezindeks(){return indeks;};
  typ& Wezzmienna(){return zmienna;};
  PojemnikWide<typ>* Wskaznik(){return wsk;};
};

#endif
