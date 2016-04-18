#include <iostream>
#include "Kolejka.hh"
#include "Stos.hh"
#include "TablicaTest.hh"
#include "ListaTest.hh"
#include "Sortowanie.hh"

using namespace std;

int main(){
  ListaTest obiekt;
  obiekt.Przygotuj("tekst1000.txt","PoniedzialekPAMSI");
  cout<<obiekt.Testuj()<<endl;

  tabtest obiekt2;
  //ilosc,powtorzenia, opcja [(1) o 1 elem, (2) o 10 elem, (3) podwajanie]
  obiekt2.Przygotuj(1000,10,'2');
  obiekt2.Testuj();

  Sortowanie sort;
  Lista<double> lista;
  srand(time(NULL));
  for(int i=0;i<9;i++){
    lista.Dodaj(rand()%100+1,0);
    }
  lista.Wyswietl();
  sort.Babelkowe(lista);
  cout<<endl;
  lista.Wyswietl();

  lista.Oproznij();
}
