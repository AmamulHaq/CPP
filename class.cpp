#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int marks;
    string name;
};

int main()
{

    Student s1;
    s1.marks = 34;
    s1.name = "amamul";
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;
    Student s2;
    s2.marks = 94;
    s2.name = "motu";
    cout << "Name: " << s2.name << endl;
    cout << "Marks: " << s2.marks << endl;

    

    return 0;
}
