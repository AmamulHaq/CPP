#include <iostream>
using namespace std;

void swap(int a, int b)
{
    cout << "The value of a and b inside function before swap: " << a << "," << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "The value of a and b inside function after swap: " << a << "," << b << endl;
}

int main()
{
    int a = 2, b = 3;
    swap(a, b);
    cout << "The value of a and b after swap: " << a << "," << b << endl;

    return 0;
}
