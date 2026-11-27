
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1 ,2 , 7 , 18 , 45};
    int n = sizeof(arr)/4;
    int mx =    INT16_MIN ;
    int mn = INT16_MAX;
    for(int i =0;i<n; i++ ){
        // if(arr[i]>mx) mx=arr[i];
    //   if (arr[i]<mn)  mn = arr[i];
        mx= max(mx , arr[i]);
        mn = min(mn,arr[i]);
    }

    cout<<mx<<endl;
    cout<<mn;
}
