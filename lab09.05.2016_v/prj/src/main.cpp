#include <iostream>
#include "Graf.hh"
#include "BandB.hh"
#include "GrafTest.hh"

using namespace std;


int main(){
  GrafTest obiekt;
  obiekt.Przygotuj("wytyczne.dat","nazwy.txt");
  obiekt.TestujBandB();

  /*
  graf.DodajW("A");
  graf.DodajW("B");
  graf.DodajW("C");
  graf.DodajW("D");
  graf.DodajW("E");
  graf.DodajW("G");
  graf.DodajW("S");
  graf.DodajK("S","B",5);
  graf.DodajK("A","B",4);
  graf.DodajK("S","A",3);
  graf.DodajK("A","D",3);
  graf.DodajK("E","C",6);
  graf.DodajK("C","B",4);
  graf.DodajK("D","G",5);

  int sciezki=BandB(graf,"S","G");
  cout<<endl<<"ilosc rozwinietych sciezek: "<<sciezki<<endl;
  */
  /*
  KolejkaPriorytet kolej;
  Polaczenie pom;
  pom.WezSuma()=5;
  pom.WezPozycja()="A";
  pom.WezHistoria()=pom.WezHistoria()+"A";
  kolej.Dodaj(pom);

  pom.WezSuma()=pom.WezSuma()+10;
  pom.WezPozycja()="B";
  pom.WezHistoria()=pom.WezHistoria()+"=>B";
  kolej.Dodaj(pom);

  pom.WezSuma()=1;
  pom.WezPozycja()="C";
  pom.WezHistoria()=pom.WezHistoria()+"=>C";
  kolej.Dodaj(pom);

  pom=kolej.Usun();
    cout<<pom.WezPozycja()<<pom.WezSuma()<<pom.WezHistoria()<<endl;
  pom=kolej.Usun();
    cout<<pom.WezPozycja()<<pom.WezSuma()<<pom.WezHistoria()<<endl;
  pom=kolej.Wez();
    cout<<pom.WezPozycja()<<pom.WezSuma()<<pom.WezHistoria()<<endl;
*/
  /*
  Stos stos;
  Krawedz K("a",20);
  Krawedz X=K;

  stos.Dodaj(K);
  stos.Dodaj(X);
  stos.Wyswietl();

  cout<<stos.Wez().WezWaga()<<endl;
  cout<<stos.Wez().WezSasiad()<<endl;
*/
  /*
  Graf graf;
  TablicaAsoc tab(1000);
  tab.Dodaj("ala");

  
  graf.DodajW("A");
  graf.DodajW("B");
  graf.DodajW("C");
  graf.DodajK("A","B",20);
  graf.DodajK("A","C",30);
  graf.DodajK("C","B",40);

  //graf.UsunK("C","B");
  graf.UsunW("A");
  graf.Wyswietl();
  if(tab.Wyszukaj("ala"))
    cout<<"Znalazl"<<endl;
  else
    cout<<"Brak"<<endl;
  */
  /* TablicaW obiekt;
  Wierzcholek W1("A"),W2("B"),W3("C");
  W1.DodajKrawedz("B");
  W1.DodajKrawedz("C");
  W2.DodajKrawedz("A");
  W3.DodajKrawedz("A");

  obiekt.DodajW(W1);
  obiekt.DodajW(W2);
  obiekt.DodajW(W3);
*/
  /*
  GrafTest obiekt;

  obiekt.Przygotuj("wytyczne.dat");
  obiekt.TestujBFS();
  */

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


/*

obj/IGraf.o: inc/IGraf.hh src/IGraf.cpp
	g++ -c ${CXXFLAGS} -o obj/IGraf.o src/IGraf.cpp

obj/Graf.o: inc/Graf.hh src/Graf.cpp
	g++ -c ${CXXFLAGS} -o obj/Graf.o src/Graf.cpp

obj/Stos.o: inc/Stos.hh src/Stos.cpp
	g++ -c ${CXXFLAGS} -o obj/Stos.o src/Stos.cpp

obj/IGraf.o: inc/IGraf.hh src/IGraf.cpp
	g++ -c ${CXXFLAGS} -o obj/IGraf.o src/IGraf.cpp

obj/IRunnable.o: inc/IRunnable.hh src/IRunnable.cpp
	g++ -c ${CXXFLAGS} -o obj/IRunnable.o src/IRunnable.cpp



obj/GrafTest.o: inc/GrafTest.hh src/GrafTest.cpp
	g++ -c ${CXXFLAGS} -o obj/GrafTest.o src/GrafTest.cpp
 */
