#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter array size: ";
   cin>>n;
   int multiplication=1;
   int arr[n];
      cout<<"Enter array elements: ";
   for(int i=0; i<=n-1;i++){
   
      cin>>arr[i];
      multiplication *= arr[i];
   }
   cout<<multiplication<<" ";
}