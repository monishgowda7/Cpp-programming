// Q : WAP where user keep entering the number till they enter the multiple of 10


#include<iostream>
using namespace std;

int main(){

    int input_num;
    do{
        cout<<"Enter a number : ";
        cin>>input_num;
        


        if (input_num % 10 == 0){
            cout<<"You came out of the loop"<<endl;
            break;
        } 
    }while(true);

    return 0;
}