#include "Krawedz.hh"

bool Krawedz::operator==(Krawedz druga){
  if(sasiad==druga.WezSasiad())
    return true;
  else
    return false;
}
