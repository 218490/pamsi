#include "QSort.hh"

/*!
 *\brief QuickSort na tablicy (pivot srodkowym elementem tablicy)
 *
 *\param[in] tablica-struktura przechowujaca tablice dynamiczna
 *\param[in] lewy- lewa granica sortowania (numer indeksu)
 *\param[in] prawy- prawa granica sortowania (numer indeksu)
 */
void QSort::Quicksort(Tab &tablica,int lewy,int prawy){
  int pivot=tablica.tab[(lewy+prawy)/2];
  int i,j,x;
  i=lewy;
  j=prawy;
  do{
    while(tablica.tab[i]<pivot) i++;
    while(tablica.tab[j]>pivot) j--;
    if(i<=j){
      x=tablica.tab[i];
      tablica.tab[i]=tablica.tab[j];
      tablica.tab[j]=x;
      i++; j--;
    }
  }while(i<=j);

  if(j>lewy) Quicksort(tablica,lewy,j);
  if(i<prawy) Quicksort(tablica,i,prawy);

}

/*!
 *\brief QuickSort na tablicy (pivot pierwszym elementem tablicy)
 *
 *\param[in] tablica-struktura przechowujaca tablice dynamiczna
 *\param[in] lewy- lewa granica sortowania (numer indeksu)
 *\param[in] prawy- prawa granica sortowania (numer indeksu)
 */
void QSort::QuicksortLewy(Tab &tablica,int lewy,int prawy){
  int pivot=tablica.tab[lewy];
  int i,j,x;
  i=lewy;
  j=prawy;
  do{
    while(tablica.tab[i]<pivot) i++;
    while(tablica.tab[j]>pivot) j--;
    if(i<=j){
      x=tablica.tab[i];
      tablica.tab[i]=tablica.tab[j];
      tablica.tab[j]=x;
      i++; j--;
    }
  }while(i<=j);

  if(j>lewy) QuicksortLewy(tablica,lewy,j);
  if(i<prawy) QuicksortLewy(tablica,i,prawy);

}

/*!
 *\brief pomocnicza funkcja dla nieuzywanej przy testowaniu funkcji
 *"QuicksortPesym
 *
 *Znajduje maksymalna wartosc w tablicy i zwraca indeks
 */
int QSort::Maksimum(Tab &tablica,int lewy,int prawy){
  int szukane=lewy;
  int max=tablica.tab[lewy];
  for(int i=lewy;i<=prawy;i++){
    if(tablica.tab[i]>max) szukane=i;
  }
  return szukane;
}

/*!
 *\brief QuickSort na tablicy (nieuzywane przy testowaniu)
 *
 *Sztucznie wytworzony przypadek pesymistyczny dla dowolnego zestawu danych
 *elementem rozdzielającym za każdym razem okazuje się element podtablicy T o
 *skrajnej wartości (maksymalnej lub minimalnej)
 *UWAGA: pomiar czasu dodatkowo obciazony jest funkcja "Maksimum"
 *
 *\param[in] tablica-struktura przechowujaca tablice dynamiczna
 *\param[in] lewy- lewa granica sortowania (numer indeksu)
 *\param[in] prawy- prawa granica sortowania (numer indeksu)
 */
void QSort::QuicksortPesym(Tab &tablica,int lewy,int prawy){
  int pind=Maksimum(tablica,lewy,prawy);
  int pivot=tablica.tab[pind];
  int i,j,x;
  i=lewy;
  j=prawy;
  do{
    while(tablica.tab[i]<pivot) i++;
    while(tablica.tab[j]>pivot) j--;
    if(i<=j){
      x=tablica.tab[i];
      tablica.tab[i]=tablica.tab[j];
      tablica.tab[j]=x;
      i++; j--;
    }
  }while(i<=j);

  if(j>lewy) QuicksortPesym(tablica,lewy,j);
  if(i<prawy) QuicksortPesym(tablica,i,prawy);

}
