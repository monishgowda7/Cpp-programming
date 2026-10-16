// pointers are special variable that stores the address of another variable

#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int *ptr = &a;                    // now address of a is stored inside the ptr named pointer
    int **pptr = &ptr;               // the address of  pointer is stored inside the pointer of pointer named pptr


    cout<<&a<<" = "<<ptr<<endl;
    cout<<&ptr<<" = "<<pptr<<endl;
    return 0;
}