#include "Kolejka.hh"

/*!
 *\file
 *\brief Definicja metod ADT- Kolejka
 */

/*!
 *Dodaje element na koncu kolejki
 *
 *\param[in] elem- zmienna do przechowania
 */
void Kolejka::Dodaj(string elem){
  if(Czypusta()){
    tail=new Pojemnik;
    tail->Zmienpole(elem);
    head=tail;
    rozmiar++;
  }
  else{
    Pojemnik *pom;
    pom=new Pojemnik;
    pom->Zmienpole(elem);
    tail->wsk=pom;
    tail=pom;
    pom=NULL;
    rozmiar++;
  }

}

/*!
 *Usuwa element z poczatku kolejki i zwraca jego wartosc
 *
 *\retval wartosc usunietego elementu
 */
string Kolejka::Usun(){
  string wartosc;
  if(Czypusta()){
    cerr<<"Kolejka pusta, nie ma co usuwac. Zwracam przypadkowa zmienna"<<endl;
  }
  else{
    Pojemnik *pom;
    pom=head;
    head=head->Wskaznik();
    wartosc=pom->Wezzmienna();
    delete pom;
    pom=NULL;
    rozmiar--;
  }
  return wartosc;
}

/*!
 *Zwraca wartosc pierwszego elementu w kolejce. Funkcja NIE sluzy do 
 *modyfikowania wartosci tego elementu
 *
 */
string Kolejka::Wez(){
  string wartosc;
  if(Czypusta()){
    cerr<<"Kolejka pusta. Zwracam przypadkowa zmienna"<<endl;
  }
  else{
    wartosc=head->Wezzmienna();
  }
  return wartosc;
}

/*!
 *Usuwa wszystkie elementy kolejki
 */
void Kolejka::Oproznij(){
  if(!Czypusta()){
    for(int i=0;i<Rozmiar();i++){
      Usun();
    }
    head=NULL;
    tail=NULL;
  }
}

/*!
 *Wyswietla wszystkie elementy kolejki od pierwszego do ostatniego
 */
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
