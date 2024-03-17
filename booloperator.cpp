#include<iostream>
using namespace std;
class value{
    int v;
    public:
    value(int va=0){
    v=va;
    }
    bool operator > (value va){
    if(v>va.v){return true;}
    else{return false;}
    }
};
int main(){
value v1(7),v2(2);
if(v1>v2){cout<<"v1 is greater than v2";}
else{cout<<"so v2 is greater";}

}