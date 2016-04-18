#ifndef TABLICA_HH
#define TABLICA_HH

#include <iostream>
#include <cmath>
using namespace std;

/*!
 *\file
 *
 *\brief Tablica dynamiczna z metodami podporzadkowanymi pod implementacje 
 *drzewa
 */

 class Tablica{
   int *tablica=NULL;
   int rozmiar=16;
   int potega=4;

 public:
   Tablica(){tablica=new int[rozmiar];};
   ~Tablica(){delete []tablica; tablica=NULL; rozmiar=16;};

   bool Dodaj(int elem,int indeks);

   void Wyswietl(){for(int i=0;i<rozmiar;i++) cout<<tablica[i]<<" ";  };
   int WezRozmiar(){return rozmiar;};

 };

#endif
