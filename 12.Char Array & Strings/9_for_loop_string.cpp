#include<iostream>
#include<string>
using namespace std;

int main(){

    string str = "hello world";

    // for(int i=0; i<str.length(); i++){                  // two ways
    //     cout<<str[i];
    // }
    // cout<<endl;


    for(char ch : str){
        cout<<ch<<",";
    }

    return 0;
}