#
#  To sa opcje dla kompilacji
#
CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

__start__: Drzewo
	./Drzewo

Drzewo: obj obj/main.o obj/Stoper.o obj/Tablica.o obj/Drzewo.o
	g++ -Wall -pedantic -std=c++0x -o Drzewo obj/main.o obj/Stoper.o obj/Tablica.o obj/Drzewo.o

obj:
	mkdir obj

obj/main.o: src/main.cpp
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/Stoper.o: inc/Stoper.hh src/Stoper.cpp
	g++ -c ${CXXFLAGS} -o obj/Stoper.o src/Stoper.cpp

obj/Tablica.o: inc/Tablica.hh src/Tablica.cpp
	g++ -c ${CXXFLAGS} -o obj/Tablica.o src/Tablica.cpp

obj/Drzewo.o: inc/Drzewo.hh src/Drzewo.cpp
	g++ -c ${CXXFLAGS} -o obj/Drzewo.o src/Drzewo.cpp

clean:
	rm -f obj/*.o tablica_dyn
