#include <iostream>
#include <cstdio>
using namespace std;

typedef struct{
  int *tablica;
  int licznik;

  void zainicjalizuj(int n);
  void usun(){ delete []tablica; };
  void dodaj_liczby(int &n,int pom);
  void wyswietl(int n){for(int i=0;i<n;i++) cout<<tablica[i]<<" "; }
}tabdyn;

void tabdyn::zainicjalizuj(int n){
  tablica=new int[n];
  for(int i=0;i<(n-1);i++){
    tablica[i]=2*i+1;
}
  licznik=1;
}

void tabdyn::dodaj_liczby(int &n,int pom){
  if(licznik>0){
    tablica[n-licznik]=pom;
}
  else{
    int tabpom[n];
    for(int i=0;i<n;i++){
      tabpom[i]=tablica[i];
}
    usun();
    tablica=new int[n+1];
    for(int i=0;i<n;i++){
      tabpom[i]=tablica[i];
}
    n=n+1;
    tablica[n-1]=pom;
  }
}




int main(){
  int n=10;
  tabdyn tabd;
  int pom;

  tabd.zainicjalizuj(n);  
  cout<<"podaj liczbe jaka chcesz dodac do tablicy"<<endl;
  cin>>pom;
  tabd.dodaj_liczby(n,pom);
  cout<<"podaj liczbe jaka chcesz dodac do tablicy"<<endl;
  cin>>pom;
  tabd.dodaj_liczby(n,pom);

  tabd.usun();
}
