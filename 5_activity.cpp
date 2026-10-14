#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    float science;
    float maths;
    float english;

    cout<<"Enter your science marks :";
    cin>>science;
    cout<<"Enter your maths marks :";
    cin>>maths;
    cout<<"Enter your english marks :";
    cin>>english;

    float average = (science+maths+english)/3;

    cout<<"your average marks is :"<<average<<endl;

    return 0;
}