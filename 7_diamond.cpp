#include<iostream>
using namespace std;

int main(){

    int n=5;
    int i,j;
    // 1st pyramid
    for (i=1; i<=n; i++){

        for (j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // 2nd pyramid
    for (i=5; i>=1; i--){

        for(j=1; j<=n-i; j++){
            cout<<" ";
        }
        
        for (j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    return 0;
}