#include <iostream>
using namespace std;

class Sum1
{
private:
    float a;

public:
    float A()
    {
        return a;
    }
    Sum1(float v = 0)
    {
        a = v;
    }
    void display()
    {
        cout << "The value of a: " << a << endl;
    }
    friend class Sum2; // Friend of class Sum1
};

class Sum2
{
private:
    float b;

public:
    Sum2(float v = 0)
    {
        b = v;
    }
    void display()
    {
        cout << "The value of b: " << b << endl;
    }
    friend float Add(Sum1 s1, Sum2 s2); // Friend function of class Sum2 with float return type
};

float Add(Sum1 s1, Sum2 s2)
{
    float s;
    s = s1.A() + s2.b;
    return s;
}

int main()
{
    Sum1 s1(5.74);
    Sum2 s2(7.25);
    s1.display();
    s2.display();
    cout << "The sum of two data members of friend classes: " << Add(s1, s2) << endl;
    return 0;
}
