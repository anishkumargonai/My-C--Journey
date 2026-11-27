#include<iostream>
using namespace std;
void sum (int n , int s ){
    if(n<1){
        cout<<s;
        return ;
    }
    sum(n-1 , s+n );
}
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    sum(n,0);
}
    