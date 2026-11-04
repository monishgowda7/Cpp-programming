#include<iostream>
#include<string>
using namespace std;

int main(){

    string str = "hello iam monish iam";

    cout<<str.length()<<endl;        // prints lenth of string
    cout<<str[2]<<endl;
    cout<<str.at(2)<<endl;            // print alpha at index 2 
    cout<<str.substr(1,5)<<endl;    // if i need substring from index 1 to size of 5(mean 5 alphabeat , from index 1 to 5 alphabeat)

    cout<<str.find("iam")<<endl;    // print the index of the first alphabeat of the word
    cout<<str.find("iam" ,10)<<endl;         // here i told to find iam from 10th index    
}