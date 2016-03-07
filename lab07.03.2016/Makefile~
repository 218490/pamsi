#
#  To sa opcje dla kompilacji
#
CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

__start__: tablica_dyn
	./tablica_dyn

tablica_dyn: obj obj/main.o obj/Tablica.o
	g++ -Wall -pedantic -std=c++0x -o tablica_dyn obj/main.o obj/Tablica.o

obj:
	mkdir obj

obj/main.o: src/main.cpp
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/Tablica.o: inc/Tablica.hh src/Tablica.cpp
	g++ -c ${CXXFLAGS} -o obj/Tablica.o src/Tablica.cpp

clean:
	rm -f obj/*.o tablica_dyn
