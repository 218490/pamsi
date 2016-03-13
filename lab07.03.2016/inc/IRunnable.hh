#ifndef IRUNNABLE_HH
#define IRUNNABLE_HH

#include <iostream>
#include "TablicaTest.hh"
using namespace std;

/*!
 *\file
 *\brief interfejs do testowania programow
 */

class IRunnable{
  tabtest obiekt;
  int ilosc=10;
  int powtorzenia=1;
  char opcja='1';
public:
  void przygotuj(int pilosc,int ppowtorzenia,char popcja);
  void run(){obiekt.testuj(ilosc,powtorzenia,opcja);};
};

#endif
