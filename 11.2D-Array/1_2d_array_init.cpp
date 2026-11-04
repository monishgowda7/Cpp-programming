#include<iostream>
using namespace std;

int main(){

    int arr_2d[3][3] = { {1,2,3},      // same as numpy
                         {4,5,6},       
                         {7,8,9} };    

    cout<<arr_2d[1][1]<<endl;          // index starts from 0,1,2......
    return 0;
}