#include <iostream>
#include <string>

using namespace std;

int area(int l)
{
    return l * l;
}

float area(float l, float b)
{
    return l * b;
}

int Area(float b, float h)
{
    return 0.5 * b * h;
}

int main()
{
    float l, b, h, A;

    A = area(7);
    cout << "The area of square is: " << A << endl;

    A = area(5, 6);
    cout << "The area of rectangle is: " << A << endl;

    A = Area(8, 10);
    cout << "The area of triangle is: " << A << endl;

    return 0;
}
