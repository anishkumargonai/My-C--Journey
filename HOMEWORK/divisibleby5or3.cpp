#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter a number: ";
 cin>>n;
 if (n%5 ==0 && n%3 == 0) cout<<"Divisible by both 5 & 3 ";
 else if (n %5==0) cout<<"Divisible only by 5"<<endl;
 else if (n%3 == 0) cout<<"Divisible only by 3"<<endl;
 else cout<<"Not divisible by 3 or 5";
}