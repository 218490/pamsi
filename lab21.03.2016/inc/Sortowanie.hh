#ifndef SORTOWANIE_HH
#define SORTOWANIE_HH

#include <iostream>
using namespace std;

#define ROZMIAR 10

/*!
 *\file
 *\brief Zawiera metody sortujace
 */

class Sortowanie{
  int tablica[ROZMIAR]={2,89,6,7,15,78,46,8,13,5};  //chwilowo, na potrzeby pracy na lekcji
public:
  void Zamien(int &pom1,int &pom2);
  void Babelkowe();
  void Wyswietl(){for(int i=0;i<ROZMIAR;i++) cout<<tablica[i]<<endl;};

  //void ZamienLista(Lista &lista,int i, int j);
};

#endif
