#ifndef LISTATEST_HH
#define LISTATEST_HH

#include <iostream>
#include <fstream>
#include "Lista.hh"
#include "Stoper.hh"
using namespace std;

/*!
 *\file
 *\brief Definicja klasy odpowedzialnej za testowanie "Listy"
 *
 *Odpowiedzialna jest za wczytanie danych z pliku, zapisanie ich do listy i 
 *znalezienie pozadanego elementu
 */

class ListaTest: public Lista, public Stoper{

 public:
  bool OdczytajIzapisz(string nazwapom);
  int Testuj(string nazwapliku,string szukane);

 };

bool otworz_plik_odczyt(string nazwapom, fstream& StrmPlikowy);

#endif
