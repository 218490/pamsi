#include "Sortowanie.hh"

/*!
 *\file
 *\brief Definicja metod sortowania
 */


/*!
 *Metoda na potrzeby szybkiego przetestowania na zajeciach czy algorytm dziala
 */
void Sortowanie::Zamien(int &pom1,int &pom2){
  int pom;
  pom=pom1;
  pom1=pom2;
  pom2=pom;
}


/*!
 *\brief Sortowanie babelkowe - praca na zajeciach
 */
void Sortowanie::Babelkowe(){
  for(int i=0;i<(ROZMIAR-1);i++){
    for(int j=0;j<(ROZMIAR-1);j++){
      if(tablica[j]>tablica[j+1])
	Zamien(tablica[j], tablica[j+1]);
    }
  }
}

/*!
 *Dokonuje zamiany elementow w Liscie
 *
 *\param[in] lista- obiekt poddany dzialaniu
 *\param[in] i- numer indeksu elementu listy
 *\param[in] j- numer indeksu elementu listy
 */
/*
void Sortowanie::ZamienLista(Lista &lista,int i, int j){ //2 3
  string pom1=lista.Usun(i);
  lista.Dodaj(Usun(i),i);
  lista.Dodaj(pom,j);
}
*/
