#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> vtr = {1,2,3,4};                           // interview question

    cout<<" size of vtr : "<<vtr.size()<<endl;
    cout<<" capacity of vtr : "<<vtr.capacity()<<endl;    // initially the caapcity will same as size

    vtr.push_back(5);             // capacity is full now , put i tried to push the 5 in back direction,  
                                //  now what happens here is capacity will be double


    cout<<" size of vtr : "<<vtr.size()<<endl;                   // size become 5 here
    cout<<" capacity of vtr : "<<vtr.capacity()<<endl;         // capacity will be 8

    vtr.push_back(6);

    cout<<" size of vtr : "<<vtr.size()<<endl;                   // size become 6 here
    cout<<" capacity of vtr : "<<vtr.capacity()<<endl;         // capacity still remains 8 , when size become 8
                                                       //  cpacity will be 8 , when you tried to put 9th element , now capacity will again double from 8--->16
                                                

    vtr.pop_back();                  //  size become 5 , but capacity still at 8

    cout<<" size of vtr : "<<vtr.size()<<endl;                   
    cout<<" capacity of vtr : "<<vtr.capacity()<<endl;
    return 0;
}