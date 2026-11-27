#include <iostream>
// #include<cmath>
using namespace std;
int main()
{ int n;
    cout<<"Enter Number: ";
    cin>>n;
    int noofdigits =0;
    while(n!=0){
        n=n/10;
        noofdigits++;
       
    }
 cout<<noofdigits;

}