#include<iostream>
using namespace std;
int main(){
    int arr[]= { 10 , 15 , 20, 45 , 58};
    int n = sizeof(arr)/4;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;

}