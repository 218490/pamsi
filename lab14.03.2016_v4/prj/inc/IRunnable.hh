#ifndef IRUNNABLE_HH
#define IRUNNABLE_HH

#include <iostream>
#include "TablicaTest.hh"
#include "ListaTest.hh"
using namespace std;

/*!
 *\file
 *\brief interfejs do testowania programow
 */

class IRunnable{
  tabtest obiekt;
  int ilosc=10;
  int powtorzenia=1;
  char opcja='1';

  ListaTest obiekt2;
  string nazwapliku;
  string szukane;
public:
  void przygotuj(int pilosc,int ppowtorzenia,char popcja);
  void run(){obiekt.testuj(ilosc,powtorzenia,opcja);};

  void przygotuj_szukajlista(string pnazwapliku, string pszukane);
  int run_szukajlista(){return obiekt2.Testuj(nazwapliku,szukane);};
};

#endif
