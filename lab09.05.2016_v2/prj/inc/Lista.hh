#ifndef LISTA_HH
#define LISTA_HH

#include <iostream>
#include "PojemnikWide.hh"
#include <string>
using namespace std;

/*!
 *\file
 *\brief interface abstrakcyjnego typu danych - Lista
 *
 *Elementy do Listy mozesz dodawac lub usuwac dowolnie czyli na poczatku,
 *koncu badz wewnatrz listy
 */

template<typename typ>
 class Lista{
  PojemnikWide<typ> *head=NULL;
  PojemnikWide<typ> *tail=NULL;

 public:
  //~Lista();
   bool Dodaj(typ elem,int ind);
   typ Usun(int ind);
   typ& Wez(int ind);
  int Rozmiar(){if(tail==NULL) return 0; else return tail->Wezindeks()+1;};
  /*!
   *\retval true- gdy lista jest pusta
   *\retval false- w przypadku przeciwnym
   */
  bool Czypusta(){if(head==NULL) return true; else return false;};
  void Oproznij();
  void Wyswietl();
  int Wyszukaj(typ szukane);
 };


/*!
 *Funkcja przypisuje wartosc do przechowania elementowi typu "Pojemnik"
 * i dodaje ten "Pojeminik" w DOWOLNYM miejscu listy czyli na koncu,
 *poczatku badz wewnatrz listy
 *
 *\param[in] elem- wartosc do przechowania
 *\param[in] index- indeks listy pod jakim bedzie przechowywany pojemnik ze 
 *zmienna
 *
 *\retval false- gdy element ma byc wstawiony w nielogicznym miejscu, np->
 *wstawianie elementu o indeksie 100 kiedy lista ma aktualnie indeksy od 0 do 15
 *\retval true- gdy element wstawiono poprawnie do listy
 */
template<typename typ>
bool Lista<typ>::Dodaj(typ elem,int ind){
  if(Czypusta()){
    if(ind!=0){cerr<<"Pierwszy element musi miec indeks 0"<<endl; return false;}
    head=new PojemnikWide<typ>;
    head->Zmienpole(elem);
    head->Wezindeks()=ind;
    tail=head;
    return true;
  }
  else{
    if(ind<0 || ind>(tail->Wezindeks()+1) ){
      cerr<<"Podano indeks ujemny lub przynajmniej 0 2 wiekszy niz ostatni";
      cerr<<" element listy, ktory wynosi: "<<tail->Wezindeks()<<endl;
      return false;
    }

    PojemnikWide<typ> *pom;
    pom=new PojemnikWide<typ>;
    pom->Zmienpole(elem);
    pom->Wezindeks()=ind;

    if(ind==0){  //dodawanie z przodu listy
      pom->wsk=head;
      head=pom;
      while(pom->Wskaznik()!=NULL){
	pom=pom->Wskaznik();
	pom->Wezindeks()=pom->Wezindeks()+1;  //z wczesniejszych warunkow wiemy,
      } //ze istnieje juz element o indeksie 0 wiec dopisujemy przed nim nowy
        //a reszta elementow ma indeks 0 1 wiekszy
      pom=NULL;
      return true;
    }

    if(ind>tail->Wezindeks()){  //dodawanie z tylu listy
      tail->wsk=pom;
      tail=pom;
      pom=NULL;
      return true;
    }
    else{  //dodawanie w srodku listy
      PojemnikWide<typ> *szukacz;
      szukacz=head;
      while(szukacz->Wezindeks()<(ind-1)){
	szukacz=szukacz->Wskaznik();
      }
      pom->wsk=szukacz->Wskaznik();
      szukacz->wsk=pom;
      while(pom->Wskaznik()!=NULL){
	pom=pom->Wskaznik();
	pom->Wezindeks()=pom->Wezindeks()+1;  
      }
      pom=NULL;
      return true;
    }
  }

  return true;
}

/*!
 *Zwraca wartość elementu o zadanym indeksie
 *
 *\param[in] ind- indeks poszukiwanego elementu
 */
template<typename typ>
typ& Lista<typ>::Wez(int ind){
   if(Czypusta()){
     cerr<<"Lista jest pusta-> Koncze program"<<endl;

     exit(3) ;
   }
   if(ind<0 || ind>tail->Wezindeks() ){
     cerr<<"Podano indeks ujemny lub przynajmniej 0 1 wiekszy niz ostatni";
     cerr<<" element listy, ktory wynosi: "<<tail->Wezindeks()<<endl;
     cerr<<"Koncze program"<<endl;
     
     exit(3) ;
   }

   PojemnikWide<typ> *szukacz;
  szukacz=head;
  while(szukacz->Wezindeks()<ind){
    szukacz=szukacz->Wskaznik();
  }
  return szukacz->Wezzmienna();
}

/*!
 *Usuwa element z Listy o zadanym indeksie i zwraca wartosc, ktora przechowywal
 *
 *\param[in] ind- indeks elementu, ktory ma zostac usuniety z listy
 */
template<typename typ>
typ Lista<typ>::Usun(int ind){
   if(Czypusta()){
     cerr<<"Nie ma co usuwac, lista jest pusta-> Zwracam przypadkowa wartosc";
     cerr<<endl;
     typ przypadkowawartosc;
     return przypadkowawartosc;
   }
   if(ind<0 || ind>tail->Wezindeks() ){
     cerr<<"Podano indeks ujemny lub przynajmniej 0 1 wiekszy niz ostatni";
     cerr<<" element listy, ktory wynosi: "<<tail->Wezindeks()<<endl;
     cerr<<"Zwracam przypadkowa wartosc"<<endl;
     typ przypadkowawartosc;
     return przypadkowawartosc;
   }

   typ wartosc;
   if(ind==0){  //usuwanie pierwszego
     wartosc=head->Wezzmienna();
     PojemnikWide<typ> *pom;
     pom=head;
     head=head->Wskaznik();
     delete pom;
     pom=NULL;

     pom=head;
     if(pom!=NULL){
       pom->Wezindeks()=pom->Wezindeks()-1;
       while(pom->Wskaznik()!=NULL){
	 pom=pom->Wskaznik();
	 pom->Wezindeks()=pom->Wezindeks()-1;
       }
       pom=NULL;
     }
     else
       tail=NULL;

     return wartosc;
   }
   else if(ind==tail->Wezindeks()){  //usuwanie ostatniego elementu
     PojemnikWide<typ> *pom;
     pom=tail;
     PojemnikWide<typ> *szukacz;
     szukacz=head;
     while(szukacz->Wezindeks()<(ind-1)){
       szukacz=szukacz->Wskaznik();
     }
     tail=szukacz;
     szukacz=NULL;
     tail->wsk=NULL; //Ostatni element na nic nie wskazuje
     wartosc=pom->Wezzmienna();
     delete pom;
     pom=NULL;
     return wartosc;
   }
   else{  //usuwanie elementu ze srodka
     PojemnikWide<typ> *szukacz1;
     szukacz1=head;
     while(szukacz1->Wezindeks()<(ind-1)){
       szukacz1=szukacz1->Wskaznik();
     }
     PojemnikWide<typ> *szukacz2;
     szukacz2=szukacz1->Wskaznik();
     wartosc=szukacz2->Wezzmienna();
     szukacz1->wsk=szukacz2->Wskaznik();

     szukacz1=szukacz2->Wskaznik();
     szukacz1->Wezindeks()=szukacz1->Wezindeks()-1;
     while(szukacz1->Wskaznik()!=NULL){
       szukacz1=szukacz1->Wskaznik();
       szukacz1->Wezindeks()=szukacz1->Wezindeks()-1;
     }
     szukacz1=NULL;
     delete szukacz2;
     szukacz2=NULL;
    
     return wartosc;
   }

   return wartosc;
}

/*!
 *Usuwa wszystkie elementy z listy
 */
template<typename typ>
void Lista<typ>::Oproznij(){
  if(!Czypusta()){
    // cout<<Rozmiar()<<endl;
    for(int i=Rozmiar();i>0;i--){
      Usun(i-1);
      //cout<<"Usunieto"<<endl;
    }
    head=NULL;
    tail=NULL;
  }
}

/*!
 *Wyswietla zawartosc listy na standardowe wyjscie
 */
template<typename typ>
void  Lista<typ>::Wyswietl(){
   if(Czypusta()){
     cerr<<"Lista jest pusta, nie ma co wyswietlac"<<endl;
   }
   else{
     PojemnikWide<typ> *pom;
     pom=head;
     cout<<"Element z indeksem "<<pom->Wezindeks()<<" przechowuje wartosc: ";
     cout<<pom->Wezzmienna()<<endl;
     for(int i=1;i<Rozmiar();i++){
       pom=pom->Wskaznik();
       cout<<"Element z indeksem "<<pom->Wezindeks()<<" przechowuje wartosc: ";
       cout<<pom->Wezzmienna()<<endl;
     }
   }

}

/*!
 *Wyszukuje podany wyraz wsrod elementow listy
 *
 *\param[in] szukane- szukany wyraz
 *
 *\retval zwraca numer indeksu elementu, ktory przechowuje szukany wyraz
 *lub -1 w przypadku jego nieznalezienia
 */
template<typename typ>
int Lista<typ>::Wyszukaj(typ szukane){
  if(Czypusta()){return -1;}

  PojemnikWide<typ> *pom;
  pom=head;
  if(pom->Wezzmienna()==szukane){return pom->Wezindeks();}
  while(pom->Wskaznik()!=NULL){
    pom=pom->Wskaznik();
    if(pom->Wezzmienna()==szukane){return pom->Wezindeks();}
  }
  return -1;
}

/*//
 *Destruktor - Usuwa wszystkie elementy z listy (na bazie metody "Oproznij")
 *//*
template<typename typ>
Lista<typ>::~Lista(){
  if(!Czypusta()){
    for(int i=Rozmiar();i>0;i--){
      Usun(i-1);
      cout<<"Usunieto"<<endl;
    }
    head=NULL;
    tail=NULL;
  }
}
   */
#endif
