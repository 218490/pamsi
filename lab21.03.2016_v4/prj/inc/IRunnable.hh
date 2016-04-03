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
  virtual void Przygotuj(int pilosc,int ppowtorzenia,char popcja)=0;
  virtual void Przygotuj(string pnazwapliku, string pszukane)=0;

  virtual int Testuj()=0;  
};

#endif
