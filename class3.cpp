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
class N1{
    public:
    int n1;

};
class N2{
    public:
    int n2;

};
int main() {
    Add a;
    a.num1 = 64;
    a.num2 = 42;
    cout << "The sum of two numbers is: " << a.add() << endl;

    N1 Num1;
    Num1.n1=64;
    N2 Num2;
    Num2.n2=42;
    cout << "The sum of two numbers is: " << Num1.n1+ Num2.n2<< endl;

    return 0;
}
