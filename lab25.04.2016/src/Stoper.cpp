#include "Stoper.hh"

/*!
 *\brief roznica czasowa
 *
 *Zwraca roznice czasu miedzy "startem a "stopem". Wartosci wyrazone w
 *mikrosekundach
 */
double Stoper::get_time(){
  return static_cast <double>( (czas2.tv_sec*1000000+czas2.tv_usec)-(czas1.tv_sec*1000000+czas1.tv_usec) );
}

/*!
 *\brief otwarcie pliku
 *
 *Otwiera plik i tworzy strumien do zapisywania
 *UWAGA: PLIK OTWARTY W TRYBIE DOPISYWANIA
 *
 *\param[in] nazwapom- nazwa pliku, ktory ma zostac otwarty/utworzony
 *\param[in] StrmPlikowy- Zapisywany jest w nim strumien gdzie bedziemy
 * zapisywac dane
 */
bool otworz_plik(string nazwapom, ofstream& StrmPlikowy){
  const char* Cnazwapom;
  Cnazwapom=nazwapom.c_str();

  StrmPlikowy.open(Cnazwapom,ios::app);
  if (!StrmPlikowy.is_open())  {
    cerr << ":(  Operacja otwarcia do zapisu \"" << Cnazwapom << "\"" << endl
	 << ":(  nie powiodla sie." << endl;
    return false;
  }
  return true;
}

/*!
 *\brief Zapis zmierzonego czasu do pliku
 *
 *Wywolanie tej funkcji skutkuje dopisaniem do pliku "czasy.dat" ostatniej
 *roznicy czasowej ("czas_stop"-"czas_start)
 *Wartosci wyrazone w sekundach
 */
bool Stoper::zapis_do_pliku(){
  string nazwa="czasy.dat";
  ofstream StrmPlikowy;
  if(!otworz_plik(nazwa,StrmPlikowy)){return false;};
  StrmPlikowy<<setw(16)<<fixed<<setprecision(10)<<get_time()/1000000<<endl;
  StrmPlikowy.close();
  return !StrmPlikowy.fail();

}