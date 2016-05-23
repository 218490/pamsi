#include "TablicaAsoc.hh"

/*!
 *\file 
 *
 *\brief Implementacja metod klasy TablicaAsoc
 */

/*!
 *\brief Destruktor
 *
 *Usuwa wszystkie elementy tablicy
 */
TablicaAsoc::~TablicaAsoc(){
  for(int i=0;i<rozmiar;i++){
    tablica[i].Oproznij();
  }
  delete []tablica; 
  tablica=NULL;
  rozmiar=0;
}

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

/*!
 *Metoda sprwadzajaca czy tablica przechowuje rekord o podanym kluczu
 *
 *\param[in] szukanyklucz- rekord z takim kluczem jest szukany
 *
 *\retval true jezeli tablica przechowuje rekord o podanym kluczu
 */
bool TablicaAsoc::Wyszukaj(string szukanyklucz){
  Rekord rekpom(szukanyklucz);
  int indeksHash=Haszuj(szukanyklucz);
  int indeksListy=tablica[indeksHash].Wyszukaj(rekpom);
  if( indeksListy == -1 )
    return false;
  else{
    return true;
  }
}
