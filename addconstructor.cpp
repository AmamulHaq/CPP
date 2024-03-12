#include <iostream>
using namespace std;
class Sum
{
private:
    float a, b;

public:
    Sum(float A , float B = 7.54)//parametrized default constructor
    {
        a = A;
        b = B;
    }
    Sum(Sum &s2)//copy constructor for s2
    {
        a = s2.a;
        b = s2.b;
    }
    void add()
    {
        cout << "the sum of data members is: "<<a + b << endl;
    }
};
int main()
{
    Sum s1(4.63), s2(s1);
    s1.add();
    s2.add();

    return 0;
}
