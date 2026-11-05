#include<iostream>
using namespace std;

void dynamic(){
    int size;
    cin>>size;

    int *arr = new int[size];    
   
    int num=0;
    for(int i=0; i<size; i++){
        arr[i] = num;
        num++;
    }

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;

    delete[] arr;           // for array
    // delete num                for single variable 
}


int main(){
    
    dynamic();
    // cout<<arr[0];      this will give error bcz array is in the dynamic not in main, once we create the arr in dynamic space will be stored and ot can't used in the main ,but space is stored so we need to delete that after the execution
    
    
    return 0;
}