// int &b=a  , here a, b refering  to same memory location 

#include<iostream>
using namespace std;

void changeA(int &param){         // param is refe variable pointing to the same address of a 
    param=20;                       // in that address we made change , so it will reflect main function
    cout<<param<<endl;
}

int main(){

    int a=10;
    changeA(a);            // passed a 
    cout<<a<<endl;

    return 0;

}