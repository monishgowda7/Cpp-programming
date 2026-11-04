#include<iostream>
using namespace std;

int main(){
    

    int arr[2][3];
    int row = 2 , col=3;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){

            cin>>arr[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){

            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


 //                                        100  104  108  112 ......      
// memory storage in 2d array is contiguous 1    2,   3,   4,  5,   6 ( for a row major)


 //                                        100  104  108  112 ......      
// memory storage in 2d array is contiguous 1    4,   2 ,  5   3,   6( for a column major)[1  2   3
//                                                                                         4  5   6]