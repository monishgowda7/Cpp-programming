#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    


    int a=20;
    float b=4.56;
    bool is_adult =true;
    double PI = 3.14159265359;
    char grade = 'A';        // char can store only single alphabeat ,in single qoute

    cout<<"size of int is :"<<sizeof(int)<<endl;
    cout<<"size of float is :"<<sizeof(float)<<endl;
    cout<<"size of double is :"<<sizeof(double)<<endl;
    cout<<"size of char is :"<<sizeof(char)<<endl;
    cout<<"size of boolean is :"<<sizeof(bool)<<endl;



    // setprecision(12) -- > in the <iomanip>

    cout<<PI<<endl;                           // by default precision is 5   
    cout<<setprecision(12)<<PI<<endl;


    return 0;
}
