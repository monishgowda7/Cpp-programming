// multiple function with same name but different parameters


#include<iostream>
using namespace std;

int sum(int a , int b){

    return a+b;
}

double sum(double a , double b){                // c++ by default takes decimal number as double to declare float use 1.5f and long double as 1.5L 
    return a+b;
}


int main(){
   
    cout<<sum(2,3)<<endl;
    cout<<sum(1.5,1.5)<<endl;
    return 0 ;
}