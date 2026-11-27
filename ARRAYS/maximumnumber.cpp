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
int min = INT_MAX;
for (int i=0; i<n;i++){
    cin>>arr[i];
   if(arr[i]> max) {
    max = arr[i];
   }
    if(arr[i]< min) {
    min = arr[i];
   }
}

   cout<<"Maximum value is: "<<max;
   cout<<endl;
   cout<<"Minimum value is: "<<min;

}