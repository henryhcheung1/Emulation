.PHONY: all clean

all: Disassemble8080

Disassemble8080: Disassemble8080.o
	g++ -o Disassemble8080 Disassemble8080.o

Disassemble8080.o: Disassemble8080.cpp
	g++ -c Disassemble8080.cpp

clean:
	rm *.o Disassemble8080
