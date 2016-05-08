#ifndef IRUNNABLE_HH
#define IRUNNABLE_HH

#include <iostream>
using namespace std;

/*!
 *\file
 *\brief Interface testowania Drzewa czerwono-czarnego
 */
class IRunnable{

public:
  virtual bool Przygotuj(string nazwapliku)=0;
  virtual void Testuj()=0;

};

#endif
