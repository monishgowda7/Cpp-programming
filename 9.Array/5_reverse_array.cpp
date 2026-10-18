#include<iostream>
using namespace std;

// int main(){
    
//     // ----- extra space method -------

//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(int);
     
//     int copy_arr[n];

//     for (int i=0; i<n; i++){
//         int j = n-i-1;                 // last element of arr
//         copy_arr[i] = arr[j];          // inserting last value of arr into 1st index of copyarr 
        
//     } 


//     for(int i=0; i<n; i++){
//         arr[i] = copy_arr[i];
//     }


//     // we have reversed the array
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<<endl;
//     return 0;
// }

// without extra space but time complexity remain same in both the method

// ------ Swapping method -------
int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    int start = 0 , end=n-1;

    while(start<end){
        int temp = arr[start];        // we can use swap(arr[start],arr[end]) instead 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }


    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}