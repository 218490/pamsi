#include "MSort.hh"

/*!
 *\brief Funkcja scalająca dwie "podtablice" w jedna
 *
 *Funkcja przepisuje dwie "podtablice" do jednej zapewniajac przy tym juz
 *posortowane ulozenie elementow
 *
 *\param[in] tablica-struktura przechowujaca tablice dynamiczna
 *\param[in] lewy- lewa granica pierwszej podtablicy
 *\param[in] srodek- prawa granica pierwszej podtablicy
 *\param[in] prawy- prawa granica drugiej podtablicy
 */
void MSort::Scal(Tab &tablica, int lewy, int srodek, int prawy){
  int i=lewy, j=srodek+1;
  int pom[prawy+1];
  for(int i = lewy;i<=prawy; i++) 
    pom[i] = tablica.tab[i];  

  for(int k=lewy;k<=prawy;k++) 
  if(i<=srodek)
    if(j <= prawy)
         if(pom[j]<pom[i])
             tablica.tab[k] = pom[j++];
         else
             tablica.tab[k] = pom[i++];
    else
        tablica.tab[k] = pom[i++];
  else
      tablica.tab[k] = pom[j++];
}

/*!
 *\brief Mergesort na tablicy
 *
 *\param[in] tablica-struktura przechowujaca tablice dynamiczna
 *\param[in] lewy- lewa granica sortowania (numer indeksu)
 *\param[in] prawy- prawa granica sortowania (numer indeksu)
 */
void MSort::Mergesort(Tab &tablica,int lewy,int prawy){
  if(prawy<=lewy) return; 

  int srodek = (prawy+lewy)/2;
  Mergesort(tablica,lewy,srodek); 
  Mergesort(tablica,srodek+1,prawy);

  Scal(tablica,lewy,srodek,prawy);

}

