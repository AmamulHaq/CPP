#include <iostream>
using namespace std;

class box
{
    float l, b, h;

public:
    // Constructor
    box(float le, float br, float he)
    {
        l = le;
        b = br;
        h = he;
    }

    // Member function to calculate and display the volume
    void volume()
    {
        float vol = l * b * h;
        cout << "The volume of the box is: " << vol << endl;
    }
};

int main()
{

    box myBox(10, 5.5, 3.5);

    myBox.volume();

    return 0;
}

