#include <iostream>
#include <cstdlib>
#include "clock.h"

int main()
{
    int *p = nullptr;
    int q = 7;
    std::cout << &q << std::endl;
    p = &q;
    std::cout << p << std::endl;
    std::cout << &p << std::endl;
    std::cout << *p << std::endl;
    int h = rand() % 24;
    int m = rand() % 60;
    int s = rand() % 60;
    Clock c(h, m, s);
    Clock *clockPtr;
    (*clockPtr).clockTick();
    clockPtr->clockTick();
    clockPtr->clockTick();

    return 0;
}