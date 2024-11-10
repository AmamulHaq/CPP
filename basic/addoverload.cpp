#include <iostream>
using namespace std;
float add(float a, float b)
{
    float sum;
    sum = a + b;
    return sum;
};
float add(int a, int b, int c)
{
    int sum;
    sum = a + b +c;
    return sum;
};
int main()
{
    
    float A;
    int i;
    i =add(3,4,5);
    cout<<"the sum of three numbers is: "<<i<<endl;
    A = add(5.3, 6.4);
    cout << "the sum of two numbers is: " << A << endl;
    return 0;
}