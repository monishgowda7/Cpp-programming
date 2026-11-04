#include<iostream>
using namespace std;


void spiralmatrix(int mat[][3] , int n , int m){     // it compulsory  to give the 2nd dimension(col)

    int srow = 0 , scol = 0;
    int erow = n-1 ,ecol = m-1;
    while(srow <= erow  && scol <=ecol){       // remember 3x5  and 5x3 matrix
        // top
        for(int j=scol;  j<=ecol;  j++){
            cout<<mat[srow][j]<<" ";
        }

        // right
        for(int i=srow+1;  i<=erow; i++){
            cout<<mat[i][ecol]<<" ";
        }

        //bottom
        for(int j=ecol-1; j>=scol; j--){
            if(scol == ecol){                     // corner case : to get rid of duplicate print in odd matrix
                break;
            }
            cout<<mat[erow][j]<<" ";
        }

        // left
        for(int i=erow-1; i>=srow+1; i--){
            if(srow == erow){                     // corner case : to get rid of duplicate print in odd matrix
                break;
            }
            cout<<mat[i][scol]<<" ";
        }

        srow++; scol++;
        erow--; ecol--;

    }

    cout<<endl;
}

int main(){

    int mat[3][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};


    spiralmatrix(mat , 3,3);

    return 0;

}