#ifndef WIERZCHOLEK_HH
#define WIERZCHOLEK_HH

#include <iostream>
#include "Lista.hh"
#include "Kolejka.hh"
#include "Krawedz.hh"
#include "Stos.hh"
using namespace std;

class Wierzcholek{
  string nazwa="1";
  Lista<Krawedz> krawedzie;

public:
  Wierzcholek(){};
  Wierzcholek(string pnazwa){nazwa=pnazwa;};
  //~Wierzcholek(){krawedzie.Oproznij();};
  string& Pozycja(){return nazwa;};
  void DodajKrawedz(string sasiad, int waga=1);
  bool UsunKrawedz(string sasiad);
  /*!
   *Daje dostep do i'tej krawedzi zapisanej na liscie wierzcholka
   */
  Krawedz& WezK(int indeks){return krawedzie.Wez(indeks);};
  void WyswietlKrawedz();
  void OproznijKrawedz(){krawedzie.Oproznij();};
  void ZapiszSasiadow(Kolejka& kolejka);
  void ZapiszSasiadow(Stos& stos);

  bool operator==(Wierzcholek drugi);

};


#endif