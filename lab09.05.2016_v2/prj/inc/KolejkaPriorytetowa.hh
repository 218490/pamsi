#ifndef KOLEJKAPRIORYTETOWA_HH
#define KOLEJKAPRIORYTETOWA_HH

#include "Polaczenie.hh"
#include <iostream>
using namespace std;

/*!
 *\file
 *\brief implementacja abstrakcyjnego typu danych - KolejkaPriorytetowa
 */

 class KolejkaPriorytet{
   Polaczenie *head=NULL;
   Polaczenie *tail=NULL;
   int rozmiar=0;
 public:
   ~KolejkaPriorytet(){if(Rozmiar()!=0) Oproznij();};
   void Dodaj(Polaczenie elem);
   Polaczenie Usun();
   Polaczenie Wez();
   int Rozmiar(){return rozmiar;};
   bool Czypusta(){if(rozmiar==0) return true; else return false;};

   void Oproznij();
   //void Wyswietl();
 };

#endif
