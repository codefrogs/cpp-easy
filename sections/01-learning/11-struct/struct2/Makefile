
all: struct

state.o: state.cpp state.h
	g++ -c --std=c++20 state.cpp -o state.o

struct.o: struct.cpp state.h
	g++ -c --std=c++20 struct.cpp -o struct.o

struct: struct.o state.o
	g++ --std=c++20 struct.o state.o -o struct

clean:
	rm *.o struct
