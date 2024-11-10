#include<iostream>
using namespace std;
template<class T1,class T2,class T3>
void take(T1 a,T2 b,T3 c)
{
    cout<<"the integer value: "<<a<<endl;
    cout<<"the float value: "<<b<<endl;
    cout<<"the string value: "<<c<<endl;

}
int main(){
    take(4,5.3,"amamul");
    
    return 0;
}