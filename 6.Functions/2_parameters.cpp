#include<iostream>
using namespace std;

// a, b are parameters
int divi(int a, int b){              // even my sum is float , it stored as int bcz function return type in int
    float sum = (float)a/b;          // even all were float , if we don't wrote (float)a/b , it will return only int part bcz input 3,2 are int so after division it give only int part
    return sum;
}


int main(){

    float s = divi(3,2);     // 3,2 are arguments 
    cout<<s<<endl;

    return 0 ;
}