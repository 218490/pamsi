#include "TablicaHash.hh"

/*!
 *\file
 *\brief Implementacja metod tablicy hashujacej
 */

/*!
 *\brief Destruktor
 *
 *Usuwa wszystkie elementy tablicy
 */
TablicaHash::~TablicaHash(){
  for(int i=0;i<rozmiar;i++){
    tablica[i].Oproznij();
  }
  delete []tablica; 
  tablica=NULL;
  rozmiar=0;
}

/*!
 *Mapuje klucz typu string na integer w stalym przedziale [0,rozmiartablicy-1]
 *
 *\param[in] nazwa-klucz do mapowania
 *
 *\retval indeks tablicy, do ktorej maja byc zapisane dane
 */
int TablicaHash::Haszuj(string nazwa){
  const char *Cpom=nazwa.c_str();
  long int liczba=0;
  for(unsigned int i=0;i<nazwa.size();i++)
    liczba=liczba+(Cpom[i]*pow(10,i));
  return  liczba=liczba%rozmiar;
}

/*!
 *Funkcja dodajaca zestaw danych do tablicy haszujacej
 *
 *\param[in] klucz-na jego podstawie funkcja dobiera indeks tablicy gdzie maja
 *byc zapisane dane
 *\param[in] numer- jedna z dwoch danych do przechowania
 *
 *\retval true-jesli dodawanie do tablicy powiodlo sie
 */
bool TablicaHash::Dodaj(string klucz, int numer){
  Rekord rek(klucz,numer);
  return tablica[Haszuj(klucz)].Dodaj(rek,0);
}

/*!
 *Usuwa element z tablicy Haszujacej o danym kluczu i zwraca numer powiazany z 
 *tym kluczem
 *
 *\param[in] klucz- element o takim kluczu zostanie usuniety
 *
 *\retval Numer powiazany z kluczem, ktory zostanie razem z nim usuniety lub
 *-1 gdy element o podanym kluczu nie istnieje
 */
int TablicaHash::Usun(string klucz){
  Rekord rekpom(klucz);
  int indeksHash=Haszuj(klucz);
  int indeksListy=tablica[indeksHash].Wyszukaj(rekpom);
  if( indeksListy == -1 )
    return -1;
  else{
    int zwracana=tablica[indeksHash].Wez(indeksListy).WezNumer();
    tablica[indeksHash].Usun(indeksListy); 
    return zwracana;
  }
}

/*!
 *Wyswietla na standardowe wyjscie zwartosc tablicy haszujacej
 */
void TablicaHash::Wyswietl(){
  for(int i=0;i<rozmiar;i++){
    cout<<"Lista numer "<<i<<endl;
    tablica[i].Wyswietl();
    cout<<endl;
  }
}
