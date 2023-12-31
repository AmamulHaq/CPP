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
        int amount;
        amount = c.amount - 0.05 * c.amount;
        cout << "congratulation " << c.name << ", your amount with 5 percent discount is: " << amount << endl;
    }
    else
    {
        cout << "hey " << c.name << ", your net amount to pay is: " << c.amount << endl;
    }

    return 0;
}
