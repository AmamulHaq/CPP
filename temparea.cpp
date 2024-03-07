#include <iostream>
#include <string>

using namespace std;
template <class t1, class t2>

void area(t1 l, t2 b)
{
    cout << "The area of rectangle is: " << l * b << endl;
}
template <class t>
void area(t l, t b)
{
    cout << "The area of triangle is: " << 0.5 * l * b << endl;
}

int main()
{
    area(3, 4);
    area(3, 3.5);

    return 0;
}
