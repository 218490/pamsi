#ifndef BandB_HH
#define BandB_HH

#include <iostream>
#include "Graf.hh"
#include "TablicaAsoc.hh"
#include "KolejkaPriorytetowa.hh"
using namespace std;

/*!
 *\file
 *\brief
 *Implementacja funkcji B&B (Branch and bound)
 */

int BandB(Graf& graf,string start,string meta);


#endif
