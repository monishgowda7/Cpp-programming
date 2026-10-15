// check prime or not

// for non prime number it have factor between (2, n-1)
// for prime no factor between (2, n-1)

#include<iostream>
using namespace std;

int main(){
    
    int num;
    bool is_prime = true;
    cout<<"Enter a number :";
    cin>>num;

//    instead    i<=sqrt(num)     can also valid
    for(int i=2 ; i<=num-1; i++){             
        if (num % 2 == 0){
            is_prime = false;
            break;
        }
    }
    if (is_prime ==true){
        cout<<"Entered number is prime"<<endl;
    }
    else{
        cout<<"Entered number is not a prime"<<endl;
    }

    return 0;
}


#include<iostream>
using namespace std;

int main(){
    int num;
    int facto=1;
    cout<<"Enter a number : ";
    cin>>num;

    for(int i=1; i<=num; i++){
        facto = facto*i;

    }

    cout <<"Factorial of a given number is : "<<facto<<endl;
    return 0;

}