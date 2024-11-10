#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, i;
    float *p, sum = 0, avg;

    cout << "How many students are there? ";
    cin >> n;

    cout << "Enter marks of each student: ";
    p = new float[n];

    for (i = 0; i < n; i++)
    {
        cin >> *(p + i);
        sum += *(p + i);
    }

    avg = sum / n;

    cout << "The average marks of ";
    for (i = 0; i < n; i++)
        cout << setw(3) << *(p + i);

    cout << " is: " << avg;

    delete[] p;
    return 0;
}
