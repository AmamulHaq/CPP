#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class employee
{
public:
    char name[24];
    char address[24];
    int age;
    double salary;
};

int main()
{
    employee E[10];

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter name: ";
        cin >> E[i].name;
        cout << "Enter address: ";
        cin >> E[i].address;
        cout << "Enter age: ";
        cin >> E[i].age;
        cout << "Enter salary: ";
        cin >> E[i].salary;
    }

    for (int i = 0; i < 4; i++)
    {
        cout << "The name of employee is: " << E[i].name << endl;
        cout << "The address of employee is: " << E[i].address << endl;
        cout << "The age of employee is: " << E[i].age << endl;
        cout << "The salary of employee is: " << E[i].salary << endl;
        cout << endl;
    }

    return 0;
}
