#include<iostream>
#include<cstring>
using namespace std;

int main(){                                // char array is terminated with null character which is \0

    // we can declare char array in four different ways

    char word1[5] = {'a' , 'b', 'c', 'd','\0'};
    char word2[] = {'a' , 'b', 'c', 'd'};
    char word3[5] = "abcd";                       // here abcd have 4 character but i intialized word3 with 5 size bcz of '\0' will fill the 5th place
    char word4[] = "abcd";

    cout<< word1<<endl;
    cout<< word3[3]<<endl;

    cout<< strlen(word1)<<endl;       // it gives the len of the char array
    cout<< strlen(word3)<<endl;

    return 0;
}