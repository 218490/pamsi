#ifndef POJEMNIK_HH
#define POJEMNIK_HH

#include <iostream>
using namespace std;

/*!
 *\file
 *
 *\brief
 *Implementacja pojedynczego elementu drzewa
 */

 class Pojemnik{
   int wartosc=0;
   string kolor="R";  //R-czerwony

 public:
   Pojemnik *ojciec=NULL;
   Pojemnik *lewy=NULL;
   Pojemnik *prawy=NULL;

   int& WezWartosc(){return wartosc;};
   string& WezKolor(){return kolor;};
   Pojemnik* Ojciec(){return ojciec;};
   Pojemnik* Lewy(){return lewy;};
   Pojemnik* Prawy(){return prawy;};

 };

#endif
