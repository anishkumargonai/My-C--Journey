#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter array Size: ";
cin>>n;
int arr[n];
cout<<"Enter arrray elements: ";
for(int i =0; i<=n-1;i++){
    cin>>arr[i];
    cout<<arr[i]<<" ";
}
cout<<endl;
for(int i =0; i<=n-1;i++){
    if(arr[i]<0) cout<<arr[i]<<" ";

}
}