
#include <iostream>
#include <string>

using namespace std;
class complex
{
private:
    int real, img;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    complex operator+(complex x)
    {
        complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
    void display() { cout << real << "+i" << img << endl; };
};

int main()
{
    complex c1(3, 5);
    c1.display();
    complex c2(5, 2);
    c2.display();
    complex c3;
    cout << "sum of complex number: ";
    c3 = c1 + c2;
    c3.display();

    return 0;
}