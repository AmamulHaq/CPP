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
    complex operator+(complex c2)
    {
        return complex(real + c2.real, imag + c2.imag);
    }
    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};

int main()
{
    complex c1(4, 3), c2(3, -4);
    complex c3 = c1 + c2;
    c3.display();
    return 0;
}