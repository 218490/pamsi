#ifndef QSORTTEST_HH
#define QSORTTEST_HH

#include <iostream>
#include "QSort.hh"
#include "SLista.hh"
#include "StoperZZapisem.hh"
#include "IRunnable.hh"
using namespace std;

/*!
 * \file
 *
 *Klasa implementujaca testowanie algorytmu szybkiego sortowania
 */

class QSortTest: public QSort, public IRunnable{
  SLista<int> lista;
public:
  void Przygotuj();
  void Testuj();
};

#endif
