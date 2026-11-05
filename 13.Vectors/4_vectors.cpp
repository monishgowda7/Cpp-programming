#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vectors are like dynamic array

    vector<int> vtr1;                     // this we just intilize
    vector<int> vtr2 = {1,2,3,4};
    vector<int> vtr3(5 ,1);           // create vector vtr3 of size 5 and fill with 1

    cout<< vtr2.size() <<endl;       // size is to claculate the number of elements in vector

    for(int i=0;  i<vtr3.size();  i++){
        cout<<vtr3[i]<<" ";
    }

    return 0;
}