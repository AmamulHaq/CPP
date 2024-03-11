#include <iostream>
using namespace std;
float add(float &a, float &b)
{
    float sum;
    sum = a + b;
    return sum;
}
int main()
{
    float a = 4.6, b = 3.7, A;
    A = add(a, b);
    cout << "the sum of numbers is: " << A << endl;
}