#include <iostream>
using namespace std;

class Distance
{
    int inch;
    int feet;

public:
    Distance(int i = 0, int f = 0)
    {
        inch = i;
        feet = f;
    }
    operator float()
    {
        float m = (feet + inch / 12) / 3.28;
        return m;
    }
};

int main()
{
    Distance d(5, 6);
    float m = d;
    cout << m << endl;
    return 0;
}
