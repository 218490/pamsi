#include "Wierzcholek.hh"

/*!
 *Przypisuje krawedz o zadanych parametrach do wierzcholka
 *
 *\param[in] sasiad zostanie dodana krawedz prowadzaca do tego sasiada
 *\param[in] waga waga krawedzi
 */
void Wierzcholek::DodajKrawedz(int sasiad, int waga){
  Krawedz K(sasiad,waga);
  krawedzie.Dodaj(K,krawedzie.Rozmiar());
}

/*!
 *Usuwa podana krawedz przylegajaca do wierzcholka
 *
 *\param[in] sasiad krawedz prowadzaca do tego sasiada mamy usunac
 */
bool Wierzcholek::UsunKrawedz(int sasiad){
  int indeks;
  Krawedz K(sasiad);
  indeks=krawedzie.Wyszukaj(K);
  if(indeks==-1){
    cerr<<"UsunKrawedz: Nie ma takiej krawedzie"<<endl;
    return false;
  }
  krawedzie.Usun(indeks);
  return true;
}

/*!
 *Wyswietla wszystkie krawedzie przylegajace do danego wierzcholka
 */
void Wierzcholek::WyswietlKrawedz(){
  cout<<"Wierzcholek "<<Pozycja()<<":"<<endl;
  for(int i=0;i<krawedzie.Rozmiar();i++){
    cout<<"("<<Pozycja()<<",";
    cout<<WezK(i).WezSasiad()<<")"<<endl;
    }
  cout<<endl;
}

/*!
 *Przeciazenie porownania na potrzeby wyszukiwania wierzcholka w liscie
 *wierzcholkow
 */
bool Wierzcholek::operator==(Wierzcholek drugi){
  if(numer==drugi.Pozycja())
    return true;
  else
    return false;

}

/*!
 *Zapisuje do stosu wszystkie sasiadujace wierzcholki
 *
 *\param[in] stos w nim zapisane beda informacje o sasiadach
 */
void Wierzcholek::ZapiszSasiadow(Stos& stos){
  for(int i=krawedzie.Rozmiar();i>0;i--){
    stos.Dodaj(WezK(i-1).WezSasiad());
  }
}

/*!
 *Zapisuje do kolejki wszystkie sasiadujace wierzcholki
 *
 *\param[in] kolejka w niej zapisane beda informacje o sasiadach
 */
void Wierzcholek::ZapiszSasiadow(Kolejka& kolejka){
  for(int i=krawedzie.Rozmiar();i>0;i--){
    kolejka.Dodaj(WezK(i-1).WezSasiad());
  }
}
