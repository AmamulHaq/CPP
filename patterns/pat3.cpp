#include <iostream>
using namespace std;
/*
       *
     * * *
   * * * * *
 * * * * * * *
   * * * * *
     * * *
       *

*/
void pat3(int n){
    int j,k;
    for(int i;i<n;i++){
        for(k=0;k<n-i-1;k++){
            cout<<" ";
        }
        for(j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
        
    }

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
pat3(4);

    return 0;
}