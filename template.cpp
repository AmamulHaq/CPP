#include <iostream>
using namespace std;
template <class T>
T addition(T a, T b)
{
    return a + b;
}
int main()
{
    int a = 3, b = 5;
    float c = 9.3, d = 3.5;
    cout << "the sum of integer is: " << addition(a, b) << endl;
    cout << "the sum of float value is: " << addition(c, d) << endl;
    return 0;
}