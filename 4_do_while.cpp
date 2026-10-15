#include<iostream>
using namespace std;

int main(){

    int a=1;
    
    do{                                  // condition checks at last
        cout<<a<<" ";
        a++;
    } while(a<=5);


    return 0;
} 