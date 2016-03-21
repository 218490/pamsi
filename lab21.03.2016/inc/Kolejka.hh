#ifndef KOLEJKA_HH
#define KOLEJKA_HH

#include "Pojemnik.hh"
#include <iostream>
using namespace std;

/*!
 *\file
 *\brief interface abstrakcyjnego typu danych - Kolejka
 */

 class Kolejka{
   Pojemnik *head=NULL;
   Pojemnik *tail=NULL;
   int rozmiar=0;
 public:
   void Dodaj(double elem);
   double ZwrocIusun();
   double Wez();
   int Rozmiar(){return rozmiar;};
   bool Czypusta(){if(rozmiar==0) return true; else return false;};

   void Oproznij();
   void Wyswietl();
 };

#endif
