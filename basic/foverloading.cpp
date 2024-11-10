#include <iostream>
using namespace std;
const int PI = 3.1415;
float area(float r)
{
    return PI * r * r;
}
float area(float l, float b)
{
    return l * b;
}
int main()
{
    cout << "the area of circle is: " << area(7) << endl;
    cout << "the area of rectangle is: " << area(4, 5) << endl;

    return 0;
}