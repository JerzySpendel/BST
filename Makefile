all: main

main: main.o bst.o node.o
	g++ main.o bst.o node.o -o main

main.o: main.cpp
	g++ -std=gnu++11 -c main.cpp -o main.o

bst.o: bst.cpp bst.hpp
	g++ -std=gnu++11 -c bst.cpp -o bst.o

node.o: node.cpp bst.hpp
	g++ -std=gnu++11 -c node.cpp -o node.o

clean:
	rm node.o bst.o main.o
