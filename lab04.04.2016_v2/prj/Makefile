CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

__start__: SLista
	./SLista

SLista: obj obj/main.o obj/SLista.o obj/main.o obj/IList.o obj/QSort.o obj/Tab.o obj/QSortTest.o obj/IStoper.o obj/StoperZZapisem.o obj/IRunnable.o obj/MSort.o obj/MSortTest.o
	g++ -Wall -pedantic -std=c++0x -o SLista obj/main.o obj/SLista.o obj/IList.o obj/QSort.o obj/Tab.o obj/QSortTest.o obj/IStoper.o obj/StoperZZapisem.o obj/IRunnable.o obj/MSort.o obj/MSortTest.o

obj:
	mkdir ./obj

obj/IList.o: src/IList.cpp inc/IList.hh
	g++ -c ${CXXFLAGS} -o obj/IList.o src/IList.cpp

obj/SLista.o: src/SLista.cpp inc/SLista.hh
	g++ -c ${CXXFLAGS} -o obj/SLista.o src/SLista.cpp

obj/QSort.o: src/QSort.cpp inc/QSort.hh
	g++ -c ${CXXFLAGS} -o obj/QSort.o src/QSort.cpp

obj/Tab.o: src/Tab.cpp inc/Tab.hh
	g++ -c ${CXXFLAGS} -o obj/Tab.o src/Tab.cpp

obj/QSortTest.o: src/QSortTest.cpp inc/QSortTest.hh
	g++ -c ${CXXFLAGS} -o obj/QSortTest.o src/QSortTest.cpp

obj/main.o: src/main.cpp inc/SLista.hh
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/IStoper.o: src/IStoper.cpp inc/IStoper.hh
	g++ -c ${CXXFLAGS} -o obj/IStoper.o src/IStoper.cpp

obj/StoperZZapisem.o: src/StoperZZapisem.cpp inc/StoperZZapisem.hh
	g++ -c ${CXXFLAGS} -o obj/StoperZZapisem.o src/StoperZZapisem.cpp

obj/IRunnable.o: src/IRunnable.cpp inc/IRunnable.hh
	g++ -c ${CXXFLAGS} -o obj/IRunnable.o src/IRunnable.cpp

obj/MSort.o: src/MSort.cpp inc/MSort.hh
	g++ -c ${CXXFLAGS} -o obj/MSort.o src/MSort.cpp

obj/MSortTest.o: src/MSortTest.cpp inc/MSortTest.hh
	g++ -c ${CXXFLAGS} -o obj/MSortTest.o src/MSortTest.cpp

clean:
	rm -f obj/*.o SLista
