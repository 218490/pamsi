#ifndef DRZEWO_HH
#define DRZEWO_HH

#include <iostream>
#include "Pojemnik.hh"
#include "IDrzewo.hh"
using namespace std;

/*!
 *\file
 *\brief
 *Implementacja drzewa czerwono-czarnego
 */

class Drzewo: public IDrzewo{
   Pojemnik *head=NULL;

   void Usun(Pojemnik *pom);
 public:

   Drzewo(){};
   ~Drzewo(){ Usun(head);};

   bool Dodaj(int element);
   Pojemnik* Wyszukaj(int element);

   Pojemnik* DodajBezBalansu(int element);
   void LewaRotacja(Pojemnik *X);
   void PrawaRotacja(Pojemnik *X);
   string JakiJestem(Pojemnik *wezel);
   void Wyswietl(Pojemnik *start=NULL,string strona="korzen");
   void Proba();

   Pojemnik* Stryj(Pojemnik* Z);
   Pojemnik* Dziadek(Pojemnik* Z);
 };

#endif