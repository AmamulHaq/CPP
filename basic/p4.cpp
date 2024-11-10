#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float add(int a = 6, int b = 8, int c = 4)
{
    return a + b + c;
};
int main()
{
    float Add;
    Add = add();
    cout << "The sum of the integer is : " << Add << endl;
}
