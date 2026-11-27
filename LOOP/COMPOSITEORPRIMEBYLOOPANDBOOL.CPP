#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a value of n : ";
    cin>>n;
    bool anish = false ;// false mane ekahne prime number ache store
    for (int i = 2; i<=n-1;i++){
        if(n%i==0) {
         anish= true;
        break;
    }
        
    }
    if(anish=true) cout<< "Composite";
    else cout<<"Prime";
}
    