all: hello
	
hello: greetings.o hello.o
	g++ greetings.o hello.o -o hello

greetings.o: greetings.cpp
	g++ -c greetings.cpp

hello.o: hello.cpp
	g++ -c hello.cpp


clean:
	rm -rf *.o hello
	