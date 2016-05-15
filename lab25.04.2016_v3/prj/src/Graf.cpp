#include "Graf.hh"

/*!
 *\brief 
 *Dodawanie wierzcholka do grafu
 *
 *\param[in] pozycja okresla numer identyfikujacy dany wierzcholek
 */
void Graf::DodajW(int pozycja){
  Wierzcholek W(pozycja);

  if(pozycja<0){
    cerr<<"DodajW: Wierzcholek grafu nie moze byc ujemny!"<<endl;
    return;
  }

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

/*!
 *\brief 
 *Dodawanie krawedzi do grafu
 *
 *\param[in] poczatek jeden z dwoch wierzcholkow, ktore laczy krawedz
 *\param[in] poczatek jeden z dwoch wierzcholkow, ktore laczy krawedz
 *\param[in] waga waga krawedzi
 */
bool Graf::DodajK(int poczatek,int koniec, int waga){
  Wierzcholek pom(poczatek);
  int indeks;
  indeks=obiekt.Wyszukaj(pom);
  if(indeks==-1){
    cerr<<"DodajK: Nie ma takiego wierzcholka poczatkowego"<<endl;
    return false;
  }
  WezW(indeks).DodajKrawedz(koniec,waga);

  pom.Pozycja()=koniec;
  indeks=obiekt.Wyszukaj(pom);
  if(indeks==-1){
    cerr<<"DodajK: Nie ma takiego wierzcholka koncowego"<<endl;
    return false;
  }
  WezW(indeks).DodajKrawedz(poczatek,waga);

  return true;
}

/*!
 *Usuwanie krawedzi z grafu
 */
bool Graf::UsunK(int poczatek,int koniec){
  Wierzcholek W(poczatek);
  int indeks;
  indeks=obiekt.Wyszukaj(W);
  if(indeks==-1){
    cerr<<"UsunK: Nie ma takiego wierzcholka poczatkowego"<<endl;
    return false;
  }
  WezW(indeks).UsunKrawedz(koniec);

  W.Pozycja()=koniec;
  indeks=obiekt.Wyszukaj(W);
  if(indeks==-1){
    cerr<<"UsunK: Nie ma takiego wierzcholka koncowego"<<endl;
    return false;
  }
  WezW(indeks).UsunKrawedz(poczatek);

  return true;
}

/*!
 *Usuwa podany wierzcholek i przylegajace do niego krawedzie
 *
 *\param[in] pozycja identyfikator wierzcholka do usuniecia
 */
bool Graf::UsunW(int pozycja){
  Stos sasiedzi;
  Wierzcholek W(pozycja);
  int indeks=-1;
  indeks=obiekt.Wyszukaj(W);
  if(indeks==-1){
    cerr<<"UsunW: Nie ma takiego wierzcholka do usuniecia"<<endl;
    return false;
  }
  WezW(indeks).ZapiszSasiadow(sasiedzi);
  WezW(indeks).OproznijKrawedz();
  obiekt.Usun(indeks);
  while(!sasiedzi.Czypusty()){
    W.Pozycja()=sasiedzi.Usun();
    indeks=obiekt.Wyszukaj(W);
    WezW(indeks).UsunKrawedz(pozycja);
  }

  return true;
}

/*!
 *Wyswietla Wszystkie wierzcholki i przylegajace do nich krawedzie
 */
void Graf::Wyswietl(){
  for(int i=0;i<obiekt.Rozmiar();i++){
    WezW(i).WyswietlKrawedz();
  }
}

Graf::~Graf(){
  for(int i=0;i<obiekt.Rozmiar();i++){
    WezW(i).OproznijKrawedz();
  }
  obiekt.Oproznij();
}

/*!
 *Wyszukuje dany wierzcholek grafu na podstawie jego identyfikatora
 *
 *\param[in] pozycja identyfikator wierzcholka
 *
 *\retval indeks indeks, pod ktorym przechowywany jest dany wierzcholek w grafie
 */
int Graf::WyszukajW(int pozycja){
  Wierzcholek W(pozycja);
  return obiekt.Wyszukaj(W);
}
