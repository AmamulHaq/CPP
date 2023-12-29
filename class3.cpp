#include <iostream>

using namespace std;

class Add {
public:
    int num1;
    int num2;

    int add() {
        return num1 + num2;
    }
};

int main() {
    Add a;
    a.num1 = 64;
    a.num2 = 42;
    cout << "The sum of two numbers is: " << a.add() << endl;
    return 0;
}
