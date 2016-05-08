#ifndef DRZEWOTEST_HH
#define DRZEWOTEST_HH

#include <iostream>
#include <cstring>
#include "Stoper.hh"
#include "Drzewo.hh"
#include "Lista.hh"
#include "IRunnable.hh"
using namespace std;

/*!
 *\file
 *\brief Test dzialania drzewa czerwono-czarnego
 */
class DrzewoTest: public IRunnable{
Lista<int> lista;

public:
  bool Przygotuj(string nazwapliku);
  void Testuj();

};
 bool otworz_plik_odczyt(string nazwapom, fstream& StrmPlikowy);

#endif
