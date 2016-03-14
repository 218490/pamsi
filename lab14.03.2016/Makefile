#
#  To sa opcje dla kompilacji
#
CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

__start__: tablica_dyn
	./tablica_dyn

tablica_dyn: obj obj/main.o obj/Tablica.o obj/IRunnable.o obj/Stoper.o obj/TablicaTest.o obj/Pojemnik.o obj/Lista.o
	g++ -Wall -pedantic -std=c++0x -o tablica_dyn obj/main.o obj/Tablica.o obj/IRunnable.o obj/Stoper.o obj/TablicaTest.o obj/Pojemnik.o obj/Lista.o

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

obj/Lista.o: inc/Lista.hh src/Lista.cpp
	g++ -c ${CXXFLAGS} -o obj/Lista.o src/Lista.cpp

clean:
	rm -f obj/*.o tablica_dyn
