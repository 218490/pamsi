#include <iostream>
#include "Tablica.hh"
#include "IRunnable.hh"
#include "Stoper.hh"
#include "Lista.hh"
#include "Kolejka.hh"
#include "Stos.hh"
#include "Sortowanie.hh"

using namespace std;

int main(){
  Sortowanie obiekt;
  obiekt.Wyswietl();
  cout<<endl;
  obiekt.Babelkowe();
  obiekt.Wyswietl();

}




/*
int main(){
  IRunnable tablicadynamiczna;
  //ilosc,powtorzenia, opcja [(1) o 1 elem, (2) o 10 elem, (3) podwajanie]
  tablicadynamiczna.przygotuj(1000,10,'2');
  tablicadynamiczna.run();
}
*/
