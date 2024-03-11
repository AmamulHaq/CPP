#include <iostream>
using namespace std;

int main() {
    float marks[5] = {24, 54, 83, 76, 65};

    cout << "The marks of the student are: ";
    for (int i = 0; i < 5; ++i) {
        cout << marks[i]<<" ";
    }
    return 0;
}
