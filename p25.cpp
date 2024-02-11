#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void getData() {
        cout << "\nThe real part is: " << real;
        cout << "\nThe imaginary part is: " << imag;
    }

    void setData(int a, int b) {
        real = a;
        imag = b;
    }

    void add(const Complex& C) {
        int Real = real + C.real;
        int Imag = imag + C.imag;

        cout << "\nThe sum of both complex numbers is: " << Real << "+i" << Imag;
    }
};

int main() {
    Complex C1, C2;

    C1.setData(10, 50);
    C1.getData();

    C2.setData(2, 100);
    C2.getData();

    C1.add(C2);
    return 0;
}
