#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float *p;
    cout << "Enter marks of 5 subjects: " << endl;
    p = new float[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> *(p + i);
    }

    cout << "The marks of the student are: ";
    for (int i = 0; i < 5; ++i)
    {
        cout << *(p + i) << " ";
    }
    delete[] p;
    return 0;
}