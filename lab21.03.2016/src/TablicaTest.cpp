#include "TablicaTest.hh"

/*!
 *\brief Funkcja testujaca algorytmy
 *
 *Funkcja wywoluje algorytmy dodawania do tablicy, mierzy czas ich pracy
 *i zapisuje dane (czasy) do pliku "czasy.dat"
 *
 *\param[in] ilosc- ilosc lczb jaka ma byc zapisana do tablicy
 *\param[in] powtorzenia- ile razy ma byc wywolany algorytm, pomiar czasowy
 *\param[in] opcja- zmienna potrzebna do wyboru algorytmu (1. powiekszzanie
 *tablicy o 1, 2. powiekszanie tablcy o 10, 3. powiekszanie tablicy 2 razy)
 */
bool tabtest::testuj(int ilosc,int powtorzenia,char opcja){
  srand(time(NULL));
  switch(opcja){
  case '1':
    for(int i=0;i<powtorzenia;i++){
      start();  //czas
      zainicjalizuj();  
      do{
	int pom=rand()%100+1;
	dodaj_liczby(pom);
      }while(ile_elementow()<ilosc);
      usun();

      stop(); //czas
      if(!zapis_do_pliku()){ 
	cerr<<"Operacja zapisu czasu do pliku nie powiodla sie [funkcja testuj]";
	cerr<<endl;
	return false; 
      }; //czas
    }
  break;
  case '2':
    for(int i=0;i<powtorzenia;i++){
      start();  //czas
      zainicjalizuj();  
      do{
	int pom=rand()%100+1;
	dodaj_liczby_dek(pom);
      }while(ile_elementow()<ilosc);
      usun();

      stop(); //czas
      if(!zapis_do_pliku()){ 
	cerr<<"Operacja zapisu czasu do pliku nie powiodla sie [funkcja testuj]";
	cerr<<endl;
	return false; 
      }; //czas
    }
  break;
  case '3':
    for(int i=0;i<powtorzenia;i++){
      start();  //czas
      zainicjalizuj();  
      do{
	int pom=rand()%100+1;
	dodaj_liczby_dwa(pom);
      }while(ile_elementow()<ilosc);
      usun();

      stop(); //czas
      if(!zapis_do_pliku()){ 
	cerr<<"Operacja zapisu czasu do pliku nie powiodla sie [funkcja testuj]";
	cerr<<endl;
	return false; 
      }; //czas
    }
  break;
  default:
    cerr<<"Nieprawidlowy wybor argumentu [funkcja testuj]"<<endl;
    return false;
  }

 return true;
}
