#ifndef KRAWEDZ_HH
#define KRAWEDZ_HH

#include <iostream>
using namespace std;

/*!
 *\file
 *\brief Implementacja krawedzi grafu
 */

class Krawedz{
  int sasiad=0;
  int waga=1;

public:

  Krawedz(){};
  Krawedz(int psasiad, int pwaga=1){sasiad=psasiad; waga=pwaga;};
  int WezSasiad(){return sasiad;};
  int WezWaga(){return waga;};
  bool operator==(Krawedz druga);
};


#endif
