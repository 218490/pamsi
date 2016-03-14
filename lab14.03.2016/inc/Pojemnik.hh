#ifndef POJEMNIK_HH
#define POJEMNIK_HH

#include <iostream>
using namespace std;

/*!
 *\file
 *\brief Pelni role pojedynczego elementu ADT (Lista, Stos)
 */

typedef struct pojem{
  double zmienna;
  int index=0;
  pojem *wsk=NULL;
 }Pojemnik;

#endif
