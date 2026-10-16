#include<iostream>
using namespace std;

int main(){

    int *ptr = NULL;

    cout<<ptr<<endl;       // prints the address of null which is 0x0
    cout<<*ptr<<endl;           // since there is no value in null ,it  will show error
    cout<<"bye";
    return 0;
}