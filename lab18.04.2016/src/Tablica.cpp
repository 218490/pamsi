#include "Tablica.hh"

/*!
 *Dodaje element do tablicy dynamicznej. Gdy indeks przekracza pojemnosc,
 *tablica zwieksza sie o liczbe elementow jakie jest w stanie pomiescic 
 *drzewo na kolejnym poziomie
 */
bool Tablica::Dodaj(int element, int indeks){
  if( indeks>=rozmiar ){
    int *tabpom=NULL;
    tabpom=new int[rozmiar];
    for(int i=0;i<rozmiar;i++)
      tabpom[i]=tablica[i];

    delete []tablica;
    potega++;
    rozmiar=pow(2,potega);
    tablica=new int[rozmiar];

    for(int i=0;i<pow(2, (potega-1) );i++)
      tablica[i]=tabpom[i];
    delete []tabpom;

    if( indeks>=rozmiar ){ 
      cerr<<"Podales zly indeks, przeskakujesz o wiecej niz jeden poziom"<<endl;
      return false;
    }

    tablica[indeks]=element;
    return true;
  }
  else
    tablica[indeks]=element;

  return true;
}
