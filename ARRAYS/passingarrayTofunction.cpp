
#include<iostream>
using namespace std;
void change  (int x []){
    x [0] = 9;
}

int main(){
  int arr[3] = {7 , 45 , 18} ; 
 for(int i=0; i<3 ; i++){
    cout<<arr[i]<<" " ;
 }
 cout<<endl;
 change(arr); 

  for(int i=0; i<3 ; i++){
    cout<<arr[i]<<" "  ;
 }



}