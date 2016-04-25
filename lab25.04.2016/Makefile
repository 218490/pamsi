#
#  To sa opcje dla kompilacji
#
CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

__start__: Graf
	./Graf

Graf: obj obj/main.o obj/Stoper.o obj/PojemnikWide.o obj/Lista.o obj/Wierzcholek.o obj/Krawedz.o obj/Graf.o
	g++ -Wall -pedantic -std=c++0x -o Graf obj/main.o obj/Stoper.o obj/PojemnikWide.o obj/Lista.o obj/Wierzcholek.o obj/Krawedz.o obj/Graf.o

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

obj/Graf.o: inc/Graf.hh src/Graf.cpp
	g++ -c ${CXXFLAGS} -o obj/Graf.o src/Graf.cpp

clean:
	rm -f obj/*.o tablica_dyn
