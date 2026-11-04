#include<iostream>
#include<climits>
using namespace std;

// brute force method
void maxsubarrysum(int *arr , int n){

    int max_sum = INT_MIN;                       
    for(int start=0; start<n; start++){         
        int curr_sum=0;
        for(int end=start; end<n; end++){         // refer notes   
            curr_sum+=arr[end];
            max_sum = max(max_sum , curr_sum);
        }
        cout<<endl;
    }

    cout<<"Maximum sum of a subarray : "<<max_sum<<endl;
}


int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    maxsubarrysum(arr , n);

    return 0;
    
}