#ifndef TABLICAW_HH
#define TABLICAW_HH

#include <iostream>
#include "Wierzcholek.hh"
using namespace std;

/*!
 *\file
 *\brief Implementacja tablicy dynamicznej przechowujacej wierzcholki grafu
 */

class TablicaW{
  Wierzcholek *tablica=NULL;
  int rozmiar=10;
  int pelne=0;

public:
  TablicaW(){tablica=new Wierzcholek[rozmiar];};
  ~TablicaW();
  int WezRozmiar(){return rozmiar;};
  int WezPelne(){return pelne;};

  void DodajW(Wierzcholek W);
  int Wyszukaj(string szukane);
  Wierzcholek& WezW(int indeks){return tablica[indeks];};
};


#endif
