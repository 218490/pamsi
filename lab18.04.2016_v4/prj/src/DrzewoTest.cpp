#include "DrzewoTest.hh"

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
 *Odczytuje jaka ilosc elementow ma byc zapisana w drzewie i zapisuje 
 *odczytane wartosci na liscie. Wartosci odczytywae sa z pliku.
 *Przykladowa zawartosc pliku: 10 100 1000
 *
 *\param[in] nazwapliku- nazwa pliku, w ktorum przechowywane sa dane na temat
 *ilosci liczb do zapisania w drzewie 
 */
bool DrzewoTest::Przygotuj(string nazwapliku){
  fstream strumien;
  int ilosc;
  int i=0;
  if(!otworz_plik_odczyt(nazwapliku,strumien))
    return false;
  while(!strumien.eof()){
    strumien>>ilosc;
    lista.Dodaj(ilosc,i);
    i++;
  }
  strumien.close();
  return true;
}

/*!
 *Zapisuje odpowiednia ilosc elementow w drzewie (odpowiednia-przechowywana
 *na liscie), wyszukuje podana wartosc w drzewie, mierzy czas przeszukiwania
 *i zapisuje go do pliku "czasy.dat"
 */
void DrzewoTest::Testuj(){
  srand(time(NULL));
  int pom,ilosc;
  Pojemnik *znalezione;
  Stoper zegar;

  for(int j=0;j<lista.Rozmiar()-1;j++){
    Drzewo choinka;
    ilosc=lista.Wez(j);
    for(int i=0;i<ilosc;i++){
      pom=rand()%ilosc+1;
      choinka.Dodaj(pom);
    }
    // pom=rand()%ilosc+1;
    pom=111000111;
    cout<<"Szukam liczby: "<<pom<<endl;

    zegar.start();
    znalezione=choinka.Wyszukaj(pom);
    zegar.stop();

    zegar.zapis_do_pliku();
    if(znalezione==NULL)
      cout<<"Nie ma takiego elementu w drzewie"<<endl<<endl;
    else
      cout<<"Znalazlem: "<<znalezione->WezWartosc()<<endl<<endl;
    znalezione=NULL;
  }

}

