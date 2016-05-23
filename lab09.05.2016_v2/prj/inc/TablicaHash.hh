#ifndef TABLICAHASH_HH
#define TABLICAHASH_HH

#include <iostream>
#include<cmath>
#include "Lista.hh"
#include "Rekord.hh"
using namespace std;

/*!
 *\file
 *\brief Tablica hashujaca (mieszajaca)
 */
class TablicaHash{
  friend class TablicaAsoc;

  Lista<Rekord> *tablica;
  int rozmiar=10;

public:
  TablicaHash(){tablica=new Lista<Rekord>[rozmiar];};
  TablicaHash(int prozmiar){rozmiar=prozmiar; tablica=new Lista<Rekord>[rozmiar];};
  ~TablicaHash();

  int Haszuj(string nazwa);
  bool Dodaj(string klucz, int numer=1);
  int Usun(string klucz);

  void Wyswietl();
};

#endif
