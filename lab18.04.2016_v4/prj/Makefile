#
#  To sa opcje dla kompilacji
#
CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

__start__: Drzewo
	./Drzewo

Drzewo: obj obj/main.o obj/Stoper.o obj/Drzewo.o obj/Pojemnik.o obj/DrzewoTest.o obj/PojemnikWide.o obj/Lista.o obj/IDrzewo.o obj/IRunnable.o
	g++ -Wall -pedantic -std=c++0x -o Drzewo obj/main.o obj/Stoper.o obj/Drzewo.o obj/Pojemnik.o obj/DrzewoTest.o obj/PojemnikWide.o obj/Lista.o obj/IDrzewo.o obj/IRunnable.o

obj:
	mkdir obj

obj/main.o: src/main.cpp
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/Stoper.o: inc/Stoper.hh src/Stoper.cpp
	g++ -c ${CXXFLAGS} -o obj/Stoper.o src/Stoper.cpp

obj/Drzewo.o: inc/Drzewo.hh src/Drzewo.cpp
	g++ -c ${CXXFLAGS} -o obj/Drzewo.o src/Drzewo.cpp

obj/Pojemnik.o: inc/Pojemnik.hh src/Pojemnik.cpp
	g++ -c ${CXXFLAGS} -o obj/Pojemnik.o src/Pojemnik.cpp

obj/DrzewoTest.o: inc/DrzewoTest.hh src/DrzewoTest.cpp
	g++ -c ${CXXFLAGS} -o obj/DrzewoTest.o src/DrzewoTest.cpp

obj/PojemnikWide.o: inc/PojemnikWide.hh src/PojemnikWide.cpp
	g++ -c ${CXXFLAGS} -o obj/PojemnikWide.o src/PojemnikWide.cpp

obj/Lista.o: inc/Lista.hh src/Lista.cpp
	g++ -c ${CXXFLAGS} -o obj/Lista.o src/Lista.cpp

obj/IDrzewo.o: inc/IDrzewo.hh src/IDrzewo.cpp
	g++ -c ${CXXFLAGS} -o obj/IDrzewo.o src/IDrzewo.cpp

obj/IRunnable.o: inc/IRunnable.hh src/IRunnable.cpp
	g++ -c ${CXXFLAGS} -o obj/IRunnable.o src/IRunnable.cpp

clean:
	rm -f obj/*.o tablica_dyn
