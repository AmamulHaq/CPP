#include <iostream>
using namespace std;

class complex
{
public:
    float real;
    float imag;

    complex(float r, float i)
    {
        real = r;
        imag = i;
    }
    friend void add(complex c1, complex c2);
    friend class AddClass;
};

void add(complex c1, complex c2)
{
    float rtemp, itemp;
    rtemp = c1.real + c2.real;
    itemp = c1.imag + c2.imag;

    cout << "Friend function add(): The sum is " << rtemp << " + " << itemp << "i" << endl;
};

class AddClass
{
public:
    float rtemp;
    float itemp;
    AddClass(complex c1, complex c2) 
    {
        rtemp = c1.real + c2.real; // Assigning real part
        itemp = c1.imag + c2.imag; // Assigning imaginary part

        cout << "Friend class add(): The sum is " << rtemp << " + " << itemp << "i" << endl;
    }
};

int main()
{
    complex c1(1, 2), c2(3, 4);
    add(c1, c2);

    AddClass c3(c1, c2); 
    return 0;
}
