#include "GrafTest.hh"

/*!
 *\file
 *\brief Definicja metod zwiazanych z "GrafTest"
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
 *Odczytuje jaka ilosc wierzcholkow ma byc zapisana w grafie i skladuje 
 *odczytane wartosci na stosie. Wartosci odczytywane sa z pliku.
 *Przykladowa zawartosc pliku: 10 100 1000
 *
 *\param[in] nazwapliku- nazwa pliku, w ktorum przechowywane sa dane na temat
 *ilosci wierzcholkow do zapisania w grafie
 */
bool GrafTest::Przygotuj(string nazwapliku){
  fstream strumien;
  int ilosc;
  if(!otworz_plik_odczyt(nazwapliku,strumien))
    return false;
  while(!strumien.eof()){
    strumien>>ilosc;
    wytyczne.Dodaj(ilosc);
  }
  //wytyczne.Usun();
  strumien.close();
  return true;
}

/*!
 *\brief Testowanie algorytmu DFS
 *
 *Zapisuje odpowiednia ilosc elementow w grafie (odpowiednia-przechowywana
 *w kolejce "wytyczne". Krawedzi jest 2x wiecej niz wierzcholkow, aby zwiekszyc
 *prawdopodobienstwo spojnosci grafu), wywoluje algorytm DFS dla stworzonego 
 *grafu, mierzy czas jego dzialania i zapisuje go do pliku "czasy.dat"
 */
void GrafTest::TestujDFS(){
  srand(time(NULL));
  int pom,pom2,ilosc,znalezione;
  Stoper zegar;

  while(!wytyczne.Czypusta()){
    Graf graf;
    ilosc=wytyczne.Usun();
    for(int i=0;i<ilosc;i++)
      graf.DodajW(i);

    for(int i=0;i<(2*ilosc);i++){
      pom=rand()%ilosc;
      pom2=rand()%ilosc;
      while(pom==pom2){
	pom2=rand()%ilosc;}
      graf.DodajK(pom,pom2);
    }

    zegar.start();
    znalezione=DFS(graf);
    zegar.stop();

    zegar.zapis_do_pliku();
    cout<<"Przeszedlem przez "<<znalezione<<" wierzcholkow"<<endl;
  }

}

/*!
 *\brief Testowanie algorytmu BFS
 *
 *Zapisuje odpowiednia ilosc elementow w grafie (odpowiednia-przechowywana
 *w kolejce "wytyczne". Krawedzi jest 2x wiecej niz wierzcholkow, aby zwiekszyc
 *prawdopodobienstwo spojnosci grafu), wywoluje algorytm BFS dla stworzonego 
 *grafu, mierzy czas jego dzialania i zapisuje go do pliku "czasy.dat"
 */
void GrafTest::TestujBFS(){
  srand(time(NULL));
  int pom,pom2,ilosc,znalezione;
  Stoper zegar;

  while(!wytyczne.Czypusta()){
    Graf graf;
    ilosc=wytyczne.Usun();
    for(int i=0;i<ilosc;i++)
      graf.DodajW(i);

    for(int i=0;i<(2*ilosc);i++){
      pom=rand()%ilosc;
      pom2=rand()%ilosc;
      while(pom==pom2){
	pom2=rand()%ilosc;}
      graf.DodajK(pom,pom2);
    }

    zegar.start();
    znalezione=BFS(graf);
    zegar.stop();

    zegar.zapis_do_pliku();
    cout<<"Przeszedlem przez "<<znalezione<<" wierzcholkow"<<endl;
  }

}


  /* srand(time(NULL));
  int pom,pom2,ilosc=0,silosc=0,roznica=0,znalezione;
  Stoper zegar;
  Graf graf;

  while(!wytyczne.Czypusta()){
    silosc=ilosc;
    ilosc=wytyczne.Usun();
    for(int i=silosc;i<ilosc;i++)
      graf.DodajW(i);

    roznica=ilosc-silosc;
    for(int i=0;i<(2*roznica);i++){
      pom=(rand()%roznica)+silosc;
      cout<<pom<<endl;
      pom2=(rand()%roznica)+silosc;
      cout<<pom2<<endl;
      while(pom==pom2){
	pom2=(rand()%roznica)+silosc;}
      graf.DodajK(pom,pom2);
    }*/
