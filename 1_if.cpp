#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter your age :";
    cin>>age;


    if (age>18){
        cout<< "u can vote"<<endl;
    }
    else if(age==0){
        cout<<"enter correct age"<<endl;
    }

    else{
        cout<<"hello child"<<endl;
    }
    return 0;
}