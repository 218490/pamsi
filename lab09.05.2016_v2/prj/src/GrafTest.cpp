#include "GrafTest.hh"

/*!
 *\file
 *\brief Definicja metod zwiazanych z "GrafTest"
 */

/*!
 *\brief otwarcie pliku
 *
 *Otwiera plik i tworzy strumien do dopisywania
 *
 *\param[in] nazwapom- nazwa pliku, ktory ma zostac otwarty
 *\param[in] StrmPlikowy- Zapisywany jest w nim strumien gdzie mozemy
 * dopisywac dane
 */
bool otworz_plik_zapis(string nazwapom, ofstream& StrmPlikowy){
  const char* Cnazwapom;
  Cnazwapom=nazwapom.c_str();

  StrmPlikowy.open(Cnazwapom,ios::app);
  if (!StrmPlikowy.is_open())  {
    cerr << ":(  Operacja otwarcia do odczytu \"" << Cnazwapom << "\"" << endl
	 << ":(  nie powiodla sie." << endl;
    return false;
  }
  return true;
}

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
 *Odczytuje jaka ilosc wierzcholkow ma byc zapisana w grafie i skladuje 
 *odczytane wartosci na liscie. Wartosci odczytywane sa z pliku.
 *Przykladowa zawartosc pliku: 10 100 1000. Metoda zapisuje takze nazwe pliku
 *,ktory zawiera nazwy wierzcholkow
 *
 *\param[in] NazwaPlikuWytyczne nazwa pliku, w ktorum przechowywane sa dane na
 *temat ilosci wierzcholkow do zapisania w grafie
 *\param[in] pNazwaPlikuDane nazwa pliku, ktory przechowuje nazwy wierzcholkow
 */
bool GrafTest::Przygotuj(string NazwaPlikuWytyczne,string pNazwaPlikuDane){
  NazwaPlikuDane=pNazwaPlikuDane;
  fstream strumien;
  int ilosc;
  if(!otworz_plik_odczyt(NazwaPlikuWytyczne,strumien))
    return false;
  while(!strumien.eof()){
    strumien>>ilosc;
    wytyczne.Dodaj(ilosc,0);
  }
  wytyczne.Usun(0);
  strumien.close();
  return true;
}

/*!
 *\brief Testowanie algorytmu BandB
 *
 *Zapisuje odpowiednia ilosc elementow w grafie (odpowiednia-przechowywana
 *w liscie "wytyczne". Krawedzi jest 2x wiecej niz wierzcholkow, aby zwiekszyc
 *prawdopodobienstwo spojnosci grafu), wywoluje algorytm BandB dla stworzonego 
 *grafu, mierzy czas jego dzialania i zapisuje go do pliku "czasy.dat". Zapisuje
 *takze w pliku "krawedzie.dat" ilosc rozwinietych krawedzi przez algorytm 
 *BandB przy szukaniu najkrotszej drogi. Nazwy wierzcholkow grafu zczytywane 
 *sa z pliku o wczesniej zapisanej nazwie
 */
void GrafTest::TestujBandB(){
  srand(time(NULL));
  int ilosc,pom,pom2,waga,rozwiniete=0;
  string pozycja;
  Stoper zegar;
  fstream strumien;
  ofstream Zstrumien;

  //cout<<wytyczne.Rozmiar()<<endl<<wytyczne.Wez(1)<<endl;
  for(int i=wytyczne.Rozmiar();i>0;i--){
    Graf graf;
    ilosc=wytyczne.Usun(i-1);
    if(!otworz_plik_odczyt(NazwaPlikuDane,strumien)){return;}

    for(int i=0;i<ilosc;i++){
      strumien>>pozycja;
      graf.DodajW(pozycja);
    }
    strumien.close();
    
    for(int i=0;i<(2*ilosc);i++){
      pom=rand()%ilosc;
      pom2=rand()%ilosc;
      waga=rand()%1000+1;
      while(pom==pom2){
	pom2=rand()%ilosc;}
      //  cout<<graf.WezW(pom).Pozycja()<<"   "<<graf.WezW(pom2).Pozycja();
      // cout<<" ========= "<<pom<<"  "<<pom2<<endl;
      graf.DodajK(graf.WezW(pom).Pozycja(),graf.WezW(pom2).Pozycja(),waga);
    }

    zegar.start();
    rozwiniete=BandB(graf,"start","stop");
    zegar.stop();
    zegar.zapis_do_pliku();
    if(!otworz_plik_zapis("Krawedzie.dat",Zstrumien)){return;}
    Zstrumien<<rozwiniete<<endl;
    Zstrumien.close();
  }

}
