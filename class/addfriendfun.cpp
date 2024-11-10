#include <iostream>
using namespace std;

class Sum
{
private:
    float a;

public:
    Sum(float v = 0)
    {a = v;}
    void display()
    {cout << "The sum of two objects is: " << a << endl;
    }
    friend Sum add(Sum,Sum);//friend function with class return type
};
Sum add(Sum s1,Sum s2)
{
    Sum s3;
    s3.a = s1.a + s2.a;
    return s3;
};
int main()
{
    Sum s1(3.53), s2(5.6),s3;
    s3=add(s1,s2);//call of friend function with object as parameter
    s3.display();

    return 0;
}
