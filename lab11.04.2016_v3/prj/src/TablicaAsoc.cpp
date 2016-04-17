#include "TablicaAsoc.hh"

/*!
 *\file 
 *
 *\brief Implementacja metod klasy TablicaAsoc
 */

/*!
 *Metoda wyszukujaca numer dla podanego klucza
 *
 *\param[in] szukanyklucz- dla tego klucza szukamy numer
 *
 *\retval numer telefonu dla szukanego klucza
 */
int TablicaAsoc::operator[](string szukanyklucz){
  Rekord rekpom(szukanyklucz);
  int indeksHash=Haszuj(szukanyklucz);
  int indeksListy=tablica[indeksHash].Wyszukaj(rekpom);
  if( indeksListy == -1 )
    return -1;
  else{
    return tablica[indeksHash].Wez(indeksListy).WezNumer();
  }
}
