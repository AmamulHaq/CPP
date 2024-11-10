/*
*
*   *
*   *   *
*   *   *   *
*   *   *   *   *


*/
#include <iostream>
using namespace std;

void pat2(int n){
    int j;
    for(int i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
/*
1
1 2
1 2 3
1 2 3 4 
1 2 3 4 5 

*/
void pat3(int n){
    int j;
    for(int i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}/*
1
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

*/
void pat4(int n){
    int j;
    for(int i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}/*
* * * * * 
* * * * 
* * * 
* * 
* 

*/
void pat5(int n){
    int j;
    for(int i=0;i<n;i++){
        for(j=n-i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
/*
1 2 3 4 5
1 2 3 4 
1 2 3
1 2 
1

*/
void pat6(int n){
    int j;
    for(int i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
/*
      *
    * * *
  * * * * *
* * * * * * *
*/
void pat7(int n){
    int j,k,l;
    for(int i=0;i<n;i++){
        for(k=0;k<n-i;k++){
            cout<<" ";
        }
        for(j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
        
    }
}
/*

* * * * * * *
  * * * * *
    * * * 
      *
*/
void pat8(int n){
    int j,k,l;
    for(int i=0;i<n;i++){
        for(k=0;k<i;k++){
            cout<<" ";
        }
        for(j=0;j<2*(n-i-1)+1;j++){
            cout<<"*";
        }
        cout<<endl;
        
    }
}
int main() {
//pat2(5);
//pat3(5);
//pat4(5);
//pat5(5);
//pat6(5);
//pat7(4);
//pat8(4);
    return 0;
}