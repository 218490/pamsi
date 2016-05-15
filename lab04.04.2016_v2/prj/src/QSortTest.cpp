#include "QSortTest.hh"

/*!
 *Uzupelnia liste liczbami oznaczajacymi ile elementow ma byc zapisane do
 *tablicy w procesie testowania
 */
void QSortTest::Przygotuj(){
  lista.AddFront(1000000000);
  lista.AddFront(100000000);
  lista.AddFront(10000000);
  lista.AddFront(1000000);
  lista.AddFront(100000);
  lista.AddFront(10000);
  lista.AddFront(1000);
  lista.AddFront(100);
  lista.AddFront(10); 
}

/*!
 *Wypelnia tablice i sortuje jej elementy
 */
void QSortTest::Testuj(){
  StoperZZapisem stoper;
  srand(time(NULL));

  while(!lista.IsEmpty()){ 
    Tab tablica;
    /*
    for(int i=0;i<lista.Front();i++){  //przypadek sredni
      tablica.ZapiszNowy(rand()%1000+1);
    }
    */
    for(int i=0;i<lista.Front();i++){  //przypadek optymistyczny
      tablica.ZapiszNowy(lista.Front()-i);
    }
        
    lista.RemoveFront();

    stoper.Start();
    Quicksort(tablica,0,tablica.Rozmiar()-1);  //SORTOWANIE ze srodkowym
    //QuicksortLewy(tablica,0,tablica.Rozmiar()-1); //SORTOWANIE z lewym pivotem
    stoper.Stop();

    stoper.SaveAverageTimeToBuffer(stoper.GetElapsedTime()); 

    ofstream StrmPlikowy;
    const char* nazwa="pomiary.dat";
    StrmPlikowy.open(nazwa,ios::app);
    
    stoper.DumpTimesToFile(StrmPlikowy);
    StrmPlikowy.close();
    stoper.CleanBuffer();
  }

}