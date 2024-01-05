#include <iostream>
#include <string>
using namespace std;
char value[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn;
int row,col,num;

void display(){
cout<<"\n\t\tTIK TAK TOE\n";
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
void Turn(){


switch(turn){
    case 'x': cout<<"\n\tPlayer1 [X] turn: ";break;

    case 'o': cout<<"\n\tPlayer2 [O] turn: ";break;    
}


};
void select(){
    switch(num){
case 1: row=0; col=0; break;
case 2: row=0; col=1; break;
case 3: row=0; col=2; break;
case 4: row=1; col=0; break;
case 5: row=1; col=1; break;
case 6: row=1; col=2; break;
case 7: row=2; col=0; break;
case 8: row=2; col=1; break;
case 9: row=2; col=2; break;

}



};
int main(){
    display();
    Turn();
    select();
    
    
    
    
    return 0;}
