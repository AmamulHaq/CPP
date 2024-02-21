#include <iostream>
using namespace std;

class Complex
{
    float real;
    float imag;

public:
    Complex() : real(0), imag(0) {}

    Complex(float r, float i) : real(r), imag(i) {}
    void display() const
    {
        cout << real << " + " << imag << "i" << endl;
    }

    friend Complex operator-(Complex, Complex);
};
Complex operator-(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real - c2.real;
    temp.imag = c2.real - c2.real;
    return temp;
}

int main()
{
    Complex c1(3, 4.5), c2(2.5, 1), c3;
    c3 = c1 - c2;
    c3.display();
    return 0;
}
