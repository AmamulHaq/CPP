#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class customer
{
public:
    string name;
    float amount;
};

int main()
{
    string name;
    float amount;

    customer c;
    cout << "Enter your name: " << endl;
    cin >> c.name;

    cout << "Enter your amount: " << endl;
    cin >> c.amount;

    if (c.amount > 1500)
    {
        cout << "congratulation " << c.name << ", your amount is: " << c.amount << endl;
    }
    else
    {
        cout << "hey " << c.name << ", your current amount is: " << c.amount << endl;
    }

    return 0;
}
