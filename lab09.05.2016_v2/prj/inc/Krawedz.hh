#ifndef KRAWEDZ_HH
#define KRAWEDZ_HH

#include <iostream>
#include <cstring>
using namespace std;

/*!
 *\file
 *\brief Implementacja krawedzi grafu
 */

class Krawedz{
  string sasiad="0";
  int waga=1;

public:

  Krawedz(){};
  Krawedz(string psasiad, int pwaga=1){sasiad=psasiad; waga=pwaga;};
  string WezSasiad(){return sasiad;};
  int WezWaga(){return waga;};
  bool operator==(Krawedz druga);
};


#endif
