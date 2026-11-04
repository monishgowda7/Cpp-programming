#include<iostream>
using namespace std;

int main(){

    int char1 = 'A';
    int char2 = 'a';
    int char3 = '1';        // we can store all of this
    int char4 = '$';
    int char5 = '\n';

    cout<<(int) 'A'<<endl;

    // we can also calculate position ans ascii value of character

    int c = 'F';
    int pos = c - 'A';                 // A 0th position , B 1st position ..............

    cout<< pos<<endl;
                          
    return 0;
}