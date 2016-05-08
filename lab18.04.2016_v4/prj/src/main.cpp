#include <iostream>
#include "DrzewoTest.hh"

using namespace std;


int main(){
  DrzewoTest obiekt;

  obiekt.Przygotuj("wytyczne.dat");
  obiekt.Testuj();

}
