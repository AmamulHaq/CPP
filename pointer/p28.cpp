#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr = new int;
    *ptr = 786;
    cout << "the number is : " << *ptr<<endl;
    delete ptr;

    *ptr = 78690;

    cout << "the number after delete is: " << *ptr;

    return 0;
}
