#include "Stos.hh"

/*!
 *\file
 *\brief Definicja metod interface'u ADT- Stos
 */

/*!
 *"Kladzie" element na Stos
 *
 *\param[in] elem- zmienna do przechowania
 */
void Stos::Dodaj(double elem){
  if(Czypusty()){
    head=new Pojemnik;
    head->Zmienpole(elem);
    rozmiar++;
  }
  else{
    Pojemnik *pom;
    pom= new Pojemnik;
    pom->Zmienpole(elem);
    pom->wsk=head;
    head=pom;
    pom=NULL;
    rozmiar++;
  }
}

/*!
 *Usuwa element ze stosu
 *
 *\retval wartosc usunietego elementu
 */
double Stos::ZwrocIusun(){
  double wartosc;
  if(Czypusty()){
    cerr<<"Stos pusty, nie ma co usuwac. Zwracam przypadkowa zmienna"<<endl;
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
 *Zwraca wartosc elementu stosu, ktory jest "na wierzchu". Funkcja NIE sluzy do 
 *modyfikowania wartosci tego elementu
 *
 */
double Stos::Wez(){
  double wartosc;
  if(Czypusty()){
    cerr<<"Stos pusty. Zwracam przypadkowa zmienna"<<endl;
  }
  else{
    wartosc=head->Wezzmienna();
  }
  return wartosc;
}

/*!
 *Usuwa wszystkie elementy stosu
 */
void Stos::Oproznij(){
  if(!Czypusty()){
    for(int i=0;i<Rozmiar();i++){
      ZwrocIusun();
    }
  }
}

/*!
 *Wyswietla wszystkie elementy stosu od "wierzcholka" do dolu
 */
void Stos::Wyswietl(){
  if(Czypusty()){
    cerr<<"Stos pusty. Nie ma czego wyswietlac"<<endl;
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
