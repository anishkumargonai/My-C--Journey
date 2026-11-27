#include<iostream>
using namespace std;
int main(){
 char a;
 cout<<"Enter alphabet: ";
 cin>>a;
 if(65<= (int)a && (int)a<=90) cout<<"Capital alphabet";
 else cout<<"Not a capital alphabet";
}