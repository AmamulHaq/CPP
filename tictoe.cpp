#include <iostream>
#include <string>
using namespace std;
char value[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn='x';
int row,col,num;

void display(){
system("cls");
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
cout<<"\n\tTurn of player ["<<turn<<"]:"<<endl;
};
void select(){
    cin>>num;
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
default:cout<<"invalid choice";break;

}};





void result(){




};



int main(){
    display();
    for(int i;i<9;i++){
    select();
    switch(turn){
    case 'x':if(value[row][col]!='x' && value[row][col]!='o'){value[row][col]='x'; turn = 'o';}else{cout<<"\nInvalid location!";}; break;
    case 'o':if(value[row][col]!='x' && value[row][col]!='o'){value[row][col]='0'; turn = 'x';}else{cout<<"\nInvalid location!";}; break;}
    display(); }
       
    
    return 0;}
