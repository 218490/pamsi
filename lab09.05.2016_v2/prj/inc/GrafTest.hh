#ifndef GRAFTEST_HH
#define GRAFTEST_HH

#include <iostream>
#include "Graf.hh"
#include "Stoper.hh"
#include "BandB.hh"
#include "IRunnable.hh"
using namespace std;

/*!
 *\file
 *\brief Implementacja klasy odpowiedzialnej za testowanie algorytmow DFS i BFS
 *na grafie
 */

class GrafTest: public IRunnable{
Lista<int> wytyczne;
string NazwaPlikuDane;

public:
bool Przygotuj(string NazwaPlikuWytyczne,string pNazwaPlikuDane);
void TestujBandB();

~GrafTest(){wytyczne.Oproznij();};
};

bool otworz_plik_odczyt(string nazwapom, fstream& StrmPlikowy);
bool otworz_plik_zapis(string nazwapom, fstream& StrmPlikowy);

#endif