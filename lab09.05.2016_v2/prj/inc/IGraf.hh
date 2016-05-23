#ifndef IGRAF_HH
#define IGRAF_HH

#include <iostream>
using namespace std;

/*!
 *\file
 *\brief
 *Interface Grafu
 */

 class IGraf{

 public:
  virtual void DodajW(string pozycja)=0;
  virtual bool DodajK(string poczatek,string koniec, int waga=1)=0;
  virtual bool UsunK(string poczatek,string koniec)=0;
  virtual bool UsunW(string pozycja)=0;
 };

#endif
