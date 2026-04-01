all: main pointers arrayListType
main: main.cpp pointers arrayListType
	g++ -pedantic-errors -g -fdiagnostics-color=always main.cpp pointers arrayListType -o main
pointers: pointers.h pointers.cpp
	g++ -pedantic-errors -g -c -fdiagnostics-color=always pointers.cpp -o pointers
arrayListType: arrayListType.h arrayListType.cpp
	g++ -pedantic-errors -g -c -fdiagnostics-color=always arrayListType.cpp -o arrayListType
clean:
	rm main