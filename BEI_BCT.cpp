//bei and bct data
//lets work out
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
        cout << "Enter name, roll and marks : \n";
        cin >> name >> roll;
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
    }
    void display()
    {

        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
        cout << "Marks : ";
        for (int i = 0; i < 3; i++)
        {
            cout << marks[i] << "\t";
        }
        cout << endl;
    }
};

int main()
{
    Class BEI, BCT;
    cout << "enter details of BEI student: \n";
    BEI.input();
    BEI.display();
    cout << "enter details of BCT student: \n";
    BCT.input();
    BCT.display();
    return 0;
}
