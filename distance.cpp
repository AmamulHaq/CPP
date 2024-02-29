#include <iostream>
using namespace std;

class D1 {
    int f, i; 
public:
    void get() {
        cin >> f >> i;
    }
    friend class D2; // Grant access to D2
};

class D2 {
    int m, cm;
public:
    void display() {
        cout << m << "m\t" << cm << "cm\n";
    }
    void operator=(D1& d1) {
        float temp = d1.i + d1.f * 12;
        float m1 = temp / 39.37;
        int m2 = temp / 39.37;
        int cm = (temp - m2 * 39.37) * 100 / 2.54; // Correct calculation of cm
        m = m2;
        this->cm = cm; // Use "this->" to distinguish member variables
    }
};// accessment time .. same again

int main() {
    D1 d1;
    D2 d2;
    d1.get();
    d2 = d1;
    d2.display();
    return 0; // Add a return statement in main
}
