// operator the directly access and modify the varible

#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int *ptr = &a;

    cout<<ptr<<endl;      
    cout<<*ptr<<endl;       // ptr means print that address , *ptr means print the value of that address



    // we can also modify the value 
    *ptr = 20;

    cout<<"a value now "<<a<<endl;
    return 0;
}