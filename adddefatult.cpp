#include <iostream>
using namespace std;
float add(float a, float b=4.8)
{
    float sum;
    sum = a + b;
    return sum;
}
int main()
{
    float a, b, A;
    a = 2.7;
    A = add(a);
    cout << "the sum of numbers is: " << A << endl;
}