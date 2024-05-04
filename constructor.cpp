#include <iostream>
//constructor with function 
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

    friend Complex addition(const Complex &c1, const Complex &c2);
};

Complex addition(const Complex &c1, const Complex &c2)
{
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main()
{
    Complex c1(3, 4.5), c2(2.5, 1), c3;
    c3 = addition(c1, c2);
    c3.display();
    return 0;
}
