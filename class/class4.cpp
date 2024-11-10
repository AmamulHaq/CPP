#include <iostream>

using namespace std;

class student
{
public:
    char name[20];
    int rollno;
    float marks;
};
int main()
{ 
    student s1;
    cout << "Enter name:" << endl;
    cin >> s1.name;
    cout << "Enter roll no:" << endl;
    cin >> s1.rollno;
    cout << "Enter marks:" << endl;
    cin >> s1.marks;
    cout << "Name:" << s1.name << "\t Rollno:" << s1.rollno << "\t Marks:" << s1.marks << endl;
}