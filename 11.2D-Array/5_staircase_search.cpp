#include<iostream>
using namespace std;
// O(n+m)      , if no of rows are high then O(n)  , if no of columns are high then O(m)
int search(int mat[][3] , int n ,int m , int key){

    int i = 0 , j=m-1;                    //  iam starting from 3  so j=m-1

    while(i<n && j>=0){

        if (mat[i][j] == key){
            cout<<"key found at the index ("<<i<<","<<j<<")"<<endl;
            return true;
        }

        // left
        else if (mat[i][j] > key){             // if key is less than the mat[][] , then move left
            j--;
        }

        // right
        else{                          // if key is greater than the mat[][]  , then move down
            i++;
        }
    }
    cout<<"key not found"<<endl;
    return 0;

}

int main(){

    int mat[3][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};

    search(mat ,3,3,5);
    return 0;
} 