#include<iostream>
using namespace std;

int DECtoBI(int deci){
    int n = deci;
    int BInum = 0;
    int pow = 1;
    
    while(n>0){
        int rem = n % 2;
        BInum += rem * pow;
        pow*=10;
        n/=2;
    }

    cout<<"Binary number of "<<deci<<" is "<<BInum<<endl;

}
int main(){
    int de;
    cout<<"Enter a decimal number :";
    cin>>de;

    DECtoBI(de);
    return 0;
}