.PHONY: all clean

all : example_cpp.out example_c.out

clean :
	rm *.so *.o *.out

example_cpp.out : main.cpp libexample.so
	g++ main.cpp -L. -lexample -o example_cpp.out

example_c.out : main.c libexample.so
	gcc main.c -L. -lexample -o example_c.out

libexample.so : Example.o example_wrapper.o
	g++ -fPIC -shared Example.o example_wrapper.o -o libexample.so

Example.o : Example.cpp Example.hpp
	g++ -c Example.cpp

example_wrapper.o : example_wrapper.cpp example_wrapper.h Example.hpp
	g++ -c example_wrapper.cpp


