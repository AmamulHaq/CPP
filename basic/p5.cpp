#include <iostream>
using namespace std;
class customer
{
    char name[30];
    char productname[30];
    double price;

public:
    void getdata()
    {
        cout << "enter name , product name, and its price: " << endl;
        cin >> name >> productname >> price;
    }
    void discount()
    {
        if (price >= 20000)
        {
            price = 0.95 * price;
        }
    }
    void display()
    {
        cout << "the details are:" << endl;
        cout << name << endl
             << productname << endl
             << price << endl;
    }
};
int main()
{
    customer c;
    c.getdata();
    c.discount();
    c.display();
    return 0;
}
