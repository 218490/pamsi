#ifndef LISTATEST_HH
#define LISTATEST_HH

#include <iostream>
#include <fstream>
#include "Lista.hh"
#include "Stoper.hh"
#include "IRunnable.hh"
using namespace std;

/*!
 *\file
 *\brief Definicja klasy odpowedzialnej za testowanie "Listy"
 *
 *Odpowiedzialna jest za wczytanie danych z pliku, zapisanie ich do listy i 
 *znalezienie pozadanego elementu
 */

class ListaTest: public Lista<string>, public Stoper, public IRunnable{
  string nazwapliku;
  string szukane;
 public:
  void Przygotuj(string pnazwapliku, string pszukane); //interface
  int Testuj(); //interface

  void Przygotuj(int pilosc,int ppowtorzenia,char popcja){}; //interface

  bool OdczytajIzapisz(string nazwapom);
 };

bool otworz_plik_odczyt(string nazwapom, fstream& StrmPlikowy);

#endif
