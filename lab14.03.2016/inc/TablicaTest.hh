#ifndef TABLICATEST_HH
#define TABLICATEST_HH

#include <iostream>
#include "Tablica.hh"
#include "Stoper.hh"
using namespace std;

class tabtest: tabdyn,Stoper{

 public:
  bool testuj(int ilosc,int powtorzenia,char opcja);

 };

#endif
