#include<iostream>
using namespace std;

int palin(int n){
    int res=0;

    while(n>0){
        int last_digit = n%10;
        res = res*10 + last_digit;
        n/=10;

    }
    return res;
}


int main(){
    
    int n;

    cout<<"enter a numeber to :";
    cin >>n;
    int answer = palin(n);

    if (n==answer){
        cout<<"Enterd number is palindromic"<<endl;
    }
    else{
        cout<<"Enterd number is not palindromic"<<endl;
    }
    return 0;
}