#include "TablicaAsocTest.hh"

/*!
 *\file
 *\brief Definicja metod zwiazanych z "TablicaAsocTest"
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
    cerr << ":(  Operacja otwarcia do odczytu \"" << Cnazwapom << "\"" << endl
	 << ":(  nie powiodla sie." << endl;
    return false;
  }
  return true;
}

/*!
 *\brief Testuje dodawanie i usuwanie elementow z tablicy asocjacyjnej
 *
 *Wczytuje z pliku dane (klucz i numer) (nazwa pliku jest podana jako argument
 *funkcji) i zapisuje je do tablicy asocjacyjnej, mierzy czas tej operacji, a 
 *nastepnie usuwa zapisane dane z tablicy i rowniez mierzy czas wykonywania 
 *tej operacji.
 *Ilosc danych jaka ma byc wczytana i zapisana do tablicy asocjacyjnej jest
 *przechowywana w pomocniczej, zwyklej tablicy "rozmiar".Tablica "rozmiar" jest
 *wypelniana pomocnicza funkcja "PrzypiszLiczby"
 *
 *\param[in] nazwapom- nazwa pliku ktory przechowuje dane do wczytywania
 *
 *\retval true- jesli operacja testowania powiodla sie
 */
bool TablicaAsocTest::Testuj(string nazwapom){
  int rozmiar[32];
  PrzypiszLiczby(rozmiar);
  Stoper zegar;
  fstream strumien;

  for(int i=0;i<32;i++){
    TablicaAsoc tablica(100);
    string wyraz;
    int numer;

    int ilosc=0;
    if(!otworz_plik_odczyt(nazwapom,strumien)){return false;}
    zegar.start();
    while(!strumien.eof() && ilosc<rozmiar[i]){
      strumien>>wyraz;
      strumien>>numer;
      tablica.Dodaj(wyraz,numer);
      ilosc++;
    }
    zegar.stop();
    zegar.zapis_do_pliku();
    strumien.close();

    ilosc=0;
    if(!otworz_plik_odczyt(nazwapom,strumien)){return false;}
    zegar.start();
    while(!strumien.eof() && ilosc<rozmiar[i]){
      strumien>>wyraz;
      strumien>>numer;
      tablica.Usun(wyraz);
      ilosc++;
    }
    zegar.stop();
    zegar.zapis_do_pliku();
    strumien.close();
  }

  return true;
}

/*!
 *Funkcja pomocnicza wypelniajaca tablice ktora przechowuje dane o ilosci liczb
 *, ktore maja byc dodane i usuniete do tablicy asocjacyjnej
 */
void PrzypiszLiczby(int rozmiar[]){
  rozmiar[0]=10;
  rozmiar[1]=100;
  rozmiar[2]=500;
  rozmiar[3]=1000;
  for(int i=4;i<13;i++){
    rozmiar[i]=rozmiar[i-1]+1000;
  }

  for(int i=13;i<31;i++){
    rozmiar[i]=rozmiar[i-1]+5000;
  }
   rozmiar[31]=1000000;
}