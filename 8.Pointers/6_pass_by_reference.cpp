#include<iostream>
using namespace std;

void changeA(int *ptr){           // address is passed , now if we make a changes in 8ptr it will reflect to a 
    *ptr=20;                       // for address ptr , for value *ptr
    cout<<*ptr<<endl;
}

int main(){

    int a = 10;
    changeA(&a);              // here i passed the address of  a 

    cout<<a<<endl;
    return 0;
}