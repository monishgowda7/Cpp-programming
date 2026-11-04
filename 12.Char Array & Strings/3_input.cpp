#include<iostream>
using namespace std;
 int main(){

    // char word[50];  // does't  take the word after the whitespace
    // cout<<"enter the word : ";
    // cin>>word;

    // cout<<"the word is : "<<word<<endl;


    // to take the word after the white space we use cin.getline
    


    char sentence[50]; 
    cout<<"enter the sentence : ";
    cin.getline(sentence , 50);       // now it will accept word after spaces
    // cin.getline(sentence , 50 ,"*");      // "* "  star is used to not take the word after the star occurance in input



    cout<<"the sentence is : "<<sentence<<endl;


    return 0;
 }