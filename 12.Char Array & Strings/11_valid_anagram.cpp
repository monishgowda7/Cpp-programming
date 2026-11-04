#include<iostream>
#include<string>
using namespace std;

bool Anagram(string str1 ,string str2){

    int indexing[26] = {0};
    if (str1.length() != str2.length()){
        cout<<"this is not a valid anagram";
        return false;
    }

    for(int i=0;  i<str1.length();  i++){
        indexing[str1[i] - 'a']++;
    }

    for(int i=0;  i<str2.length();  i++){
        int idx = str2[i]-'a';
        if(str2[idx] == 0){
            cout<<"this is not a valid anagram";
            return false;
        }
        indexing[idx]--;
    }

    cout<<"it is a valid anagram";
    return true;


}


int main(){

    string str1 = "anagram";
    string str2 = "nagaram";

    Anagram(str1 ,str2);
    return 0;
}