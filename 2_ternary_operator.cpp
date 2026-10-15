#include<iostream>
using namespace std;

int main(){

    int a=10;
    int b=15;

//     variable  condition   if true  else               if true stores a in largest else b 
    int largest = (a>b)    ?    a :     b;

    cout<<"largest number is : "<< largest<<endl;
    return 0;
}