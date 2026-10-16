#include<iostream>
using namespace std;


/* return_datatype  fun_name(){

     do something;
     return datatype 

 }                  */

void sayhello(){
    cout<<"Hello :)\n";
}


int numb(){
    cout<<"hi\n";
    return 1;
}
char character();         // declareing func name here because , i wrote my function below the main function


int main(){
//  numb();                             // prints only hi    
    cout<<numb()<<endl;                       // prints both hi and 1

    character();            // we need to declare our function above main function ,or if we are declaring below the main function we just need to decalre its name above
    return 0;                
}


char character(){
    cout<<"iam character function";
    return 'A';
}