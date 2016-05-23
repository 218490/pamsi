#
#  To sa opcje dla kompilacji
#
CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

__start__: Graf
	./Graf

Graf: obj obj/main.o obj/Stoper.o obj/PojemnikWide.o obj/Lista.o obj/Wierzcholek.o obj/Krawedz.o obj/Pojemnik.o obj/Kolejka.o obj/TablicaW.o obj/Graf.o obj/BandB.o obj/Rekord.o obj/TablicaHash.o obj/TablicaAsoc.o obj/Stos.o obj/Polaczenie.o obj/KolejkaPriorytetowa.o obj/GrafTest.o obj/IGraf.o obj/IRunnable.o obj/IStoper.o
	g++ -Wall -pedantic -std=c++0x -o Graf obj/main.o obj/Stoper.o obj/PojemnikWide.o obj/Lista.o obj/Wierzcholek.o obj/Krawedz.o obj/Pojemnik.o obj/Kolejka.o obj/TablicaW.o obj/Graf.o obj/BandB.o obj/Rekord.o obj/TablicaHash.o obj/TablicaAsoc.o obj/Stos.o obj/Polaczenie.o obj/KolejkaPriorytetowa.o obj/GrafTest.o obj/IGraf.o obj/IRunnable.o obj/IStoper.o

obj:
	mkdir obj

obj/main.o: src/main.cpp
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/Stoper.o: inc/Stoper.hh src/Stoper.cpp
	g++ -c ${CXXFLAGS} -o obj/Stoper.o src/Stoper.cpp

obj/PojemnikWide.o: inc/PojemnikWide.hh src/PojemnikWide.cpp
	g++ -c ${CXXFLAGS} -o obj/PojemnikWide.o src/PojemnikWide.cpp

obj/Lista.o: inc/Lista.hh src/Lista.cpp
	g++ -c ${CXXFLAGS} -o obj/Lista.o src/Lista.cpp

obj/Wierzcholek.o: inc/Wierzcholek.hh src/Wierzcholek.cpp
	g++ -c ${CXXFLAGS} -o obj/Wierzcholek.o src/Wierzcholek.cpp

obj/Krawedz.o: inc/Krawedz.hh src/Krawedz.cpp
	g++ -c ${CXXFLAGS} -o obj/Krawedz.o src/Krawedz.cpp

obj/Pojemnik.o: inc/Pojemnik.hh src/Pojemnik.cpp
	g++ -c ${CXXFLAGS} -o obj/Pojemnik.o src/Pojemnik.cpp

obj/Kolejka.o: inc/Kolejka.hh src/Kolejka.cpp
	g++ -c ${CXXFLAGS} -o obj/Kolejka.o src/Kolejka.cpp

obj/TablicaW.o: inc/TablicaW.hh src/TablicaW.cpp
	g++ -c ${CXXFLAGS} -o obj/TablicaW.o src/TablicaW.cpp

obj/Graf.o: inc/Graf.hh src/Graf.cpp
	g++ -c ${CXXFLAGS} -o obj/Graf.o src/Graf.cpp

obj/BandB.o: inc/BandB.hh src/BandB.cpp
	g++ -c ${CXXFLAGS} -o obj/BandB.o src/BandB.cpp

obj/Rekord.o: inc/Rekord.hh src/Rekord.cpp
	g++ -c ${CXXFLAGS} -o obj/Rekord.o src/Rekord.cpp

obj/TablicaHash.o: inc/TablicaHash.hh src/TablicaHash.cpp
	g++ -c ${CXXFLAGS} -o obj/TablicaHash.o src/TablicaHash.cpp

obj/TablicaAsoc.o: inc/TablicaAsoc.hh src/TablicaAsoc.cpp
	g++ -c ${CXXFLAGS} -o obj/TablicaAsoc.o src/TablicaAsoc.cpp

obj/Stos.o: inc/Stos.hh src/Stos.cpp
	g++ -c ${CXXFLAGS} -o obj/Stos.o src/Stos.cpp

obj/Polaczenie.o: inc/Polaczenie.hh src/Polaczenie.cpp
	g++ -c ${CXXFLAGS} -o obj/Polaczenie.o src/Polaczenie.cpp

obj/KolejkaPriorytetowa.o: inc/KolejkaPriorytetowa.hh src/KolejkaPriorytetowa.cpp
	g++ -c ${CXXFLAGS} -o obj/KolejkaPriorytetowa.o src/KolejkaPriorytetowa.cpp

obj/GrafTest.o: inc/GrafTest.hh src/GrafTest.cpp
	g++ -c ${CXXFLAGS} -o obj/GrafTest.o src/GrafTest.cpp

obj/IGraf.o: inc/IGraf.hh src/IGraf.cpp
	g++ -c ${CXXFLAGS} -o obj/IGraf.o src/IGraf.cpp

obj/IRunnable.o: inc/IRunnable.hh src/IRunnable.cpp
	g++ -c ${CXXFLAGS} -o obj/IRunnable.o src/IRunnable.cpp

obj/IStoper.o: inc/IStoper.hh src/IStoper.cpp
	g++ -c ${CXXFLAGS} -o obj/IStoper.o src/IStoper.cpp

clean:
	rm -f obj/*.o tablica_dyn
