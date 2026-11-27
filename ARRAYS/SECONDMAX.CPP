#include<iostream>
#include<climits>
using namespace std;
int main(){
  int n;
  cout<<"Enter array size: ";
  cin>>n;
cout<<"Enter array elements: ";
int arr[n];
int max= INT_MIN;
int smax = INT_MIN;
for (int i=0; i<n;i++){
    cin>>arr[i];
   if(arr[i]> max) {
    max = arr[i];
   }
}
for (int i=0; i<n;i++){
   if (arr[i]==max) continue;
   if(arr[i]> smax  ) smax = arr[i];

}
cout<<"Second maximum number is: " <<smax;
}
