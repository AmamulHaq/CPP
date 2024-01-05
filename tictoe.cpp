#include <iostream>
#include <string>
char value[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

using namespace std;
void display(){
cout<<"\n\n\t\tTIK TAK TOE\n";
cout<<"\t\tPlayer1=[x]\n\t\tPlayer2=[0]\n";
cout<<"\t     |     |     \n";
cout<<"\t  "<<value[0][0]<<"  |  "<<value[0][1]<<"  |  "<<value[0][2]<<"  \n";
cout<<"\t_____|_____|_____\n";
cout<<"\t     |     |     \n";
cout<<"\t  "<<value[1][0]<<"  |  "<<value[1][1]<<"  |  "<<value[1][2]<<"  \n";
cout<<"\t_____|_____|_____\n";
cout<<"\t     |     |     \n";
cout<<"\t  "<<value[2][0]<<"  |  "<<value[2][1]<<"  |  "<<value[2][2]<<"  \n";
cout<<"\t     |     |     \n";

};
int main(){
    display();
    
    
    
    
    
    return 0;}
