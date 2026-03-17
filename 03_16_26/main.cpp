#include <iostream>

void clockTick(int &h, int &m, int &s);

class Clock
{
    int hr;
    int min;
    int sec;

public:
    void clockTick();
};

int main()
{
    Clock c;
    c.clockTick();
    int hr = 23;
    int min = 59;
    int sec = 59;
    clockTick(hr, min, sec);

    return 0;
}

void clockTick(int &h, int &m, int &s)
{
    s++;
    if (s == 60)
    {
        s = 0;
        m++;
        if (m == 60)
        {
            m = 0;
            h++;
            if (h == 24)
            {
                h = 0;
            }
        }
    }
}

void Clock::clockTick()
{
    sec++;
    if (sec == 60)
    {
        sec = 0;
        min++;
        if (min == 60)
        {
            min = 0;
            hr++;
            if (hr == 24)
            {
                hr = 0;
            }
        }
    }
}