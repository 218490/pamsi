#ifndef KRAWEDZ_HH
#define KRAWEDZ_HH

#include <iostream>
using namespace std;

class Krawedz{
  int poczatek=0;
  int koniec=0;
  int waga=1;

public:

  Krawedz(){};
  Krawedz(int poc,int kon){poczatek=poc; koniec=kon;};
  int WezPoczatek(){return poczatek;};
  int WezKoniec(){return koniec;};
  int WezWaga(){return waga;};

};


#endif
