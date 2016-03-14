#ifndef LISTA_HH
#define LISTA_HH

#include <iostream>
#include "Pojemnik.hh"
using namespace std;

/*!
 *\file
 *\brief interface abstrakcyjnego typu danych - Lista
 */

 class Lista{
   Pojemnik *kostka;

 public:
   bool Dodaj(double elem,int index);
   double Usun(int index);
   bool CzyPusty();
   double Wez();
   int Rozmiar();


 };

#endif
