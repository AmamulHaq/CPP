#include <iostream>
#include <cmath>
using namespace std;

class Distance
{
public:
    float m;
    float cm;
    Distance(float M = 0, float CM = 0)
    {
        m = M;
        cm = CM;
    }
    Distance operator+(Distance c2)
    {
        return Distance(m + c2.m, cm + c2.cm);
    }
    void display()
    {
        cout << m << " meters and " << cm << " centimeters" << endl;
    }
};

class cgs
{
public:
    float inches;
    float feet;

    cgs(float m, float cm)
    {
        float CM = m * 100 + cm;
        feet = floor(CM / 30.48); 
        inches = (CM / 30.48 - feet) * 12;
    }
// hell
    void display()
    {
        cout << feet << " feet and " << inches << " inches" << endl;
    }
};

int main()
{
    Distance c1(4, 3), c2(3, 9);
    Distance c3 = c1 + c2;
    c3.display();
    cgs c(c3.m, c3.cm);
    c.display();
    return 0;
}
