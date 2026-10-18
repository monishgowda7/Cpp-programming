#include<iostream>
using namespace std;

int binarySearch(int *arr , int size , int key){

    int st = 0, end = size-1;

    while(st<=end){

        int mid = (st+end)/2;

        if (arr[mid] == key){
            cout<<"key found at index : "<<mid;
            return mid;
        }
        else if(arr[mid] < key){
            st = mid+1;
        }
        else if (arr[mid] > key){
            end = mid-1;
        }
    }
    cout<<"key not found ";
    return -1;

}
int main(){
    int key;
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    
    cout<<"Enter a key to search :";
    cin>>key;

    binarySearch(arr , n, key);
    cout<<endl;
    return 0;
}

// note arry pointer can not store the address of other variable , its stores only address of its
// while variable pointer can be modified , and can store the address of other variable