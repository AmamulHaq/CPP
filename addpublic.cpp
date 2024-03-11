#include <iostream>
using namespace std;
class s1
{
public:
    float a = 2.4;
};
class s2
{
public:
    float b = 4.45;
};
int main()
{
    s1 a;
    s2 b;
    cout << "the sum of two numbers is: " << a.a + b.b;
    return 0;
}