#include<iostream>
#include<climits>
using namespace std;

// brute force method
void maxsubarrysum(int *arr , int n){

    int max_sum = INT_MIN;                       
    for(int start=0; start<n; start++){         // start indexes  , line index
        for(int end=start; end<n; end++){            // ending indexes  of a line
            int curr_sum=0;

            for(int i=start; i<=end; i++){          
                curr_sum+=arr[i];
            }
            cout<<curr_sum;
            cout<<" , ";
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