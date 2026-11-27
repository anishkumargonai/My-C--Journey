#include<iostream>
using namespace std;
int main(){
    int a , b,c;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Enter 3rd number: ";
    cin>>c;
    if (a>b & a>c ) cout<<"A is greatest";
    else if (b>a & b>c) cout<<"B is greatest";
    else cout<< "C is greatest";
}