#include <iostream>
#include <cmath>
using namespace std;

class complex
{
public:
    float real;
    float imag;
    complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }
    complex operator+(complex c2)
    {
        return complex(real + c2.real, imag + c2.imag);
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    friend class polar;
};

class polar
{
private:
    float r;
    float ag;

public:
    polar(float real, float imag)
    {
        r = sqrt(pow(real, 2) + pow(imag, 2));
        ag = atan2(imag, real); // Corrected angle calculation
    }

    void display()
    {
        cout << "sum in polar form " << r << " < " << ag << endl;
    }
};

int main()
{
    complex c1(8, -3), c2(3, 4);
    complex c3 = c1 + c2;
    c3.display();
    polar p(c3.real, c3.imag);

    p.display();
    return 0;
}
