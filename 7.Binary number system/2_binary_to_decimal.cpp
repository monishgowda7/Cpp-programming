#include<iostream>
using namespace std;

int BItoDEC(int bino){
    int n = bino;
    int DEnum = 0;
    int pow = 1;
    
    while(n>0){
        int lastdigit = n%10;
        DEnum += lastdigit * pow;
        pow*=2;
        n/=2;
    }

    cout<<"Decimal number of "<<bino<<" is "<<DEnum<<endl;

}
int main(){
    int bi;
    cout<<"Enter a binary number :";
    cin>>bi;

    BItoDEC(bi);
    return 0;
}