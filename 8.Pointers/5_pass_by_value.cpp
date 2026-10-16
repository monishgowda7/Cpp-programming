#include<iostream>
using namespace std;

void changeA(int a){  
    a=20;                       // we passes a=20 , here and it has changed a=20 only in the function but inside the main function still 
    cout<<a<<endl;              // changes her won't reflect to main a
}                              // why because it makes copy a in changeA function 

int main(){

    int a = 10;
    changeA(a);

    cout<<a<<endl;
        
    return 0;
}