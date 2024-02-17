#include <iostream>
using namespace std;

class Time
{
    int hours;
    int minutes;

public:
    Time(int a, int b)
    {
        hours = a;
        minutes = b;
    }

    operator int()
    {
        int t = hours * 60 + minutes;
        return t;
    }
};

int main()
{
    Time T(2, 30);
    int minutes = T;
    cout << "\ntotal minutes: " << minutes;
    return 0;
}
//hello world