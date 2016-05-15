#
#  To sa opcje dla kompilacji
#
CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

__start__: Graf
	./Graf

Graf: obj obj/main.o obj/Stoper.o obj/PojemnikWide.o obj/Lista.o obj/Wierzcholek.o obj/Krawedz.o obj/IGraf.o obj/Graf.o obj/Pojemnik.o obj/Stos.o obj/DFS.o obj/Kolejka.o obj/IRunnable.o obj/GrafTest.o obj/BFS.o
	g++ -Wall -pedantic -std=c++0x -o Graf obj/main.o obj/Stoper.o obj/PojemnikWide.o obj/Lista.o obj/Wierzcholek.o obj/Krawedz.o obj/IGraf.o obj/Graf.o obj/Pojemnik.o obj/Stos.o obj/DFS.o obj/Kolejka.o obj/IRunnable.o obj/GrafTest.o obj/BFS.o

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

obj/IGraf.o: inc/IGraf.hh src/IGraf.cpp
	g++ -c ${CXXFLAGS} -o obj/IGraf.o src/IGraf.cpp

obj/Graf.o: inc/Graf.hh src/Graf.cpp
	g++ -c ${CXXFLAGS} -o obj/Graf.o src/Graf.cpp

obj/Pojemnik.o: inc/Pojemnik.hh src/Pojemnik.cpp
	g++ -c ${CXXFLAGS} -o obj/Pojemnik.o src/Pojemnik.cpp

obj/Stos.o: inc/Stos.hh src/Stos.cpp
	g++ -c ${CXXFLAGS} -o obj/Stos.o src/Stos.cpp

obj/DFS.o: inc/DFS.hh src/DFS.cpp
	g++ -c ${CXXFLAGS} -o obj/DFS.o src/DFS.cpp

obj/Kolejka.o: inc/Kolejka.hh src/Kolejka.cpp
	g++ -c ${CXXFLAGS} -o obj/Kolejka.o src/Kolejka.cpp

obj/IRunnable.o: inc/IRunnable.hh src/IRunnable.cpp
	g++ -c ${CXXFLAGS} -o obj/IRunnable.o src/IRunnable.cpp

obj/GrafTest.o: inc/GrafTest.hh src/GrafTest.cpp
	g++ -c ${CXXFLAGS} -o obj/GrafTest.o src/GrafTest.cpp

obj/BFS.o: inc/BFS.hh src/BFS.cpp
	g++ -c ${CXXFLAGS} -o obj/BFS.o src/BFS.cpp

clean:
	rm -f obj/*.o tablica_dyn
