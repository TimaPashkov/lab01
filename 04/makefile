main.exe: main.o message.o goodbye.o hello.o
	g++ main.o message.o goodbye.o hello.o -o main.exe
main.o: main.cpp message.h goodbye.h hello.h
	g++ -c main.cpp
message.o: message.cpp message.h
	g++ -c message.cpp
goodbye.o: goodbye.cpp goodbye.h
	g++ -c goodbye.cpp
hello.o: hello.cpp hello.h
	g++ -c hello.cpp

