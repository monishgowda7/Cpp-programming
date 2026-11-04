#include<iostream>
using namespace std;

void func(int mat[][3] , int n ,int m){

    // access the row
    cout<< *(*mat) <<endl;   // 1st row
    cout<< *(*(mat+1))  <<endl;   // 2st row


    // access the column

    cout<< *(*(mat + 1) + 1)  << endl;   // accessing the  1st row 1st col element

    // what we did here is we *(mat+1) points 1st row * access the 1st element address then +1 moves to next element of same row  *(..whole..) give that element

}

int main(){

    int mat[3][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}};

    func(mat, 3,3);

    return 0;
}