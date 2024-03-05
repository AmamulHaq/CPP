#include <iostream>
using namespace std;
class complex
{
public:
    float real;
    float imag;
    complex()
    {
        real = 0;
        imag = 0;
    }
    complex(float r, float i)
    {
        real = r;
        imag = i;
    }
    friend complex operator+(complex c1, complex c2);
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

complex operator+(complex c1, complex c2){
    {return complex(c1.real + c2.real, c1.imag + c2.imag);}
};

int main()
{
    complex c1(4, 3), c2(3, -4);
    complex c3 = c1 + c2;
    c3.display();
    return 0;
}