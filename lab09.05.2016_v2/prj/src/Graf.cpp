#include "Graf.hh"

/*!
 *\brief 
 *Dodawanie wierzcholka do grafu
 *
 *\param[in] pozycja okresla nazwe identyfikujaca dany wierzcholek
 */
void Graf::DodajW(string pozycja){
  Wierzcholek W(pozycja);
  obiekt.DodajW(W);
}

/*!
 *\brief 
 *Dodawanie krawedzi do grafu
 *
 *\param[in] poczatek jeden z dwoch wierzcholkow, ktore laczy krawedz
 *\param[in] poczatek jeden z dwoch wierzcholkow, ktore laczy krawedz
 *\param[in] waga waga krawedzi
 */
bool Graf::DodajK(string poczatek,string koniec, int waga){
  int indeks;

  indeks=obiekt.Wyszukaj(poczatek);
  if(indeks==-1){
    cerr<<"DodajK: Nie ma takiego wierzcholka poczatkowego"<<endl;
    return false;
  }
  WezW(indeks).DodajKrawedz(koniec,waga);

  indeks=obiekt.Wyszukaj(koniec);
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
bool Graf::UsunK(string poczatek,string koniec){
  int indeks;
  indeks=obiekt.Wyszukaj(poczatek);
  if(indeks==-1){
    cerr<<"UsunK: Nie ma takiego wierzcholka poczatkowego"<<endl;
    return false;
  }
  if(!WezW(indeks).UsunKrawedz(koniec)){
    cerr<<"UsunK: nie ma takiej krawedzi (brak konca)"<<endl;
    return false;
  }

  indeks=obiekt.Wyszukaj(koniec);
  if(indeks==-1){
    cerr<<"UsunK: Nie ma takiego wierzcholka koncowego"<<endl;
    return false;
  }
  if(!WezW(indeks).UsunKrawedz(poczatek)){
    cerr<<"UsunK: nie ma takiej krawedzi (brak poczatku)"<<endl;
    return false;
  }

  return true;
}
   
/*!
 *Usuwa podany wierzcholek i przylegajace do niego krawedzie
 *
 *\param[in] pozycja identyfikator wierzcholka do usuniecia
 */
bool Graf::UsunW(string pozycja){
  Kolejka sasiedzi;
  int indeks=-1;
  indeks=obiekt.Wyszukaj(pozycja);
  if(indeks==-1){
    cerr<<"UsunW: Nie ma takiego wierzcholka do usuniecia"<<endl;
    return false;
  }
  WezW(indeks).ZapiszSasiadow(sasiedzi);
  WezW(indeks).OproznijKrawedz();
  WezW(indeks).Pozycja()="pusty";
  while(!sasiedzi.Czypusta()){
    indeks=obiekt.Wyszukaj(sasiedzi.Usun());
    WezW(indeks).UsunKrawedz(pozycja);
  }

  return true;
}
   
/*!
 *Wyswietla Wszystkie wierzcholki i przylegajace do nich krawedzie
 */
void Graf::Wyswietl(){
  for(int i=0;i<obiekt.WezPelne();i++){
    cout<<"indeks "<<i<<endl;
    WezW(i).WyswietlKrawedz();
  }
}

/*!
 *Wyszukuje dany wierzcholek grafu na podstawie jego identyfikatora
 *
 *\param[in] pozycja identyfikator wierzcholka
 *
 *\retval indeks indeks, pod ktorym przechowywany jest dany wierzcholek w grafie
 */
int Graf::WyszukajW(string pozycja){
  return obiekt.Wyszukaj(pozycja);
  }
