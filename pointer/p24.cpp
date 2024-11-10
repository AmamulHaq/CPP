#include<iostream>
using namespace std;
class Complex{
    int real,imag;
    public:
    void getData(){
        cout<<"\nThe real part is: "<<real;
        cout<<"\nThe imaginary part is: "<<imag;

    }
void setData(int a,int b){
    real=a;
    imag=b;
}

};
int main(){
    Complex C1,C2;
    Complex *ptr;

    ptr=&C1;
    ptr->setData(10,50);
    ptr->getData();

    ptr=&C2;
    ptr->setData(2,100);
    ptr->getData();

    return 0;
}