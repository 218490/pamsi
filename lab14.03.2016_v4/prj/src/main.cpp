#include <iostream>
#include "Tablica.hh"
#include "IRunnable.hh"
#include "Stoper.hh"
#include "Lista.hh"
#include "Kolejka.hh"
#include "Stos.hh"

using namespace std;

int main(){
  IRunnable obiekt;
  obiekt.przygotuj_szukajlista("tekst10.txt","10");
  cout<<obiekt.run_szukajlista()<<endl;
  obiekt.przygotuj_szukajlista("tekst100.txt","PoniedzialekPAMSI");
  cout<<obiekt.run_szukajlista()<<endl;
  obiekt.przygotuj_szukajlista("tekst1000.txt","PoniedzialekPAMSI");
  cout<<obiekt.run_szukajlista()<<endl;
  obiekt.przygotuj_szukajlista("tekst10_5.txt","PoniedzialekPAMSI");
  cout<<obiekt.run_szukajlista()<<endl;
  obiekt.przygotuj_szukajlista("tekst10_6.txt","PoniedzialekPAMSI");
  cout<<obiekt.run_szukajlista()<<endl;

}




/*
int main(){
  IRunnable tablicadynamiczna;
  //ilosc,powtorzenia, opcja [(1) o 1 elem, (2) o 10 elem, (3) podwajanie]
  tablicadynamiczna.przygotuj(1000,10,'2');
  tablicadynamiczna.run();
}
*/
