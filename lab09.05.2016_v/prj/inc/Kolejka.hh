#ifndef KOLEJKA_HH
#define KOLEJKA_HH

#include "Pojemnik.hh"
#include <iostream>
using namespace std;

/*!
 *\file
 *\brief implementacja abstrakcyjnego typu danych - Kolejka
 */

 class Kolejka{
   Pojemnik *head=NULL;
   Pojemnik *tail=NULL;
   int rozmiar=0;
 public:
   ~Kolejka(){if(Rozmiar()!=0) Oproznij();};
   void Dodaj(string elem);
   string Usun();
   string Wez();
   int Rozmiar(){return rozmiar;};
   bool Czypusta(){if(rozmiar==0) return true; else return false;};

   void Oproznij();
   void Wyswietl();
 };

#endif
