#include<iostream>
#include<vector>
using namespace std;


int main(){
    
    // each row acts as a vector here
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

    vector<vector<int>> matrix2 = {{1,2,3},{4,5},{7}};          // it is dynamic matrix so this is also possible



    for(int i=0; i<matrix.size(); i++){               //  goes to row
        for(int j=0; j<matrix[i].size(); j++){            // goes to each column

            cout<<matrix[i][j]<<"|";
        }
        cout<<endl;
    }

    return 0;
}