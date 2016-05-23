#ifndef STOS_HH
#define STOS_HH

#include <iostream>
#include "PojemnikK.hh"
using namespace std;

/*!
 *\file
 *\brief interface abstrakcyjnego typu danych - Stos
 */

 class Stos{
   PojemnikK *head=NULL;
   int rozmiar=0;
 public:
   ~Stos(){if(Rozmiar()!=0) Oproznij();};
   void Dodaj(Krawedz elem);
   Krawedz Usun();
   Krawedz Wez();
   bool Czypusty(){if(rozmiar==0) return true; else return false;};
   int Rozmiar(){return rozmiar;};

   void Oproznij();
   void Wyswietl();
   // bool Wyszukaj(int szukane);

 };

#endif
