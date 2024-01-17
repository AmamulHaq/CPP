
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
    };
    void display()
    {
        cout << real << "+i" << img;
    }
    friend complex operator+(complex c1, complex c2);
};
complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
int main()
{
    complex c1(8.5), c2(10, 5), c3;
    c1.display();
    cout << "+";
    c2.display();
    cout << "=";
    c3 = c1 + c2;
    c3.display();
    return 0;
}