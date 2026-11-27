#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    bool flag = false; // False mane dhorlam je   array te present nai element ta
    cout<<"Enter Array elements: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a;
cout<<"Search the element :  ";
cin>>a;
for(int j=0; j<n; j++){
    if(arr[j]==a)   flag = true; // er mane holo je array te element ta khuje paoa gache
    cout<<"Element found";
     break;
}
    if(flag=false) cout<<"Element not  found";
}
