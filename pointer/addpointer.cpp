#include <iostream>
using namespace std;
float add(float *a, float *b)
{
    float sum;
    sum = *a + *b;
    return sum;
}
int main()
{
    float a, b, A;
    a = 2.7;
    b = 6.5;
    A = add(&a, &b);
    cout << "the sum of numbers is: " << A << endl;
}