#include <iostream>
using namespace std;

class Sum
{
private:
    float a;

public:
    Sum(float v = 0)
    {
        a = v;
    }

    Sum operator+(Sum s2)
    {
        Sum s3;
        s3.a = a + s2.a;
        return s3;
    }
    void display()
    {
        cout << "The sum of two objects is: " << a << endl;
    }
};

int main()
{
    Sum s1(3.62), s2(5.25), s3;
    s3 = s1 + s2;
    s3.display();

    return 0;
}
