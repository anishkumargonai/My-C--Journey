#include <iostream>
using namespace std;
int fact(int x){
    int f=1;
    for (int h=1;h<=x;h++){
        f *=h;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    int r;
    cout<<"Enter value of r: ";
    cin>>r;
  int   a= fact(n);
    int  b= fact(n-r);
    cout<<a/b;
}
  
