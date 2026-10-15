#include<iostream>
using namespace std;

int main(){

    // print sum of odd numnber of a number

    int a = 123456789;
    int sum_digi=0;

    while(a>0){
        int last_digi = a % 10;

        if (last_digi % 2 != 0){
            sum_digi += last_digi;
        }
        a/=10;
    }
     
    cout<<"Sum of odd digits of number : "<<sum_digi;
    return 0;
} 