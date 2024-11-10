#include <iostream>
using namespace std;
template <class T>
void swap(T *a, T *b)
{
    T temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 4, b = 8;
    float m = 3.5, n = 6.33;
    char o = 'a', p = 'p';
    // string o[7]="amamul", p[4]="motu";
    swap(&a, &b);
    swap(&m, &n);
    swap(&o, &p);
    cout << "the value of int after swap: " << a << " " << b << endl;
    cout << "the value of float after swap: " << m << " " << n << endl;
    cout << "the value of char after swap: " << o << " " << p << endl;
}