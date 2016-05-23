#ifndef IRUNNABLE_HH
#define IRUNNABLE_HH

#include <iostream>
using namespace std;

/*!
 *\file
 *\brief Interface testowania Grafu
 */
class IRunnable{

public:
  virtual bool Przygotuj(string NazwaPlikuWytyczne,string pNazwaPlikuDane)=0;
  virtual void TestujBandB()=0;

};

#endif
