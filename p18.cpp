#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "The value of a and b inside function: " << a << " " << b << endl;
}

int main()
{
    int a, b;
    cout << "Enter the two numbers: \n";
    cin >> a >> b;
    cout << "The value of a and b before swap: " << a << " " << b << endl;
    swap(&a, &b);
    cout << "The value of a and b after swap: " << a << " " << b << endl;

    return 0;
}