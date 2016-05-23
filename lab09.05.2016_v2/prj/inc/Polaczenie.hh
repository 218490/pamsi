#ifndef POLACZENIE_HH
#define POLACZENIE_HH

#include <iostream>
#include <cstring>
using namespace std;

/*!
 *\file
 *\brief Pelni role pojedynczego elementu Kolejki Priorytetowej
 */

class Polaczenie{
  string pozycja="brak";
  int suma=0;
  string historia="";
public:
  Polaczenie *wsk=NULL;

  string& WezPozycja(){return pozycja;};
  int& WezSuma(){return suma;};
  string& WezHistoria(){return historia;};
  Polaczenie* Wskaznik(){return wsk;};
};

#endif
