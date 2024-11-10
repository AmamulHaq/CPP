#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class student
{
public:
    char name[20];
    int rollno;
    float marks[5];
    void get()
    {
        cout << "Enter name: " << endl;
        cin >> name;
        cout << "Enter rollno: " << endl;
        cin >> rollno;
        cout << "Enter marks: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    };
    friend void full(student s)
    {
        float f;
        f = s.marks[0] + s.marks[1] + s.marks[2] + s.marks[3] + s.marks[4];
        cout<<"The full mark of "<<s.name<<"is:"<<f<<endl;
    }
};
int main(){

    student s;
    s.get();
    full(s);

    return 0;
}
