#include<iostream>
using namespace std;

int main(){
    
    int arr[5] = {5,3,6,8,2};
    int n = sizeof(arr)/sizeof(int);
    
    // max 
    int max = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    // min
    int min = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }



    cout<<"Maximum element in array is : "<< max<<endl;
    cout<<"Minimum element in array is : "<< min<<endl;
    return 0;
}