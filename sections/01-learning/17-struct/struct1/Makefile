
all: struct

struct.o: struct.cpp state.h
	g++ -c --std=c++20 struct.cpp -o struct.o

struct: struct.o
	g++ --std=c++20 struct.o -o struct

clean:
	rm *.o struct
