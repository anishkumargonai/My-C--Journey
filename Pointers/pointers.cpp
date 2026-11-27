#include<iostream>
using namespace std;
int main(){
    int x=3;
    int *p;  // or eta lekha jai int *p=&x 
    p=&x;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<x<<endl;
    cout<<*p<<endl; // *p ta holo derefference operator
    cout<<&p<<endl; // 0x60ff08 eta p er adress
}          
// 0x60ff08
// 0x60ff08