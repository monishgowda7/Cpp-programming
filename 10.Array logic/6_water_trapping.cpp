#include<iostream>
using namespace std;

int trap(int *height , int n){
    int leftmax[20000] , rightmax[20000];
    leftmax[0] = height[0];
    rightmax[n-1] = height[n-1];


    for(int i=1; i<n; i++){
        leftmax[i] = max(leftmax[i-1] , height[i-1]);
    }

    for(int i=n-2; i>=0; i--){
        rightmax[i] = max(rightmax[i+1] , height[i+1]);
    }

    int watertrap = 0;

    for(int i=0; i<n; i++){
        int currtrap = min(leftmax[i] , rightmax[i]) - height[i];
        if(currtrap > 0){
            watertrap += currtrap;
        }
    }

    cout<<"Water traped is : "<< watertrap<<endl;
    return watertrap;



    return 0;
}


int main(){

    int arr[] = {4,2,0,6,3,2,5};
    int n = sizeof(arr)/ sizeof(int);

    trap(arr , n);
    return 0;
}





// sorting in c++ ASE--> sort(start , end) , ending index is exclusive(if u want find till 7 th index then ending index should be 8)
// sorting in c++ DESC--> sort(start , end , greater<int>()) , ending index is exclusive 