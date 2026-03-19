all: main clock drink
main: drink clock main.cpp
	g++ -pedantic-errors -fdiagnostics-color=always -g main.cpp clock drink -o main
clock: clock.h clock.cpp
	g++ -pedantic-errors -fdiagnostics-color=always -c -g clock.cpp -o clock
drink: drink.h drink.cpp
	g++ -pedantic-errors -fdiagnostics-color=always -c -g drink.cpp -o drink
