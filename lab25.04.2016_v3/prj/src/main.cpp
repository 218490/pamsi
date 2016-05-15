#include <iostream>
#include "Graf.hh"
#include "DFS.hh"
#include "GrafTest.hh"

using namespace std;


int main(){
  GrafTest obiekt;

  obiekt.Przygotuj("wytyczne.dat");
  obiekt.TestujBFS();


  /*
  for(int i=1;i<8;i++){
    graf.DodajW(i);
  }

  graf.DodajK(1,2);
  graf.DodajK(2,4);
  graf.DodajK(2,5);
  graf.DodajK(5,4);
  graf.DodajK(1,3);
  graf.DodajK(3,4);
  graf.DodajK(3,6);
  graf.DodajK(1,4);
  graf.DodajK(1,7);
  cout<<"------------------------------------"<<endl;
  cout<<"Ilosc przeszukanych wierzcholkow: "<<DFS(graf)<<endl;
  */

  /*
  graf.DodajW(1);
  graf.DodajW(2);
  graf.DodajK(1,2);
  graf.DodajW(3);
  graf.DodajK(3,1);
  graf.Wyswietl();
  cout<<"------------------------------------"<<endl;
  cout<<"Ilosc przeszukanych wierzcholkow: "<<DFS(graf)<<endl;
  cout<<"Hello"<<endl;
*/
  /*
  cout<<"------------------------------------"<<endl;
  graf.UsunW(1);
  graf.Wyswietl();
    */
/*
  cout<<"------------------------------------"<<endl;
  graf.UsunK(2,1);
  graf.Wyswietl();
		  */
  //  graf.DodajK(2,1);
  //  graf.DodajW(3);
}


