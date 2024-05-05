#include <iostream>

using namespace std;

class Sum1
{
private:
    float a;
public:
    Sum1(float v = 0)
    {
        a = v;
    }
    friend class Sum2;
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

float Add(Sum1 s1, Sum2 s2)
{
    float s;
    s = s1.a + s2.b;
    return s;
}
};


int main()
{
    Sum1 s1(5.74);
    Sum2 s2(7.25);
    
    cout << "The sum of two data members of friend classes: " << s2.Add(s1, s2) << endl;
    return 0;
}
