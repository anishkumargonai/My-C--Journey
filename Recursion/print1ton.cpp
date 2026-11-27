// #include<iostream>
// using namespace std;
// void print (int x , int n){
//     if (x>n) return;
//     else cout<<x<<endl;
//     print(x+1,n);
// }
// int main(){
//     int n;
//     cout<<"Enter value of n: ";
//     cin>>n;
//     print(1,n);
// }

#include<iostream>
using namespace std;
void print (int n){
    if (n==0) return; //base case
    print(n-1);   // call
    cout<<n<<endl;  // work
}
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    print(n);
}