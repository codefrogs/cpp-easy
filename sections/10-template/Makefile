sumex: value.o main.o
	g++ --std=c++20 value.o main.o -o sumex

value.o: value.cpp value.h
	g++ -c --std=c++20 value.cpp -o value.o

main.o: main.cpp
	g++ -c --std=c++20 main.cpp -o main.o

clean:
	rm -f value.o main.o sumex
