main: calc.o main.o
	g++ -o main main.o calc.o
calc.o: calc.cpp calc.h
	g++ -c calc.cpp
main.o:
	g++ -c main.cpp
clean:
	rm main *.o
