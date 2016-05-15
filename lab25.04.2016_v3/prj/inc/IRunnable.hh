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
  virtual bool Przygotuj(string nazwapliku)=0;
  virtual void TestujDFS()=0;
  virtual void TestujBFS()=0;

};

#endif
