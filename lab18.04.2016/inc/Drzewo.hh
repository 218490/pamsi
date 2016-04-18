#ifndef DRZEWO_HH
#define DRZEWO_HH

#include <iostream>
#include "Tablica.hh"
using namespace std;

 class Drzewo{
   Tablica tablica; //klasa "Tablica" zostala stworzona na potrzeby drzewa

 public:
   bool Dodaj(int element);
   int Odczytaj(int szukane);

 };

#endif
