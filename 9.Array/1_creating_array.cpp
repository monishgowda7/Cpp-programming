// contiguous memory allocated and memory is statically allocated(at compile time)

#include<iostream>
using namespace std;

int main(){
    
    int marks[5];   // garbage value will be store

    int score[5] = {1,2,3,4,5};    // we allocated value for all index here

    int mark[] = {1,2,3};         // size of the array will be equal to no of elements in right

    
    // size of an array

//  cout<<"Len of a array : "<< sizeof(marks)<<endl;         // output is 20 bcz, --> 5 ele * 4 byte(size of a int)
    cout<<"Len of a array : "<< sizeof(marks) / sizeof(int)<<endl;  

    
    return 0;
}