
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fullname;
    cout << "Enter your full name: ";
    getline(cin, fullname);
    cout << "Your full name is: " << fullname << endl;

    char a;
    cout << "Enter your favorite character: ";
    cin >> a;
    cout << "Your favorite character is: " << a << endl;

    int b;
    cout << "Enter your favorite number: ";
    cin >> b;
    cout << "Your favorite number is: " << b << endl;

    string fname;
    cout << "Enter your first name: ";
    cin >> fname;
    cout << "Your first name is: " << fname << endl;

    int size = 5;
    string input[size];

    for (int i = 0; i < size; i++)
        {cout << "Enter your array elements: ";
        cin >> input[i];}

    cout << "The array elements are: ";
    for (int i = 0; i < size; i++)
    {cout << input[i] << " ";}

    return 0;
}
