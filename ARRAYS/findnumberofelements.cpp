
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1 ,2 , 7 , 18 , 45};
    int n = sizeof(arr)/4;
    int sum = 0; 
    int product =1;
    for(int i =0; i<n ; i++){
        sum +=arr[i];
        product *=arr[i];
    }
    cout<<"Sise of array: "<<n<<endl;
 cout<<"Net Sum: "<<sum<<" ";
cout<<"Net Product: "<<product<<" ";

}