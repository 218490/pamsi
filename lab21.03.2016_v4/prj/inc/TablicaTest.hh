#ifndef TABLICATEST_HH
#define TABLICATEST_HH

#include <iostream>
#include "Tablica.hh"
#include "Stoper.hh"
#include "IRunnable.hh"
using namespace std;

class tabtest: tabdyn,Stoper,public IRunnable{
  int ilosc=10;
  int powtorzenia=1;
  char opcja='1';
 public:
  void Przygotuj(int pilosc,int ppowtorzenia,char popcja); //interface
  int Testuj();  //interface

  void Przygotuj(string pnazwapliku, string pszukane){};  //interface
 };



#endif