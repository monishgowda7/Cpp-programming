// refer the notes for bitwise operator and logic


#include<iostream>
using namespace std;

int getIthBit(int n , int i){

    int bitmask = 1<<i;

    if((bitmask & n) == 0){            // after refering notes, try understand the logic
        return 0;
    }
    else{
        return 1;
    }

}
int main(){
    
    cout<<getIthBit(5 ,1);
    
    return 0;
}