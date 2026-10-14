#include<iostream>
using namespace std;

int main(){
    float PI = 3.1415;
    cout<<(10 / 3)<<endl;         // out put will be a int type bcz both 10, 3 are int type
    cout<<(10 / 3.0)<<endl;       // out put will be of float type bcz 3.0 is float(high memory), comp gives protion to 10 as float 10.000


    cout<<('A' +1 )<<endl;        // here 1 (high memory 4bytes) char(1 byte) so , compiler will give promotion to 'A' and A becomes int datatype A value 65
    cout<<('a' +1 )<<endl;

 

    // explicit type conversion
    cout<<(int)(10/3)<<endl;
    cout<<((float)10/3)<<endl;
    cout<<(char)('A' + 1)<<endl;
    cout<<(int)(PI)<<endl;
    cout<<(bool)(10)<<endl;            // non zero of bool is 1

    return 0;
}