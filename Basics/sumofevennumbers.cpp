#include <iostream>
// #include<cmath>
using namespace std;
int main()
{ int n;
    cout<<"Enter Number: ";
    cin>>n;
    int sum =0;
    while(n!=0){
        int ld= n%10;
        n=n/10;
        if(ld%2!=0) continue;
        sum +=ld;
       
    }
 cout<<sum;
}
