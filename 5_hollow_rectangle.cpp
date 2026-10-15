#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter square size : ";
    cin>>n;

// take n=5 
    for(int i=1; i<=n; i++){
        cout<<"*";                        // first column
                                //          one star  +                remaining star                  +one star
        for(int j=1; j<=n-1; j++){        // first cout+ middel (n-1)for rectangle or (n-2) for square +last cout
            if (i==1 || i==n){
                cout<<"*"; 

            }else{
                cout<<" ";
            }
        }
        cout<<"*"<<endl;                // last column
    }   
    return 0;
}