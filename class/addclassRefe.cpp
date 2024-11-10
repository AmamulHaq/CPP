#include<iostream>
using namespace std;

class Sum {
private:
    float s;
public:
    float add(float &a, float &b) {
        s = a + b;
        return s;
    }
};

int main() {
    float a = 4.3, b = 6.5;
    Sum s;
    cout << "The sum of the two data members is: " << s.add(a, b) << endl;
}
