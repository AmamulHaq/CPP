#include <iostream>
using namespace std;

int main()
{
    int number = 500;
    int *ptr = &number;

    cout << "your number is " << *ptr << endl;
    cout << "address of that number is " << ptr << endl;

    return 0;
}

