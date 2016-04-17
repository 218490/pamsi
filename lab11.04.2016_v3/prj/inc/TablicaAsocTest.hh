#ifndef TABLICAASOCTEST_HH
#define TABLICAASOCTEST_HH

#include <iostream>
#include <cstring>
#include "Stoper.hh"
#include "TablicaAsoc.hh"
#include "IRunnable.hh"
using namespace std;

/*!
 *\file
 *\brief Testowanie tablicy asocjacyjnej
 */
class TablicaAsocTest: public IRunnable{

public:
  bool Testuj(string nazwapom);

};
 bool otworz_plik_odczyt(string nazwapom, fstream& StrmPlikowy);
 void PrzypiszLiczby(int rozmiar[]);

#endif
