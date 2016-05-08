#ifndef IDRZEWO_HH
#define IDRZEWO_HH

#include <iostream>
#include "Pojemnik.hh"
using namespace std;

/*!
 *\file
 *\brief
 *Interface drzewa czerwono-czarnego
 */

 class IDrzewo{

 public:

   virtual bool Dodaj(int element)=0;
   virtual Pojemnik* Wyszukaj(int element)=0;

 };

#endif
