// string is class , and we create the object str1 , str2..................

// int float are built in type , while string is class type

// it also terminated with null character 

// string are dynamic(size can change in the program) , we can change the str after the declaration , while it can't in char array

#include<iostream>
#include<string>
using namespace std;

int main(){

    string str1 = "hello";         
    str1 = "hiiiii";                 // this not possible in char array

    cout<<str1<<endl;


    //-------------------------------------------------


    string str2;

    getline(cin , str2);             /// space input problem is also exist with string so we use getline
    cout<<str2<<endl;

    // we can also can do indexing in it


    //---------------------------------------------------------------------------------
    // we can string comparision > < == 
    return 0;
}