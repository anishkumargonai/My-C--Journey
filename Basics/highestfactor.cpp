#include <iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter a value of n: ";
    cin>>n;
    int f; // highest factor store er jonno eta
    for (int i =1; i<n;i++){
        if (n%i==0) f = i;
        
        
    }
    cout<<f;
    
}