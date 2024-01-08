#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Volume
{
private:
    int length, breadth, height;

public:
    Volume(int l = 6, int b = 8, int h = 4) : length(l), breadth(b), height(h) {}

    int calculateVolume()
    {
        return length * breadth * height;
    }
};

int main()
{
    Volume myCuboid; 

    cout << "The total volume of cuboid is: " << myCuboid.calculateVolume();

    return 0;
}
