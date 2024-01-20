
#include <iostream>
#include <string>
using namespace std;
class shape{
    public:
   virtual void draw()=0;
};
class circle: public shape{
public:
void draw(){cout<<"\nDerived1: drawing a circle...";}
};
class rectangle: public shape{
public:
void draw(){cout<<"\nDerived2: drawing a rectangle...";}
};
int main(){
    shape*ptr[2];
    circle c;
    rectangle r;
    ptr[0]=&c;
    ptr[1]=&r;
    ptr[0]->draw();
    ptr[1]->draw();
    return 0;
}

