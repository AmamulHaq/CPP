#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Area
{
    int length, breadth, height;

public:
    Area(int l = 6, int b = 8, int h = 4) : length(l), breadth(b), height(h) {}

    int square()
    {
        return length * length;
    }

    int rectangle()
    {
        return length * breadth;
    }

    float triangle()
    {
        return 0.5 * breadth * height;
    }
};

int main()
{
    Area area; // Create an object of the Area class

    int squareArea = area.square();
    cout << "The area of the square is: " << squareArea << endl;

    int rectangleArea = area.rectangle();
    cout << "The area of the rectangle is: " << rectangleArea << endl;

    float triangleArea = area.triangle();
    cout << "The area of the triangle is: " << triangleArea << endl;

    return 0;
}
