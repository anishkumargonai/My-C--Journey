#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a value of n : ";
    cin>>n;
    int factors = 0;
    for (int i = 1; i<=n;i++){
        if(n%i==0) {
        factors++; }
        
    }
    if (factors == 1) cout<<"Neighter composite nor prime";
    else if(factors>=3) cout<< "Composite";
    else cout <<"Prime";
}
     