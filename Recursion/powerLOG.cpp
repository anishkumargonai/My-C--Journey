#include<iostream>
using namespace std;
int pow(int a , int b ){
    if (b==0) return 1;
    else if (b%2==0){
        return pow(a , b/2) * pow(a , b/2);
    }
    else if (b%2!=0) {
        return pow(a , b/2) * pow(a , b/2) *a ;
    }
}
int main(){
    int a, b;
    cout<<"Enter the value of a : ";
     cin>>a;
    cout<<"Enter the value of b : ";
     cin>>b;
    cout<<"The Result is: "<<pow(a , b);
}
 

// OR

// #include<iostream>
// using namespace std;

// int myPow(int a, int b) {
//     if (b == 0) return 1;

//     int half = myPow(a, b/2);

//     if (b % 2 == 0) {
//         return half * half;
//     }
//     else {
//         return half * half * a;
//     }
// }

// int main() {
//     int a, b;

//     cout << "Enter the value of a: ";
//     cin >> a;

//     cout << "Enter the value of b: ";
//     cin >> b;

//     cout << myPow(a, b);
// }