#include<iostream>
#include<climits>

using namespace std;
int main(){
    int x= INT_MAX;
    cout<<x<<endl;
    int y = 2147483649; // this is out of the range
    cout<<y<<endl;
    int z= INT_MIN; // this is the lowest number 
    cout<<z<<endl;
}