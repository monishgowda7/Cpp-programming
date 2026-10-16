// we have decimal(10 base) , binary(2base) , and hexadecimal(16 base -- > 0-9 and a,b,c,d,e,f)
// address of a variable will be stored in thsi hexadecimal
// address will be a form of 0x16f4ba3(in the domain of hexadecimal)

#include<iostream>
using namespace std;

int main(){
    int a=10;             // "&"  is used to get the address

    cout<<&a<<endl;
    return 0;
}