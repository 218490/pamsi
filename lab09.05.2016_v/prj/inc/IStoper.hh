#ifndef ISTOPER_HH
#define ISTOPER_HH

#include <iostream>
using namespace std;

/*!
 *\file
 *\brief
 *Interface Stoper
 */

 class IStoper{
 public:
  virtual void start()=0;
  virtual void stop()=0;
  virtual double get_time()=0;
  virtual bool zapis_do_pliku()=0;

 };

#endif
