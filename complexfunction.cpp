#include <iostream>
using namespace std;

class complex1
{
public:
    float real;
    float imag;

    complex1(float r, float i)
    {
        real = r;
        imag = i;
    }
};

class complex2
{
public:
    float real;
    float imag;

    complex2(float r, float i)
    {
        real = r;
        imag = i;
    }
};

void add(complex1 c1, complex2 c2)
{
    float rtemp, itemp;
    rtemp = c1.real + c2.real;
    itemp = c1.imag + c2.imag;

    cout << "The sum is " << rtemp << " + " << itemp << "i" << endl;
}

int main()
{
    complex1 c1(1, 2);
    complex2 c2(3, 4);
    add(c1, c2); 
    return 0;
}
