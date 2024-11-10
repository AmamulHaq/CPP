#include <iostream>
#include <string>
#include <cmath>


using namespace std;

class student
{
public:
    char name[20];
    int rollno;
    float marks;
    void get()
    {
        cout << "Enter name: " << endl;
        cin >> name;
        cout << "Enter rollno: " << endl;
        cin >> rollno;
        cout << "Enter marks: " << endl;
        cin >> marks;
    };
    void put()
    {
        cout << "Details of student are: " << endl;
        cout << name << rollno << marks;
    };
};
int main()
{
    student s;
    s.get();
    s.put();
}
