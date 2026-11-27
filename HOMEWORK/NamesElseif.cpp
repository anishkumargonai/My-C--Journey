// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     if(n%5==0 && n%3==0 ) cout<<"Anuj";
//     else if (n%5==0) cout<<"Kartik";
//     else if (n%3==0)cout<<"Shakshi";
//     else cout<<"Hitesh";
// } //   OR

#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%5==0 && n%3==0 ) cout<<"Anuj";
    if (n%5==0 && n%3!=0) cout<<"Kartik";
    if (n%3==0 && n%5!=0)cout<<"Shakshi";
    if(n%5!=0 && n%3!=0) cout<<"Hitesh";
}