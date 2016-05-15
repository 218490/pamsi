#ifndef STOS_HH
#define STOS_HH

#include <iostream>
#include "Pojemnik.hh"
using namespace std;

/*!
 *\file
 *\brief interface abstrakcyjnego typu danych - Stos
 */

 class Stos{
   Pojemnik *head=NULL;
   int rozmiar=0;
 public:
   ~Stos(){if(Rozmiar()!=0) Oproznij();};
   void Dodaj(double elem);
   int Usun();
   int Wez();
   bool Czypusty(){if(rozmiar==0) return true; else return false;};
   int Rozmiar(){return rozmiar;};

   void Oproznij();
   void Wyswietl();
   bool Wyszukaj(int szukane);

 };

#endif