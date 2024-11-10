#include <iostream>
using namespace std;
class sub
{
private:
    float mark;

public:

    void getmark(float mark)
    {
        this->mark = mark;
    }
    void display()
    {
        cout << "the mark is: " << mark << endl;
        cout << "the address is: " << this<<endl;
    }
};
int main()
{
    sub math, phy;
    math.getmark(92);
    math.display();
    phy.getmark(86);
    phy.display();

    return 0;
}

