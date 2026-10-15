#include<iostream>
using namespace std;

int main() {                       // number trick modu operator and division to get last digit
    int n;
    
    cout << "enter a 3 digit number : ";  
    cin >> n;

    int num = n; 

    int dig1 = num % 10;         // 351 % 10 ==> 1(last digit)
    num /= 10;                  // 351 / 10 ==> 35 (because int)

    int dig2 = num % 10;         //  35 % 10 ==> 5(midddle digit)
    num /= 10;                  //   35 / 10 ==> 3

    int dig3 = num;            // 3(first digit)



    int cubeSum = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;
    
    if (cubeSum == n) {
        cout << n << " is an Armstrong Number\n";
    } else {
         cout << n << " is NOT an Armstrong Number\n";
    }


    return 0;
}