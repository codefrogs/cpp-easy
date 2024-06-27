.PHONY: clean

all: nullex
DEBUG=-g
SRC=src
BIN=bin

nullex: flight.o main.o nullable.o
	mkdir -p bin
	g++ ${DEBUG} $^ -o ${BIN}/$@

main.o: ${SRC}/main.cpp
	g++ ${DEBUG} -c $< -o $@

flight.o: ${SRC}/flight.cpp ${SRC}/flight.h
	g++ ${DEBUG} -c $< -o $@

nullable.o: ${SRC}/nullable.cpp ${SRC}/nullable.h
	g++ ${DEBUG} -c $< -o $@

clean:
	rm -f *.o ${BIN}/nullex -r bin
