#include<iostream>
#include<climits>
using namespace std;


void best_buy(int *arr , int n){
    
    int buystock[100000];
    buystock[0] = INT_MAX;
    for(int i=1; i<n;i++){
        buystock[i] = min(buystock[i-1] , arr[i-1]);

    }

    int max_profit = 0;

    for(int i=0; i<n; i++){
        int curr_profit = arr[i] - buystock[i];
        max_profit = max(curr_profit, max_profit);
    }


    cout<<"Maximun profit is : "<< max_profit<<endl;

}



int main(){

    int arr[] =  {7,1,5,3,6,4};
    int n = sizeof(arr) / sizeof(int);
     
    best_buy(arr , n);


}