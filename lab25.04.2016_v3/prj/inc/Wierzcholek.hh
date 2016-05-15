#ifndef WIERZCHOLEK_HH
#define WIERZCHOLEK_HH

#include <iostream>
#include "Lista.hh"
#include "Stos.hh"
#include "Kolejka.hh"
#include "Krawedz.hh"
using namespace std;

class Wierzcholek{
  int numer=0;
  Lista<Krawedz> krawedzie;
  int flaga=0; //0-nieodwiedzone 1-odwiedzone

public:
  Wierzcholek(){};
  Wierzcholek(int pnumer){numer=pnumer;};
  int& Pozycja(){return numer;};
  void DodajKrawedz(int sasiad, int waga=1);
  bool UsunKrawedz(int sasiad);
  /*!
   *Daje dostep do i'tej krawedzi zapisanej na liscie wierzcholka
   */
  Krawedz& WezK(int indeks){return krawedzie.Wez(indeks);};
  void WyswietlKrawedz();
  void OproznijKrawedz(){krawedzie.Oproznij();};
  void ZapiszSasiadow(Stos& sasiedzi);
  void ZapiszSasiadow(Kolejka& kolejka);
  void Flaga(){flaga=1;};
  bool CzyOdwiedzony(){if(flaga==1) return true; else return false;};

  bool operator==(Wierzcholek drugi);

};


#endif
