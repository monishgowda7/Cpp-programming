#include<iostream>
using namespace std;

int main(){
    int x=10,y=20;

    // binary operator
    cout<<x+y<<endl;
    cout<<x-y<<endl;
    cout<<x*y<<endl;
    cout<<x/y<<endl;
    cout<<x%y<<endl;
    
    // unary operator 

    int a = 3;
    int b2 = a++;              // what a++ will to is use(assign to b) then update   , so b2 will print 3
    int b1 = ++a;              // ++a is update the use(assign)                      , and b1 will print 4


    cout<<"a :"<<a<<endl;;
    // cout<<"b1 :"<<b1<<endl;;
    cout<<"b2 :"<<b2<<endl;;



    return 0;
}