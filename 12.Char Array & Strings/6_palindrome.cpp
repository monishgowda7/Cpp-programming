#include<iostream>
#include<cstring>
using namespace std;

bool palindrome(char word[] , int n){

   
    int st = 0 , end = n-1;
    while (st < end){

        if(word[st] != word[end]){
            cout<<"The word "<<word<<" is not a palindrome"<<endl;
            return false;
            st++; end--;
        }
    }

    cout<<"Given word is palindrome"<< endl;
    return true;


    
    
    
}
int main(){

    char word[] = "code";
    palindrome(word ,strlen(word));

    return 0;
}