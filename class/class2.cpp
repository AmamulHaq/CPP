
#include <iostream>
#include <string>
using namespace std;

class car
{
public:
    
    string name;
    int price;
    string engine;

};

int main()
{
car c1;
c1.name="BMW";
c1.price= 5000000;
c1.engine="bmw7860";
cout << "Name: " << c1.name << endl;
    cout << "Marks: " << c1.price << endl;
car c2;
c2.name="TESLA";
c2.engine="tesla78693";
c2.price= 80770986;
cout << "Name: " << c2.name << endl;
    cout << "Marks: " << c2.price << endl;
car c3;
c3.name="mahendra";
c3.engine="mahen786";
c3.price= 97909799;
cout << "Name: " << c3.name << endl;
    cout << "Marks: " << c3.price << endl;
return 0;

}