#ifndef IRUNNABLE_HH
#define IRUNNABLE_HH

#include <iostream>
using namespace std;

/*!
 * \file
 *\brief Interface do testowania algorytmow sortowania
 */

class IRunnable{
public:
  virtual void Przygotuj()=0;
  virtual void Testuj()=0;
};

#endif
