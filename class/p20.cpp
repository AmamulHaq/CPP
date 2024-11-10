
#include <iostream>
#include <string>

using namespace std;

class des
{
    static int count;

public:
    static int inc()
    {
        count++;
    };
    static void show() { cout << count << endl; };
};
int des::count;

int main()
{
    des d1, d2;
    d1.inc();
    d2.inc();
    d1.show();
    d2.show();

    return 0;
}