#include <iostream>
using namespace std;
class student
{
    static int rollno;

public:
    static int getroll()//static member function
    {
        return rollno;
    }
    static int increase()
    {
        rollno++;
    }
};
int student::rollno;//static data member
int main()
{
    cout << "initial roll no is: " << student::getroll() << endl;
    student a, b;
    student::increase();
    student::increase();
    student::increase();
    cout << "final of rollno: " << student::getroll() << endl;

    return 0;
}