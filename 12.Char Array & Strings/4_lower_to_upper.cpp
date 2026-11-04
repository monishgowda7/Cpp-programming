#include<iostream>
#include<cstring>
using namespace std;


void toUpper(char word[] , int n){

    for(int i=0; i<n; i++){
        char ch = word[i];

        if(ch>='A' && ch<='Z'){
            continue;
        }
        else{
            word[i] = ch - 'a' + 'A';          // ch - a finds position when we add 'A' it will caps of that word
        }
    }
    cout<<"The final word is : "<<word<<endl;

}



int main(){

    char word[] = "ApPle";
    toUpper(word ,strlen(word));
    
   

    return 0;
}