#include "ListaTest.hh"

/*!
 *\file
 *\brief Definicja metod zwiazanych z "ListaTest"
 */

/*!
 *\brief otwarcie pliku
 *
 *Otwiera plik i tworzy strumien do odczytu
 *
 *\param[in] nazwapom- nazwa pliku, ktory ma zostac otwarty
 *\param[in] StrmPlikowy- Zapisywany jest w nim strumien skad bedziemy
 * odczytywac dane
 */
bool otworz_plik_odczyt(string nazwapom, fstream& StrmPlikowy){
  const char* Cnazwapom;
  Cnazwapom=nazwapom.c_str();

  StrmPlikowy.open(Cnazwapom,ios::in);
  if (!StrmPlikowy.is_open())  {
    cerr << ":(  Operacja otwarcia do zapisu \"" << Cnazwapom << "\"" << endl
	 << ":(  nie powiodla sie." << endl;
    return false;
  }
  return true;
}

/*!
 *Funkcja odpowiedzialna za odczytanie danych z pliku i zapisanie ich w liscie
 *
 *\param[in] nazwapom- nazwa pliku, skad mamy odczytywac tekst
 */
bool ListaTest::OdczytajIzapisz(string nazwapom){
  fstream strumien;
  int licznik=0;
  if(!otworz_plik_odczyt(nazwapom,strumien)){return false;}

  while(!strumien.eof()){
    string wyraz;
    strumien>>wyraz;
    Dodaj(wyraz,licznik);
    licznik++;
  }
  strumien.close();
  return true;

}

/*!
 *Wczytuje dane z pliku, zapisuje do listy, mierzy czas wyszukiwania elementu
 *i dopisuje go do pliku "czasy.dat"
 *
 *\param[in] nazwapliku- nazwa pliku z tekstem do zapisania
 *\param[in] szukane- szukane slowo
 *
 *\retval numer indeksu pod jakim znajdziemy szukane slowo w liscie lub -1 gdy
 *slowo nie wystepuje w tekscie
 */
int ListaTest::Testuj(string nazwapliku,string szukane){
  OdczytajIzapisz(nazwapliku);
  start();
  int indeks=Wyszukaj(szukane);
  stop();
  zapis_do_pliku(); //czas
  Oproznij();
  return indeks;
}
