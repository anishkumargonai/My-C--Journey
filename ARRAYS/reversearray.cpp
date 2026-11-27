#include<iostream>
#include<vector>
using namespace  std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr [n];
    cout<<"Enter array elements: ";
    int i =0 , j=n-1;
    for (int i =0; i<n;i++){
        cin>>arr[i];
    }
    while ( i<j){
    //     int temp = arr[i];
    //     arr[i]= arr[j];
    //     arr[j]= temp;
    //     i++;
    //     j--;
    swap(arr[i],arr[j]);
    i++;
        j--;
    }
    cout<<"Reverse Arrray is: ";
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}

}