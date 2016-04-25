#include "Wierzcholek.hh"

void Wierzcholek::DodajKrawedz(int pocz,int kon){
  Krawedz K(pocz,kon);
  krawedzie.Dodaj(K,0);
}
