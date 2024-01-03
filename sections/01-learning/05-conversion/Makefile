VPATH = ../GSL*
CFLAGS = -std=c++20 -I../GSL-4.0.0/include
file=conversion.cpp

conversion: ${file}
	g++ ${CFLAGS} ${file} -o conversion

clean:
	rm -f conversion
