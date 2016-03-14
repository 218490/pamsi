#ifndef STOPER_HH
#define STOPER_HH

#include <iostream>
#include <fstream>
#include <ctime>
#include <iomanip> 
using namespace std;

class Stoper{
  clock_t czas1=0;
  clock_t czas2=0;

public:
  void start(){czas1=clock(); };
  void stop(){czas2=clock(); };
  double get_time();
  bool zapis_do_pliku();
};

bool otworz_plik(string nazwapom, ofstream& StrmPlikowy);

#endif
