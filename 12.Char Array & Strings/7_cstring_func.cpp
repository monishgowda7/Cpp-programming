#include<iostream>
#include<cstring>
using namespace std;



int main(){

    // char str1[] = "hello world";          // we can do this 

    char str1[100];
    // str1 = "hello world";              // we can't do this so we can use strcpy for this

    strcpy(str1  ,"hello world ");        // strcpy(destination , source)
    cout<<str1<<endl;

    //------------------------------------------------------------------------------------------------------


    char str2[100] = "how are  you";

    strcat(str1 , str2);        // joining the str2 to str 1 

    cout<<str1<<endl;


    //--------------------------------------------------------------------------------------------------------


    cout<<strcmp(str1 , str2)<<endl;            // gives -ve , 0 , +ve 

    // not about the length about ascii value
    // if word are same then it returns 0 , if 1st word is greater the +ve ..............


    return 0;
}