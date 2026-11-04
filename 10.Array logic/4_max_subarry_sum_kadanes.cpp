#include<iostream>
#include<climits>
using namespace std;


// kadanes algorithm
void maxsubarrysum(int *arr , int n){

    int max_sum = INT_MIN;                       
    int curr_sum=0;
    for(int start=0; start<n; start++){ 
        curr_sum+=arr[start];
        max_sum = max(max_sum ,curr_sum );
        if (curr_sum < 0){
            curr_sum=0;
        }
    }

    cout<<"Maximum sum of a subarray : "<<max_sum<<endl;
}


int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    maxsubarrysum(arr , n);

    return 0;
    
}