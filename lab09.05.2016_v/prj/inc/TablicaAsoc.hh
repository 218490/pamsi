#ifndef TABLICAASOC_HH
#define TABLICAASOC_HH

#include "TablicaHash.hh"
using namespace std;

/*!
 *\file
 *\brief Tablica asocjacyjna
 */
class TablicaAsoc: public TablicaHash{

public:
  TablicaAsoc(){tablica=new Lista<Rekord>[rozmiar];};
  TablicaAsoc(int prozmiar){rozmiar=prozmiar; tablica=new Lista<Rekord>[rozmiar];};
  ~TablicaAsoc();

  int operator[](string szukanyklucz);
  bool Wyszukaj(string szukanyklucz);

};

#endif
