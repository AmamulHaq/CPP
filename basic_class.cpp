//basic to class conversion
#include <iostream>
using namespace std;

class Distance {
    int inch;
    int feet;

public:
    Distance(float m) {
        float f = m * 3.28;
        feet = int(f);
        inch = int((f - feet) * 12);
    }

    void display() {
        cout << feet << " feet " << inch << " inch" << endl;
    }
};

int main() {
    float met = 32.8;
    Distance d=met;
    d.display();

    return 0;
}
