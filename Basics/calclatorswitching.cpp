#include<iostream>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    char op; // op= operator
    cin>>op;
    int n2;
    cin>>n2;
    switch(op){
        case '+':
        cout<<n1+n2<<"\n";
        break;
         case '-':
        cout<<n1-n2<<"\n";
         break;
         case '*':
        cout<<n1*n2<<"\n";
         break;
         case '/':
        cout<<n1/n2<<"\n";
         break;
        default:
        cout<<"Invalid operator";
    }
}