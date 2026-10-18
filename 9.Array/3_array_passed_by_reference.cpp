#include<iostream>
using namespace std;


void changearr(int nums[] , int size){          // nums[] is same as *nums(pointer) we can't derive the size from pointer , so we need to pass size of our array with the array 
    nums[1] = 1000;
    cout<<size<<endl;
    cout<<nums<<endl;
    cout<<nums+1<<endl;
    cout<<*nums<<endl;
    cout<<*(nums+1)<<endl;


}
int main(){

    int arr[5]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);  // size of an array

    cout<<arr<<endl;             // this arr will pointig towards the location 0th index 
    cout<<arr+1<<endl;             
    cout<<&arr[1]<<endl;             
    cout<<*arr<<endl;            // now this will print the value at the 0th index
    cout<<*(arr+1)<<endl;        // now (arr+1) arr pointer move to next index which is 1st index
    cout<<endl;

    changearr(arr , n);             // this array arr will be called by reference and stored in nums[] which is same as *nums(pointer)
    cout<<arr[1]<<endl;

    return 0;
}