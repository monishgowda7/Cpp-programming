#include<iostream>
using namespace std;


int main(){
   
    // int arr[] = {1,2,3,4,5};      this predeclared sized array

    int size;
    cin>>size;

    int *arr = new int[size];     // what here is i created the new memory location for int of size size then stored that address in arr pointer
   
    int num=0;
    for(int i=0; i<size; i++){
        arr[i] = num;
        num++;
    }

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    
    return 0;
}