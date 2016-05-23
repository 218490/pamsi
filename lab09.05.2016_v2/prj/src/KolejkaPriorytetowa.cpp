#include "KolejkaPriorytetowa.hh"

/*!
 *\file
 *\brief Definicja metod ADT- KolejkaPriorytetowa
 */

/*!
 *Element dodawany jest do kolejki w taki sposob, ze na jej poczatku zawsze
 *skladowany jest element o najmniejszym parametrze "Suma"
 *
 *\param[in] element element, ktory ma byc przechowany w kolejce
 */
void KolejkaPriorytet::Dodaj(Polaczenie element){
  if(Czypusta()){
    tail=new Polaczenie;
    tail->WezPozycja()=element.WezPozycja();
    tail->WezSuma()=element.WezSuma();
    tail->WezHistoria()=element.WezHistoria();
    head=tail;
    rozmiar++;
  }
  else{
    Polaczenie *pom;
    pom=new Polaczenie;
    pom->WezPozycja()=element.WezPozycja();
    pom->WezSuma()=element.WezSuma();
    pom->WezHistoria()=element.WezHistoria();

    Polaczenie *szukacz;
    szukacz=head;
    if(szukacz->WezSuma() >= pom->WezSuma()){
      pom->wsk=szukacz;
      head=pom;
      pom=NULL;
      szukacz=NULL;
      rozmiar++;
      return;
    }
    Polaczenie *szukacz2;
    szukacz2=szukacz->Wskaznik();
    if(szukacz2==NULL){
      szukacz->wsk=pom;
      tail=pom;
      szukacz=NULL;
      pom=NULL;
      rozmiar++;
      return;
    }
    while(szukacz2->WezSuma() < pom->WezSuma()){
      szukacz=szukacz2;
      szukacz2=szukacz2->Wskaznik();
      if(szukacz2==NULL){
	szukacz->wsk=pom;
	tail=pom;
	szukacz=NULL;
	pom=NULL;
	rozmiar++;
	return;
      }
    }
    pom->wsk=szukacz2;
    szukacz->wsk=pom;
    szukacz=NULL;
    szukacz2=NULL;
    pom=NULL;
    rozmiar++;
  }

}

/*!
 *Usuwa element z poczatku kolejki (o najmniejszym parametrze "Suma") i zwraca 
 *go
 *
 *\retval usuniety element
 */
Polaczenie KolejkaPriorytet::Usun(){
  Polaczenie zwracana;
  if(Czypusta()){
    cerr<<"Kolejka pusta, nie ma co usuwac. Zwracam przypadkowa zmienna"<<endl;
  }
  else{
    Polaczenie *pom;
    pom=head;
    head=head->Wskaznik();
    zwracana.WezPozycja()=pom->WezPozycja();
    zwracana.WezSuma()=pom->WezSuma();
    zwracana.WezHistoria()=pom->WezHistoria();
    delete pom;
    pom=NULL;
    rozmiar--;
  }
  return zwracana;
}
   
/*!
 *Zwraca wartosc pierwszego elementu w kolejce. Funkcja NIE sluzy do 
 *modyfikowania wartosci tego elementu
 *
 */
Polaczenie KolejkaPriorytet::Wez(){
  Polaczenie zwracana;
  if(Czypusta()){
    cerr<<"Kolejka pusta. Zwracam przypadkowa zmienna"<<endl;
  }
  else{
    zwracana.WezPozycja()=head->WezPozycja();
    zwracana.WezSuma()=head->WezSuma();
    zwracana.WezHistoria()=head->WezHistoria();
  }
  return zwracana;
}

/*!
 *Usuwa wszystkie elementy kolejki priorytetowej
 */
void KolejkaPriorytet::Oproznij(){
  if(!Czypusta()){
    for(int i=Rozmiar();i>0;i--){
      Usun();
      //cout<<"Usunieto"<<endl;
    }
    head=NULL;
    tail=NULL;
  }
}
   
/*//
 *Wyswietla wszystkie elementy kolejki od pierwszego do ostatniego
 *//*
void Kolejka::Wyswietl(){
  if(Czypusta()){
    cerr<<"Kolejka pusta. Nie ma czego wyswietlac"<<endl;
  }
  else{
    Pojemnik *pom;
    pom=head;
    cout<<pom->Wezzmienna()<<endl;
    while(pom->Wskaznik()!=NULL){
      pom=pom->Wskaznik();
      cout<<pom->Wezzmienna()<<endl;
    }
    pom=NULL;
  }

}
   */
