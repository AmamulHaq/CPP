#include <iostream>
#include <string>
using namespace std;
class base
{
public:
    virtual void show()
    {
        cout << "\n I am from base class.." << endl;
    };
};
class derived : public base
{
public:
    void show()
    {
        cout << "\n I am from drived class.." << endl;
    };
};

int main()
{
    base *pbase, base;
    derived *pder, der;
    pbase = &der;
    pder = dynamic_cast<derived *>(pbase);
    pder->show();
    if (pder != NULL)
        cout << "it is working";
    else
        cout << "cammot cast base";
    return 0;
}
