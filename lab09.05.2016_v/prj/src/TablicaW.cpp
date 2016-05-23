#include "TablicaW.hh"

/*!
 *\brief Destruktor
 *
 *Usuwa wszystkie elementy z tablicy
 */
TablicaW::~TablicaW(){
  for(int i=0;i<WezPelne();i++){
    tablica[i].OproznijKrawedz();
  }
  delete []tablica;
  tablica=NULL;
}

/*!
 *Dodaje wierzcholek do tablicy wierzcholkow
 *
 *\param[in] W Wierzcholek do zapisania w tablicy wierzcholkow
 */
void TablicaW::DodajW(Wierzcholek W){
  if(pelne<rozmiar){
    tablica[pelne]=W;
    pelne++;
  }
  else{
    Wierzcholek *tabpom=NULL;
    tabpom=new Wierzcholek[rozmiar];
    for(int i=0;i<rozmiar;i++){
      tabpom[i]=tablica[i];
    }
    delete []tablica;
    int prozmiar=rozmiar;
    rozmiar=rozmiar*2;
    tablica=new Wierzcholek[rozmiar];
    for(int i=0;i<prozmiar;i++){
      tablica[i]=tabpom[i];
    }
    tablica[pelne]=W;
    delete []tabpom;
    tabpom=NULL;
    pelne++;
  }

}

/*!
 *Wyszukiwanie podanego wierzcholka w tablicy wierzcholkow
 *
 *\param[in] szukane nazwa szukanego wierzcholka
 *
 *\retval indeks komorki tablicy, ktora przechowuje szukany wierzcholek lub -1
 *jezeli nie znaleziono danego wierzchoka
 */
int TablicaW::Wyszukaj(string szukane){
  Wierzcholek W(szukane);
  for(int i=0;i<WezPelne();i++){
    if(tablica[i]==W)
      return i;
  }
  return -1;
}
