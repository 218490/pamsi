#include "Sortowanie.hh"

/*!
 *\file
 *\brief Definicja metod sortowania
 */

/*!
 *Dokonuje zamiany elementow w Liscie
 *
 *\param[in] lista- obiekt poddany dzialaniu
 *\param[in] i- numer indeksu elementu listy
 *\param[in] j- numer indeksu elementu listy
 */
void Sortowanie::ZamienLista(Lista<double> &lista,int i, int j){ //2 3
  if(i<j){
    double pom1=lista.Usun(i);
    double pom2=lista.Usun(j-1);
    lista.Dodaj(pom2,i);
    lista.Dodaj(pom1,j);
  }
  else if(i==j){}
  else{
    ZamienLista(lista,j,i);
  }
}

/*!
 *\brief Sortowanie babelkowe
 *
 *Metoda do sortowania elementow w liscie
 *
 *\param[in] lista-lista, ktora mamy posortowac
 */
void Sortowanie::Babelkowe(Lista<double> &lista){
  for(int i=0;i<(lista.Rozmiar()-1);i++){
    for(int j=0;j<(lista.Rozmiar()-1);j++){
      if(lista.Wez(j)>lista.Wez(j+1))
	ZamienLista(lista,j,j+1);
    }
  }
}
