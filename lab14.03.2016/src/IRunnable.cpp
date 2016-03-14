#include "IRunnable.hh"

/*!
 *\file
 *\brief interfejs do testowania programow
 */

/*!
 *\brief przygotowanie do testu
 *
 *\param[in] pilosc- ilosc lczb jaka ma byc zapisana do tablicy
 *\param[in] ppowtorzenia- ile razy ma byc wywolany algorytm, pomiar czasowy
 *\param[in] popcja- zmienna potrzebna do wyboru algorytmu (1. powiekszzanie
 *tablicy o 1, 2. powiekszanie tablcy o 10, 3. powiekszanie tablicy 2 razy)
 */
void IRunnable::przygotuj(int pilosc,int ppowtorzenia,char popcja){
  ilosc=pilosc;
  powtorzenia=ppowtorzenia;
  opcja=popcja;
}
