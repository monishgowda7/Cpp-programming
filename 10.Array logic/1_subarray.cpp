#include<iostream>
using namespace std;

void printsubarray(int *arr , int n){

    for(int start=0; start<n; start++){         // start indexes  , line index
        for(int end=start; end<n; end++){            // ending indexes  of a line

            for(int i=start; i<=end; i++){          
                cout<<arr[i];
            }
            cout<<" , ";
        }
        cout<<endl;
    }
}


int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    printsubarray(arr , n);

    return 0;
    
}