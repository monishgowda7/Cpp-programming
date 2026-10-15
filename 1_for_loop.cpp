#include<iostream>
using namespace std;

int main(){

    for(int num=1;num<=5;num++){          // intialization --> condition --> print --> updation --> condition --> print --> updation
        cout<<num<<" ";                   // num can't acces outside for loop
    }

    cout<<'\n';
    
    int n;
    for(n=1;n<=5;n++){          
        cout<<n<<" ";                   // n can acces outside for loop
    }

    cout<<"last n is : "<<n<<endl;
    return 0;
} 