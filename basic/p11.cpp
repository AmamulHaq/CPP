#include <iostream>
using namespace std;

class MyClass
{
private:
    static int staticVariable;

public:
    static void setStaticVariable(int value)
    {
        staticVariable = value;
    }

    static int getStaticVariable()
    {
        return staticVariable;
    }
};

int MyClass::staticVariable = 0;

int main()
{
    MyClass::setStaticVariable(42);
    cout << "Static Variable: " << MyClass::getStaticVariable() << endl;

    MyClass obj1;
    obj1.setStaticVariable(100);

    MyClass obj2;
    cout << "Static Variable from obj1: " << obj1.getStaticVariable() << endl;
    cout << "Static Variable from obj2: " << obj2.getStaticVariable() << endl;

    return 0;
}
