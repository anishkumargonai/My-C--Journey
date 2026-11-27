#include<iostream>
using namespace std;
int print(int n){
    cout<<n<<endl;
    if(n==1) return 1;
   return print(n-1);
    
}
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    print (n);
}
    