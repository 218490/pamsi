#
#  To sa opcje dla kompilacji
#
CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

__start__: tablica_dyn
	./tablica_dyn

tablica_dyn: obj obj/main.o obj/Tablica.o obj/IRunnable.o obj/Stoper.o obj/TablicaTest.o obj/Pojemnik.o obj/PojemnikWide.o obj/Lista.o obj/Kolejka.o obj/ListaTest.o obj/Stos.o obj/Sortowanie.o
	g++ -Wall -pedantic -std=c++0x -o tablica_dyn obj/main.o obj/Tablica.o obj/IRunnable.o obj/Stoper.o obj/TablicaTest.o obj/Pojemnik.o obj/PojemnikWide.o obj/Lista.o obj/Kolejka.o obj/ListaTest.o obj/Stos.o obj/Sortowanie.o

obj:
	mkdir obj

obj/main.o: src/main.cpp
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/Tablica.o: inc/Tablica.hh src/Tablica.cpp
	g++ -c ${CXXFLAGS} -o obj/Tablica.o src/Tablica.cpp

obj/IRunnable.o: inc/IRunnable.hh src/IRunnable.cpp
	g++ -c ${CXXFLAGS} -o obj/IRunnable.o src/IRunnable.cpp

obj/Stoper.o: inc/Stoper.hh src/Stoper.cpp
	g++ -c ${CXXFLAGS} -o obj/Stoper.o src/Stoper.cpp

obj/TablicaTest.o: inc/TablicaTest.hh src/TablicaTest.cpp
	g++ -c ${CXXFLAGS} -o obj/TablicaTest.o src/TablicaTest.cpp

obj/Pojemnik.o: inc/Pojemnik.hh src/Pojemnik.cpp
	g++ -c ${CXXFLAGS} -o obj/Pojemnik.o src/Pojemnik.cpp

obj/PojemnikWide.o: inc/PojemnikWide.hh src/PojemnikWide.cpp
	g++ -c ${CXXFLAGS} -o obj/PojemnikWide.o src/PojemnikWide.cpp

obj/Lista.o: inc/Lista.hh src/Lista.cpp
	g++ -c ${CXXFLAGS} -o obj/Lista.o src/Lista.cpp

obj/Kolejka.o: inc/Kolejka.hh src/Kolejka.cpp
	g++ -c ${CXXFLAGS} -o obj/Kolejka.o src/Kolejka.cpp

obj/Stos.o: inc/Stos.hh src/Stos.cpp
	g++ -c ${CXXFLAGS} -o obj/Stos.o src/Stos.cpp

obj/ListaTest.o: inc/ListaTest.hh src/ListaTest.cpp
	g++ -c ${CXXFLAGS} -o obj/ListaTest.o src/ListaTest.cpp

obj/Sortowanie.o: inc/Sortowanie.hh src/Sortowanie.cpp
	g++ -c ${CXXFLAGS} -o obj/Sortowanie.o src/Sortowanie.cpp

clean:
	rm -f obj/*.o tablica_dyn
