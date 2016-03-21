#ifndef LISTA_HH
#define LISTA_HH

#include <iostream>
#include "PojemnikWide.hh"
using namespace std;

/*!
 *\file
 *\brief interface abstrakcyjnego typu danych - Lista
 *
 *Elementy do Listy mozesz dodawac lub usuwac dowolnie czyli na poczatku,
 *koncu badz wewnatrz listy
 */

 class Lista{
  PojemnikWide *head=NULL;
  PojemnikWide *tail=NULL;

 public:
   bool Dodaj(string elem,int ind);
   string Usun(int ind);
   string Wez(int ind);
  int Rozmiar(){return tail->Wezindeks()+1;};
  /*!
   *\retval true- gdy lista jest pusta
   *\retval false- w przypadku przeciwnym
   */
  bool Czypusta(){if(head==NULL) return true; else return false;};
  void Oproznij();
  void Wyswietl();
   int Wyszukaj(string szukane);


 };

#endif