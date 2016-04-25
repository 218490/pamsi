#include "Graf.hh"

void Graf::DodajW(int pozycja){
  Wierzcholek W;
  W.Pozycja(pozycja);

  if(obiekt.Czypusta()){
    obiekt.Dodaj(W,0);
      return;
  }

  if(pozycja>obiekt.Rozmiar()){
    obiekt.Dodaj(W,obiekt.Rozmiar());
    return;
  }

  obiekt.Dodaj(W,pozycja);

}

void Graf::DodajK(int poczatek,int koniec){
  //Znajdz wierzcholek poczatkowy w liscie i dodaj do niego krawedz "K"
  //Znajdz wierzcholek koncowy w liscie i dodaj do niego krawedz "K"

}
