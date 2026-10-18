#include<iostream>
using namespace std;

int lenearSearch(int *arr , int size , int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            cout<<"Key found at index :";
            return i;
        }

    }
    cout<<"Key not found ";
    return -1;
    
}

int main(){
    int key; 
    int arr[10] = {1,6,8,3,80,3,7,9,4,3};
    int n  = sizeof(arr)/sizeof(int);

    cout<<"Enter a key to search :";
    cin>>key;

    cout<<lenearSearch(arr ,n, key);

    return 0;
}