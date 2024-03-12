#include <iostream>
using namespace std;
class complex
{
private:
    float real;
    float imag;
public:
    complex(float r=0, float i=0)
    {
        real = r;
        imag = i;
    }   
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
    friend complex operator+(complex c1, complex c2);
};

complex operator+(complex c1, complex c2){
    return complex(c1.real + c2.real, c1.imag + c2.imag);
};

int main()
{
    complex c1(4, 3), c2(3, -4);
    complex c3 = c1 + c2;
    c3.display();
    return 0;
}