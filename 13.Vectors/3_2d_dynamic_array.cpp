#include<iostream>
using namespace std;


int main(){
   
   int rows, col;

   cout<<"enter no rows : ";
   cin>>rows;

   cout<<"enter no columns : ";
   cin>>col;


   int* *matrix = new int*[rows];       // this gives the row pointer

   for(int i=0;  i<rows; i++){
        matrix[i] = new int[col];     // in the row we pointes to the columns
   }


   int x=1;
   for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            matrix[i][j] = x++;
            cout<<matrix[i][j]<<" ";
       }
       cout<<endl;
    }



    return 0;
}



// ---------------------------------------------------

// STL - standard templete library  , there will be the in build data structure like stack vector available we can use it directly without implementation