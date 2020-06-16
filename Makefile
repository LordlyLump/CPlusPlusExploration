all: helloworld.exe logics.exe

helloworld.exe: main.o add.o
	c++ main.o add.o -o helloworld.exe

test: helloworld.exe
	helloworld.exe

logics.exe: logics.o
	c++ logics.o -o logics.exe
