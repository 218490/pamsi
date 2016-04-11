#ifndef MSORT_HH
#define MSORT_HH

#include <iostream>
#include "IList.hh"
#include "SNode.hh"
#include "Tab.hh"
using namespace std;

/*!
 * \file
 *
 *Plik zawiera definicję klasy implementującej algorytm sortowania przez 
 *scalanie
 */

/*!
 * \brief Merge Sort
 */
class MSort{
public:
  void Scal(Tab &tablica, int lewy, int srodek, int prawy);
  void Mergesort(Tab &tablica,int lewy,int prawy);

};

#endif
