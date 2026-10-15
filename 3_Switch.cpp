#include<iostream>
using namespace std;

int main(){
    int a,b;
    int operat;

    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<"\n";

    cout<<"operation menu\n"<<endl;
    
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division\n"<<endl;
    

    cout<<"Enter a operation :";
    cin>>operat;
    cout<<"\n";


    switch(operat){

        case 1: cout<<"Addition of number is = "<<a+b<<endl;
                break;

        case 2: cout<<"Subtraction of number is = "<<a-b<<endl;
                break;
        case 3: cout<<"Multiplication of number is = "<<a*b<<endl;
                break;
        case 4: cout<<"Division of number is = "<<(float)a/b<<endl;
                break;

        default: cout<<"invalid choice";        
        }


    return 0;
}