#include <iostream>
using namespace std;

class Class
{
private:
    char name[24];
    int roll;
    int marks[3];

public:
    void input()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter marks: ";
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: ";
        for (int i = 0; i < 3; i++)
        {
            cout << marks[i] << "\t";
        }
        cout << endl;
    }
};

int main()
{
    Class BEI[3];
    cout << "Enter details of BEI students\n";
    for (int i = 0; i < 3; i++)
    {
        BEI[i].input();
    }
    cout << "\nStudent details:\n";
    for (int i = 0; i < 3; i++)
    {
        BEI[i].display();
    }
    Class Computer[3];
    cout << "Enter details of Computer students\n";
    for (int i = 0; i < 3; i++)
    {
        Computer[i].input();
    }
    cout << "\nStudent details:\n";
    for (int i = 0; i < 3; i++)
    {
        Computer[i].display();
    }
    return 0;
}
