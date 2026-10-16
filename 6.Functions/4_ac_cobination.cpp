#include<iostream>
using namespace std;

int factorial(int n){
    int fact =1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }

    return fact;
}
int cobinations(int n , int r){

    int val1, val2, val3;
    val1 = factorial(n);
    val2 = factorial(r);
    val3 = factorial(n-r);


    int final_value = val1/(val2 * val3);
    return final_value;

}
int main(){
    int n ,r;
    cout<<"welcome! , find your combinations"<<endl;

    cout<<"Enter n number :";
    cin>>n;
    cout<<"Enter r number :";
    cin>>r;


    int answer = cobinations(n,r);

    cout<<"combination of "<<n<<" out of "<<r<<"is : "<< answer; 




    return 0 ;
}