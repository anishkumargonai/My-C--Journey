#include<iostream>
#include<cmath>
using namespace std;
int pow(int a , int b ){
    if(b==0)  return 1;
    return a* pow(a,b-1);
}

int main(){
int a , b;
cout<<"Enter value of a: ";
cin>>a;
cout<<"Enter value of b: ";
cin>>b;
 cout<<pow(a,b);

}
