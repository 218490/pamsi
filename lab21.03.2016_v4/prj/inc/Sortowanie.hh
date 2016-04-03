#ifndef SORTOWANIE_HH
#define SORTOWANIE_HH

#include <iostream>
#include "Lista.hh"
using namespace std;

#define ROZMIAR 10

/*!
 *\file
 *\brief Zawiera metody sortujace
 */

class Sortowanie{

public:
  void ZamienLista(Lista<double> &lista,int i, int j);
  void Babelkowe(Lista<double> &lista);
};

#endif
