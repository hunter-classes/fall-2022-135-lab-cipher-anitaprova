main: main.o caesar.o solve.o
	g++ -o main main.o caesar.o

main.o: main.cpp caesar.h
	g++ -c main.cpp 

caesar.o: caesar.cpp caesar.h
	g++ -c caesar.cpp

solve.o: solve.cpp solve.h
	g++ -c solve.cpp

tests: tests.o caesar.o solve.o
	g++ -o tests tests.o caesar.o solve.o

tests.o: tests.cpp doctest.h caesar.h solve.h

clean:
	rm -f main tests test-ascii main.o tests.o test-ascii.o caesar.o
