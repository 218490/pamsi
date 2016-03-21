#include "Tablica.hh"

void tabdyn::zainicjalizuj(){
  rozmiar=10;
  tablica=new int[rozmiar];
  for(int i=0;i<(rozmiar-1);i++){
    tablica[i]=2*i+1;
}
  licznik=1;
}

/*!
 *W przypadku zapelnienia tablicy dynamicznej zwieksza jej rozmiar o jeden 
 *(element typu int)
 */
void tabdyn::dodaj_liczby(int pom){
  if(licznik>0){
    tablica[rozmiar-licznik]=pom;
    licznik--;
}
  else{
    int *tabpom=NULL;
    tabpom=new int[rozmiar];
    for(int i=0;i<rozmiar;i++){
      tabpom[i]=tablica[i];
    }
    usun();
    tablica=new int[rozmiar+1];
    for(int i=0;i<rozmiar;i++){
      tablica[i]=tabpom[i];
    }
    if(tabpom!=NULL) delete []tabpom;
    rozmiar++;
    tablica[rozmiar-1]=pom;
  }
}

/*!
 *Funkcja rozni sie od "dodaj_liczby" sposobem zmieniania rozmiaru tablicy.
 *W przypadku zapelnienia tablicy dynamicznej, funkcja alokuje nowa, dwa razy 
 *wieksza
 *
 */
void tabdyn::dodaj_liczby_dwa(int pom){
  if(licznik>0){
    tablica[rozmiar-licznik]=pom;
    licznik--;
}
  else{
    int *tabpom=NULL;
    tabpom=new int[rozmiar];
    for(int i=0;i<rozmiar;i++){
      tabpom[i]=tablica[i];
    }
    usun();
    tablica=new int[2*rozmiar];
    for(int i=0;i<rozmiar;i++){
      tablica[i]=tabpom[i];
    }
    delete []tabpom;
    licznik=rozmiar;
    rozmiar=2*rozmiar;
    tablica[rozmiar-licznik]=pom;
    licznik--;
  }
}


/*!
 *Gdy zabraknie miejsca w tablicy na nowy element, funkcja zwieksza ja o 10
 *(elementow typu int)
 */
void tabdyn::dodaj_liczby_dek(int pom){
  if(licznik>0){
    tablica[rozmiar-licznik]=pom;
    licznik--;
}
  else{
    int *tabpom=NULL;
    tabpom=new int[rozmiar];
    for(int i=0;i<rozmiar;i++){
      tabpom[i]=tablica[i];
    }
    usun();
    tablica=new int[rozmiar+10];
    for(int i=0;i<rozmiar;i++){
      tablica[i]=tabpom[i];
    }
    delete []tabpom;
    licznik=10;
    rozmiar=rozmiar+10;
    tablica[rozmiar-licznik]=pom;
    licznik--;
  }
}