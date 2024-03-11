#include <iostream>
using namespace std;
class s1
{
private:
    float a = 2.4;

public:
    float A()
    {
        return a;
    }
};
class s2
{
private:
    float b = 4.45;

public:
    float B()
    {
        return b;
    }
};
int main()
{
    s1 a;
    s2 b;
    cout << "the sum of two numbers is: " << a.A() + b.B();
    return 0;
}