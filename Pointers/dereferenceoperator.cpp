#include<iostream>
using namespace std;
int main(){
    int x=3;
    int *ptr = &x;
     cout<<x<<endl;  // or eta lekha jai int *p=&x 
   *ptr= 23; // x=23

    cout<<x<<endl;
}          