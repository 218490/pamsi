#include "BandB.hh"

/*!
 *\brief Branch and Bound
 *
 *Algorytm znajduje najkrotsza droge w grafie miedzy wierzcholkiem "start", a
 *wierzcholkiem "koniec"
 *
 *\param[in] start wierzcholek, z ktorego zaczynamy poszukiwania drogi
 *\param[in] meta wierzcholek, do ktorego droge wyznaczamy
 *
 *\retval ilosc rozwinietych krawedzi grafu przy wyznaczaniu najkrotszej drogi
 */
int BandB(Graf& graf,string start,string meta){
  int indeks=-1;
  int rozwiniete=0;
  TablicaAsoc odwiedzone(1000);
  Polaczenie pom,pom2;
  Stos sasiedzi;
  KolejkaPriorytet droga,polaczenia;
  Krawedz K;

  indeks=graf.WyszukajW(start);
  if(indeks==-1){
    cerr<<"BandB: Nie ma takiego punktu startowego"<<endl;
    return 0;
  }
  pom.WezPozycja()=graf.WezW(indeks).Pozycja();
  pom.WezHistoria()=pom.WezPozycja();
  graf.WezW(indeks).ZapiszSasiadow(sasiedzi);
  odwiedzone.Dodaj(start);

  while(!sasiedzi.Czypusty()){
    K=sasiedzi.Usun();
    pom2=pom;
    pom2.WezPozycja()=K.WezSasiad();
    pom2.WezSuma()=K.WezWaga();
    pom2.WezHistoria()=pom2.WezHistoria()+"=>"+pom2.WezPozycja();
    polaczenia.Dodaj(pom2);
  }

  while(!polaczenia.Czypusta()){
    pom=polaczenia.Usun();
    if(!droga.Czypusta()){
      if(droga.Wez().WezSuma() < pom.WezSuma())
	odwiedzone.Dodaj(pom.WezPozycja());
    }

    if(pom.WezPozycja()==meta){
      Polaczenie pom3;
      pom3=pom;
      pom3.WezPozycja()="Droga";
      droga.Dodaj(pom3);
      odwiedzone.Dodaj(meta);
    }

    if(!odwiedzone.Wyszukaj(pom.WezPozycja()) ){
      rozwiniete++;
      indeks=graf.WyszukajW(pom.WezPozycja());
      graf.WezW(indeks).ZapiszSasiadow(sasiedzi);
      while(!sasiedzi.Czypusty()){
	pom2=pom;
	K=sasiedzi.Usun();
	pom2.WezPozycja()=K.WezSasiad();
	pom2.WezSuma()=pom2.WezSuma()+K.WezWaga();
	pom2.WezHistoria()=pom2.WezHistoria()+"=>"+pom2.WezPozycja();
	polaczenia.Dodaj(pom2);
      }
      odwiedzone.Dodaj(pom.WezPozycja());
    }

  }
  if(!droga.Czypusta()){
    pom=droga.Wez();
    cout<<"Najkrotsza droga: "<<pom.WezSuma()<<endl;
    cout<<"Przebieg trasy:"<<endl;
    cout<<pom.WezHistoria()<<endl;
  }
  else{
    cout<<"Nie ma takiego wierzcholka koncowego lub wierzcholek koncowy ";
    cout<<"nie ma krawedzi do niego przylegajacych"<<endl;
    return -1;
  }
  return rozwiniete;
}
