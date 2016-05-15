#ifndef IRUNNABLE_HH
#define IRUNNABLE_HH

#include <iostream>
using namespace std;

/*!
 *\file
 *\brief interfejs do testowania programow
 */

class IRunnable{

public:
  virtual bool Testuj(string nazwapom)=0;  
};

#endif