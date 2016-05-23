#ifndef STOPER_HH
#define STOPER_HH

#include <iostream>
#include <fstream>
#include <ctime>
#include <sys/time.h>
#include <iomanip> 
#include "IStoper.hh"
using namespace std;

class Stoper: public IStoper{
  timeval czas1;
  timeval czas2;

public:
  void start(){gettimeofday(&czas1,NULL); };
  void stop(){gettimeofday(&czas2,NULL); };
  double get_time();
  bool zapis_do_pliku();
};

bool otworz_plik(string nazwapom, ofstream& StrmPlikowy);

#endif
