#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    cout << "The value of a and b inside function: " << *a << "," << *b << endl;
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 2, b = 3;
    swap(&a, &b);
    cout << "The value of a and b after swap: " << a << "," << b << endl;

    return 0;
}