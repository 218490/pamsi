#ifndef KOLEJKA_HH
#define KOLEJKA_HH

#include <iostream>
using namespace std;

/*!
 *\file
 *\brief interface abstrakcyjnego typu danych - Kolejka
 */

 class Kolejka{

 public:
   bool Dodaj(double elem);
   double Usun();
   bool CzyPusta();
   bool CzyPelna();
   double Wez();
   int Rozmiar();


 };

#endif
