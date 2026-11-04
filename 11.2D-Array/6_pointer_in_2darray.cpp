#include<iostream>
using namespace std;

int main(){

    int mat[3][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}};

    cout<< mat <<endl;                    // in 2d array ,the pointer points to one complete row , and mat is at the index of 1st element of that row
    cout<< mat+1 <<endl;            // her pointer comes to 2nd row points to 1st element of 2nd row


    cout<< mat <<" = " << &mat[0][0]<<endl;
    cout<< mat +1 <<" = " << &mat[1][0]<<endl;    


    // mat points to 1st row having 3 elements , and mat +1 shifts to 2nd row , so now address also jumps by    3 ele * 4(int size)  12 from the 1st row(1st ele) address  

    // so to jump the address here no of elements in a row(no of col) matters so that is why we passes the 2nd dimension no of columns to the another function
    return 0;
}