.PHONY: clean

all: ovenapp
DEBUG=-g
SRC=.
BIN=bin

ovenapp: oven.o main.o bread.o
	mkdir -p bin
	g++ ${DEBUG} $^ -o ${BIN}/$@

main.o: ${SRC}/main.cpp
	g++ ${DEBUG} -c $< -o $@

oven.o: ${SRC}/oven.cpp ${SRC}/oven.h
	g++ ${DEBUG} -c $< -o $@

bread.o: ${SRC}/bread.cpp ${SRC}/bread.h
	g++ ${DEBUG} -c $< -o $@

clean:
	rm -f *.o ${BIN}/ovenapp -r bin
